/*
 *  TOPPERS/ASP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Advanced Standard Profile Kernel
 * 
 *  Copyright (C) 2000-2003 by Embedded and Real-Time Systems Laboratory
 *                              Toyohashi Univ. of Technology, JAPAN
 *  Copyright (C) 2004-2012 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *  Copyright (C) 2015-2016 by TOPPERS PROJECT Educational Working Group.
 * 
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 * 
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 * 
 *  $Id$
 */

/*
 *  ARDUNO-PINドライバ
 */

#include <kernel.h>
#include <t_syslog.h>
#include <t_stdlib.h>
#include <string.h>
#include <target_syssvc.h>
#include <sil.h>
#include "syssvc/serial.h"
#include "syssvc/syslog.h"
#include "kernel_cfg.h"
#include "stm32f767xx.h"
#include "device.h"
#include "pinmode.h"

#define sil_orw_mem(a, b)		sil_wrw_mem((a), sil_rew_mem(a) | (b))
#define sil_andw_mem(a, b)		sil_wrw_mem((a), sil_rew_mem(a) & ~(b))
#define sil_modw_mem(a, b, c)	sil_wrw_mem((a), (sil_rew_mem(a) & (~b)) | (c))

#define TOFF_RCC_AHB1ENR    0x0030		/* (RW) RCC AHB1 peripheral clock register */
#define TOFF_GPIO_IDR       0x0010		/* (R)  GPIO port input data register */
#define TOFF_GPIO_BSRR      0x0018		/* (RW) GPIO port bit set/reset low register */

static const Arduino_PortControlBlock Digital_Port[] = {
#if defined(TOPPERS_STM32F7_DISCOVERY)
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOCEN, GPIOC_BASE, 7},	/* D0 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOCEN, GPIOC_BASE, 6},	/* D1 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOGEN, GPIOG_BASE, 6},	/* D2 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOBEN, GPIOB_BASE, 4},	/* D3 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOGEN, GPIOG_BASE, 7},	/* D4 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 8},	/* D5 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOHEN, GPIOH_BASE, 6},	/* D6 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOIEN, GPIOI_BASE, 3},	/* D7 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOIEN, GPIOI_BASE, 2},	/* D8 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 15},	/* D9 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOIEN, GPIOI_BASE, 0},	/* D10 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOBEN, GPIOB_BASE, 15},	/* D11 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOBEN, GPIOB_BASE, 14},	/* D12 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOIEN, GPIOI_BASE, 1}		/* D13 */
#else	/* TOPPERS_STM32F746_NUCLEO144 TOPPERS_STM32F767_NUCLEO144 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOGEN, GPIOG_BASE, 9},	/* D0 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOGEN, GPIOG_BASE, 14},	/* D1 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 15},	/* D2 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOEEN, GPIOE_BASE, 13},	/* D3 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 14},	/* D4 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOEEN, GPIOE_BASE, 11},	/* D5 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOEEN, GPIOE_BASE, 9},	/* D6 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 13},	/* D7 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 12},	/* D8 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIODEN, GPIOD_BASE, 15},	/* D9 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIODEN, GPIOD_BASE, 14},	/* D10 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 7},	/* D11 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 6},	/* D12 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 5}		/* D13 */
#endif
};

#define NUM_DIGITAL_PORT (sizeof(Digital_Port)/sizeof(Arduino_PortControlBlock))

static const Arduino_PortControlBlock Analog_Port[] = {
#if defined(TOPPERS_STM32F7_DISCOVERY)
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 0},	/* A0 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 10},	/* A1 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 9},	/* A2 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 8},	/* A3 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 7},	/* A4 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 6}		/* A5 */
#else	/* TOPPERS_STM32F746_NUCLEO144 TOPPERS_STM32F767_NUCLEO144 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOAEN, GPIOA_BASE, 3},	/* A0 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOCEN, GPIOC_BASE, 0},	/* A1 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOCEN, GPIOC_BASE, 3},	/* A2 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 3},	/* A3 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 5},	/* A4 */
  { (RCC_BASE+TOFF_RCC_AHB1ENR),  RCC_AHB1ENR_GPIOFEN, GPIOF_BASE, 10}	/* A5 */
#endif
};

#define NUM_ANALOG_PORT (sizeof(Analog_Port)/sizeof(Arduino_PortControlBlock))

void
pinClock(uint8_t no)
{
	const Arduino_PortControlBlock *ppcb = &Digital_Port[no];

	if(no >= NUM_DIGITAL_PORT)
		return;
	sil_orw_mem((uint32_t *)ppcb->gioclockbase, ppcb->gioclockbit);
}

void
digitalWrite(uint8_t no, int sw)
{
	const Arduino_PortControlBlock *ppcb = &Digital_Port[no];

	if(no >= NUM_DIGITAL_PORT)
		return;
	if(sw == 0)
		sil_wrw_mem((uint32_t *)(ppcb->giobase+TOFF_GPIO_BSRR), (1<<(ppcb->giopin+16)));
	else
		sil_wrw_mem((uint32_t *)(ppcb->giobase+TOFF_GPIO_BSRR), (1<<(ppcb->giopin)));
}

int
digitalRead(uint8_t no)
{
	const Arduino_PortControlBlock *ppcb = &Digital_Port[no];
 	int sw;

	if(no >= NUM_DIGITAL_PORT)
		return 0;
	sw = sil_rew_mem((uint32_t *)(ppcb->giobase+TOFF_GPIO_IDR));
	sw = (sw>>(ppcb->giopin)) & 1;
	return sw;
}

Arduino_PortControlBlock*
getGpioTable(uint8_t mode, uint8_t no)
{
	if(mode == ANALOG_PIN){
		if(no >= NUM_ANALOG_PORT)
			return NULL;
		return (Arduino_PortControlBlock*)&Analog_Port[no];
	}
	else{
		if(no >= NUM_DIGITAL_PORT)
			return NULL;
		return (Arduino_PortControlBlock*)&Digital_Port[no];
	}
}

#define TOFF_GPIO_AFR0      0x0020		/* (RW) GPIO alternate function registers */
#define TOFF_GPIO_MODER     0x0000		/* (RW) GPIO port mode register */
#define TOFF_GPIO_OSPEEDR   0x0008		/* (RW) GPIO port output speed register */
#define TOFF_GPIO_OTYPER    0x0004		/* (RW) GPIO port output type register */
#define TOFF_GPIO_PUPDR     0x000C		/* (RW) GPIO port pull-up/pull-down register */
#define TOFF_RCC_APB2ENR    0x0044		/* (RW) RCC APB2 peripheral clock enable register */
#define TOFF_SYSCFG_EXTICR0 0x0008		/* (RW) SYSCFG external interrupt configuration registers 0 */
#define TOFF_EXTI_IMR       0x0000		/* (RW) EXTI Interrupt mask register */
#define TOFF_EXTI_EMR       0x0004		/* (RW) EXTI Event mask register */
#define TOFF_EXTI_RTSR      0x0008		/* (RW) EXTI Rising trigger selection register */
#define TOFF_EXTI_FTSR      0x000C		/* (RW) EXTI Falling trigger selection register */

/*
 *  GPIOモードの内部定義
 */
#define GPIO_MODE               0x00000003
#define EXTI_MODE               0x10000000
#define GPIO_MODE_IT            0x00010000
#define GPIO_MODE_EVT           0x00020000
#define RISING_EDGE             0x00100000
#define FALLING_EDGE            0x00200000
#define GPIO_OUTPUT_TYPE        0x00000010

static const uint32_t gpio_index[] = {
	GPIOA_BASE,			/* index 0 */
	GPIOB_BASE,			/* index 1 */
	GPIOC_BASE,			/* index 2 */
	GPIOD_BASE,			/* index 3 */
	GPIOE_BASE,			/* index 4 */
	GPIOF_BASE,			/* index 5 */
	GPIOG_BASE,			/* index 6 */
	GPIOH_BASE,			/* index 7 */
	GPIOI_BASE,			/* index 8 */
	GPIOJ_BASE,			/* index 9 */
	GPIOK_BASE			/* index 10 */
};

#define NUM_OF_GPIOPORT (sizeof(gpio_index)/sizeof(uint32_t))

/*
 *  GPIOの初期設定関数
 */
void
gpio_setup(uint32_t base, GPIO_Init_t *init, uint32_t pin)
{
	uint32_t iocurrent = 1<<pin;
	uint32_t temp = 0x00;
	uint32_t index;

	for(index = 0 ; index < NUM_OF_GPIOPORT ; index++){
		if(gpio_index[index] == base)
			break;
	}
	if(index == NUM_OF_GPIOPORT)
		return;

	/*
	 *  GPIOモード設定
	 */
	/* アルタネート・ファンクション・モード設定 */
	temp = sil_rew_mem((uint32_t *)(base+TOFF_GPIO_AFR0+(pin>>3)*4));
	temp &= ~((uint32_t)0xF << ((uint32_t)(pin & (uint32_t)0x07) * 4)) ;
	if(init->mode == GPIO_MODE_AF)
		temp |= ((uint32_t)(init->alternate) << (((uint32_t)pin & (uint32_t)0x07) * 4));
	sil_wrw_mem((uint32_t *)(base+TOFF_GPIO_AFR0+(pin>>3)*4), temp);

	/*  入出力モード設定 */
	sil_modw_mem((uint32_t *)(base+TOFF_GPIO_MODER), (GPIO_MODER_MODER0 << (pin * 2)), ((init->mode & GPIO_MODE) << (pin * 2)));

	/*  出力モード設定 */
	if(init->mode == GPIO_MODE_OUTPUT || init->mode == GPIO_MODE_AF){
		sil_modw_mem((uint32_t *)(base+TOFF_GPIO_OSPEEDR), (GPIO_OSPEEDER_OSPEEDR0 << (pin * 2)), (init->speed << (pin * 2)));
		sil_modw_mem((uint32_t *)(base+TOFF_GPIO_OTYPER), (GPIO_OTYPER_OT_0 << pin), (init->otype << pin));
	}

	/*  プルアップ、プルダウン設定 */
	sil_modw_mem((uint32_t *)(base+TOFF_GPIO_PUPDR), (GPIO_PUPDR_PUPDR0 << (pin * 2)), (init->pull << (pin * 2)));

	/*
	 *  EXTIモード設定
	 */
	if((init->mode & EXTI_MODE) == EXTI_MODE){
		/*  SYSCFGクロック設定 */
		sil_orw_mem((uint32_t *)(RCC_BASE+TOFF_RCC_APB2ENR), RCC_APB2ENR_SYSCFGEN);
		temp = sil_rew_mem((uint32_t *)(RCC_BASE+TOFF_RCC_APB2ENR));

		temp = sil_rew_mem((uint32_t *)(SYSCFG_BASE+TOFF_SYSCFG_EXTICR0+(pin & 0x0C)));
		temp &= ~(0x0F << (4 * (pin & 0x03)));
		temp |= (index << (4 * (pin & 0x03)));
		sil_wrw_mem((uint32_t *)(SYSCFG_BASE+TOFF_SYSCFG_EXTICR0+(pin & 0x0C)), temp);

		if((init->mode & GPIO_MODE_IT) == GPIO_MODE_IT)
			sil_orw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_IMR), iocurrent);
		else
			sil_andw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_IMR), iocurrent);

		if((init->mode & GPIO_MODE_EVT) == GPIO_MODE_EVT)
			sil_orw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_EMR), iocurrent);
		else
			sil_andw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_EMR), iocurrent);

		if((init->mode & RISING_EDGE) == RISING_EDGE)
			sil_orw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_RTSR), iocurrent);
		else
			sil_andw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_RTSR), iocurrent);

		if((init->mode & FALLING_EDGE) == FALLING_EDGE)
			sil_orw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_FTSR), iocurrent);
		else
			sil_andw_mem((uint32_t *)(EXTI_BASE+TOFF_EXTI_FTSR), iocurrent);
	}
}

void
pinMode(uint8_t no, uint32_t mode)
{
	Arduino_PortControlBlock *pgcb = getGpioTable(DIGITAL_PIN, no);
	GPIO_Init_t GPIO_Init_Data;

	if(pgcb == NULL)
		return;
	pinClock(no);
	GPIO_Init_Data.mode  = mode;
	GPIO_Init_Data.pull  = GPIO_PULLUP;
	GPIO_Init_Data.otype = GPIO_OTYPE_PP;
	GPIO_Init_Data.speed = GPIO_SPEED_FAST;
	gpio_setup(pgcb->giobase, &GPIO_Init_Data, pgcb->giopin);
}


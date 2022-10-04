/*
 *  TOPPERS/ASP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Advanced Standard Profile Kernel
 * 
 *  Copyright (C) 2008-2011 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *  Copyright (C) 2015-2019 by TOPPERS PROJECT Educational Working Group.
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
 *  @(#) $Id$
 */
/*
 * STM32F7XX用デバイスドライバの外部宣言
 */

#ifndef _DEVICE_H_
#define _DEVICE_H_

#ifdef __cplusplus
 extern "C" {
#endif

/*
 *  TOPPERS BASE PLATFORM情報
 */
#define TOPPERS_BASE_PLATFORM_STF7

/*
 *  バージョン情報
 */
#define	TPLATFORM_PRVER 0x1041		/* プラットフォームのバージョン番号 */

/*
 * ピン設定
 */

#define PINPOSITION0    0
#define PINPOSITION1    1
#define PINPOSITION2    2
#define PINPOSITION3    3
#define PINPOSITION4    4
#define PINPOSITION5    5
#define PINPOSITION6    6
#define PINPOSITION7    7
#define PINPOSITION8    8
#define PINPOSITION9    9
#define PINPOSITION10   10
#define PINPOSITION11   11
#define PINPOSITION12   12
#define PINPOSITION13	13
#define PINPOSITION14	14
#define PINPOSITION15	15

#define GPIO_PIN_0      (1<<PINPOSITION0)
#define GPIO_PIN_1      (1<<PINPOSITION1)
#define GPIO_PIN_2      (1<<PINPOSITION2)
#define GPIO_PIN_3      (1<<PINPOSITION3)
#define GPIO_PIN_4      (1<<PINPOSITION4)
#define GPIO_PIN_5      (1<<PINPOSITION5)
#define GPIO_PIN_6      (1<<PINPOSITION6)
#define GPIO_PIN_7      (1<<PINPOSITION7)
#define GPIO_PIN_8      (1<<PINPOSITION8)
#define GPIO_PIN_9      (1<<PINPOSITION9)
#define GPIO_PIN_10     (1<<PINPOSITION10)
#define GPIO_PIN_11     (1<<PINPOSITION11)
#define GPIO_PIN_12     (1<<PINPOSITION12)
#define GPIO_PIN_13     (1<<PINPOSITION13)
#define GPIO_PIN_14     (1<<PINPOSITION14)
#define GPIO_PIN_15     (1<<PINPOSITION15)

/*
 *  GPIOモードパラメータ
 */
#define GPIO_MODE_INPUT     0x00000000	/* Input Floating Mode */
#define GPIO_MODE_OUTPUT    0x00000001	/* Output Mode */
#define GPIO_MODE_AF        0x00000002	/* Alternate Function Mode */
#define GPIO_MODE_ANALOG    0x00000003	/* Analog Mode  */

/*
 *  GPIO-EXTIモードパラメータ
 */
#define GPIO_MODE_IT_RISING             0x10110000	/* External Interrupt Mode with Rising edge trigger detection */
#define GPIO_MODE_IT_FALLING            0x10210000	/* External Interrupt Mode with Falling edge trigger detection */
#define GPIO_MODE_IT_RISING_FALLING     0x10310000	/* External Interrupt Mode with Rising/Falling edge trigger detection */
#define GPIO_MODE_EVT_RISING            0x10120000	/* External Event Mode with Rising edge trigger detection */
#define GPIO_MODE_EVT_FALLING           0x10220000	/* External Event Mode with Falling edge trigger detection */
#define GPIO_MODE_EVT_RISING_FALLING    0x10320000	/* External Event Mode with Rising/Falling edge trigger detection */

/*
 *  GPIOアウトプット設定パラメータ
 */
#define GPIO_OTYPE_PP       0x0
#define GPIO_OTYPE_OD       0x1

/*
 *  GPIOアウトプット最大周波数パラメータ
 */
#define GPIO_SPEED_LOW      0x00000000	/* Low speed     */
#define GPIO_SPEED_MEDIUM   0x00000001	/* Medium speed  */
#define GPIO_SPEED_FAST     0x00000002	/* Fast speed    */
#define GPIO_SPEED_HIGH     0x00000003	/* High speed    */

/*
 *  GPIOプルアップダウンパラメータ
 */
#define GPIO_NOPULL         0x00000000	/* No Pull-up or Pull-down activation  */
#define GPIO_PULLUP         0x00000001	/* Pull-up activation                  */
#define GPIO_PULLDOWN       0x00000002	/* Pull-down activation                */

/*
 *  GPIO初期化設定
 */
typedef struct
{
    uint32_t    mode;		/* specifies the operating mode for the selected pins. */
	uint32_t    pull;		/* specifies the Pull-up or Pull-Down */
	uint32_t    otype;		/* output type */
	uint32_t    speed;		/* speed for the selected pins. */
	uint32_t    alternate;	/* alternate for the selected pins. */
}GPIO_Init_t;

typedef struct {
	uint32_t    base;
	uint32_t    pinmap;
} GPIO_Init_Table;


extern void gpio_setup(uint32_t base, GPIO_Init_t *init, uint32_t pin);

/*
 *  SDRAMアドレス
 */
#define SDRAM_ADDRESS   0xC0000000

/*
 *  FMC SDRAM Bank
 */
#define FMC_SDRAM_BANK1 0
#define FMC_SDRAM_BANK2 1

extern void sdram_init(intptr_t exinf);


/*
 *  キャッシュ制御関数
 */
#define CACHE_LINE_SIZE	    32	/* cortex-m7 cacle line size */

extern void invalidatedcache_by_addr(uint8_t *addr, int32_t dsize);
extern void flushdcache_by_addr(uint8_t *addr, int32_t dsize);
extern void flushinvalidatedcache_by_addr(uint8_t *addr, int32_t dsize);


/*
 *  DMAステータス定義
 */
#define DMA_STATUS_BUSY         0x00000001	/* BUSY */
#define DMA_STATUS_READY_HMEM0  0x00000002	/* DMA Mem0 Half process success */
#define DMA_STATUS_READY_HMEM1  0x00000004	/* DMA Mem1 Half process success */
#define DMA_STATUS_READY_MEM0   0x00000008	/* DMA Mem0 process success      */
#define DMA_STATUS_READY_ERROR  0x00000100	/* DMA Error end */

/*
 *  DMAストリームID定義
 */
#define DMA1STM0_SID            (0)
#define DMA1STM1_SID            (1)
#define DMA1STM2_SID            (2)
#define DMA1STM3_SID            (3)
#define DMA1STM4_SID            (4)
#define DMA1STM5_SID            (5)
#define DMA1STM6_SID            (6)
#define DMA1STM7_SID            (7)
#define DMA2STM0_SID            (8+0)
#define DMA2STM1_SID            (8+1)
#define DMA2STM2_SID            (8+2)
#define DMA2STM3_SID            (8+3)
#define DMA2STM4_SID            (8+4)
#define DMA2STM5_SID            (8+5)
#define DMA2STM6_SID            (8+6)
#define DMA2STM7_SID            (8+7)

/*
 *  DMAエラー定義
 */ 
#define DMA_ERROR_NONE          0x00000000	/* No error */
#define DMA_ERROR_TE            0x00000001	/* Transfer error */
#define DMA_ERROR_FE            0x00000002	/* FIFO error */
#define DMA_ERROR_DME           0x00000004	/* Direct Mode error */
#define DMA_ERROR_TIMEOUT       0x00000020	/* Timeout error */

/*
 *  DMAチャネル定義
 */
#define DMA_CHANNEL_0           0x00000000	/* DMA Channel 0 */
#define DMA_CHANNEL_1           0x02000000	/* DMA Channel 1 */
#define DMA_CHANNEL_2           0x04000000	/* DMA Channel 2 */
#define DMA_CHANNEL_3           0x06000000	/* DMA Channel 3 */
#define DMA_CHANNEL_4           0x08000000	/* DMA Channel 4 */
#define DMA_CHANNEL_5           0x0A000000	/* DMA Channel 5 */
#define DMA_CHANNEL_6           0x0C000000	/* DMA Channel 6 */
#define DMA_CHANNEL_7           0x0E000000	/* DMA Channel 7 */
#if defined(TOPPERS_STM32F767_NUCLEO144) || defined(TOPPERS_STM32F769_DISCOVERY)
#define DMA_CHANNEL_8           0x10000000	/* DMA Channel 8 */
#define DMA_CHANNEL_9           0x12000000	/* DMA Channel 9 */
#define DMA_CHANNEL_10          0x14000000	/* DMA Channel 10*/
#define DMA_CHANNEL_11          0x16000000	/* DMA Channel 11*/
#define DMA_CHANNEL_12          0x18000000	/* DMA Channel 12*/
#define DMA_CHANNEL_13          0x1A000000	/* DMA Channel 13*/
#define DMA_CHANNEL_14          0x1C000000	/* DMA Channel 14*/
#define DMA_CHANNEL_15          0x1E000000	/* DMA Channel 15*/
#endif

/*
 *  DMA転送方向定義
 */
#define DMA_PERIPH_TO_MEMORY    0x00000000		/* Peripheral to memory direction */
#define DMA_MEMORY_TO_PERIPH    DMA_SxCR_DIR_0	/* Memory to peripheral direction */
#define DMA_MEMORY_TO_MEMORY    DMA_SxCR_DIR_1	/* Memory to memory direction     */

/*
 *  DMAペリフェラル増加モード定義
 */
#define DMA_PINC_ENABLE         DMA_SxCR_PINC	/* Peripheral increment mode enable  */
#define DMA_PINC_DISABLE        0x00000000		/* Peripheral increment mode disable */

/*
 *  DMAメモリ増加モード定義
 */ 
#define DMA_MINC_ENABLE         DMA_SxCR_MINC	/* Memory increment mode enable  */
#define DMA_MINC_DISABLE        0x00000000		/* Memory increment mode disable */

/*
 *  DMAペリフェラル・データ・サイズ定義
 */
#define DMA_PDATAALIGN_BYTE     0x00000000		/* Peripheral data alignment: Byte     */
#define DMA_PDATAALIGN_HALFWORD DMA_SxCR_PSIZE_0	/* Peripheral data alignment: HalfWord */
#define DMA_PDATAALIGN_WORD     DMA_SxCR_PSIZE_1	/* Peripheral data alignment: Word     */

/*
 *  DMAメモリ・データ・サイズ定義
 */
#define DMA_MDATAALIGN_BYTE     0x00000000		/* Memory data alignment: Byte     */
#define DMA_MDATAALIGN_HALFWORD DMA_SxCR_MSIZE_0	/* Memory data alignment: HalfWord */
#define DMA_MDATAALIGN_WORD     DMA_SxCR_MSIZE_1	/* Memory data alignment: Word     */

/*
 *  DMAモード定義
 */
#define DMA_NORMAL              0x00000000		/* Normal mode                  */
#define DMA_CIRCULAR            DMA_SxCR_CIRC	/* Circular mode                */
#define DMA_PFCTRL              DMA_SxCR_PFCTRL	/* Peripheral flow control mode */

/*
 *  DMA優先度レベル定義
 */
#define DMA_PRIORITY_LOW        0x00000000		/* Priority level: Low       */
#define DMA_PRIORITY_MEDIUM     DMA_SxCR_PL_0	/* Priority level: Medium    */
#define DMA_PRIORITY_HIGH       DMA_SxCR_PL_1	/* Priority level: High      */
#define DMA_PRIORITY_VERY_HIGH  DMA_SxCR_PL		/* Priority level: Very High */

/*
 *  DMA FIFOモード定義
 */
#define DMA_FIFOMODE_DISABLE    0x00000000		/* FIFO mode disable */
#define DMA_FIFOMODE_ENABLE     DMA_SxFCR_DMDIS	/* FIFO mode enable  */

/*
 *  DMA FIFOスレッシュホールドレベル定義
 */
#define DMA_FIFO_THRESHOLD_1QUARTERFULL  0x00000000			/* FIFO threshold 1 quart full configuration  */
#define DMA_FIFO_THRESHOLD_HALFFULL      DMA_SxFCR_FTH_0	/* FIFO threshold half full configuration     */
#define DMA_FIFO_THRESHOLD_3QUARTERSFULL DMA_SxFCR_FTH_1	/* FIFO threshold 3 quarts full configuration */
#define DMA_FIFO_THRESHOLD_FULL          DMA_SxFCR_FTH		/* FIFO threshold full configuration          */

/*
 *  DMAメモリバースト定義
 */
#define DMA_MBURST_SINGLE       0x00000000
#define DMA_MBURST_INC4         DMA_SxCR_MBURST_0
#define DMA_MBURST_INC8         DMA_SxCR_MBURST_1
#define DMA_MBURST_INC16        DMA_SxCR_MBURST

/*
 *  DMAペリフェラルバースト定義
 */
#define DMA_PBURST_SINGLE       0x00000000
#define DMA_PBURST_INC4         DMA_SxCR_PBURST_0
#define DMA_PBURST_INC8         DMA_SxCR_PBURST_1
#define DMA_PBURST_INC16        DMA_SxCR_PBURST

/*
 *  DMA初期化構造体定義
 */
typedef struct
{
	uint32_t              Channel;		/* Specifies the channel used for the specified stream. */
	uint32_t              Direction;	/* Specifies if the data will be transferred from memory to peripheral */
	uint32_t              PeriphInc;	/* Specifies whether the Peripheral address register should be incremented or not. */
	uint32_t              MemInc;		/* Specifies whether the memory address register should be incremented or not. */
	uint32_t              PeriphDataAlignment;	/* Specifies the Peripheral data width. */
	uint32_t              MemDataAlignment;		/* Specifies the Memory data width. */
	uint32_t              Mode;			/* Specifies the operation mode of the DMAy Streamx. */
	uint32_t              Priority;		/* Specifies the software priority for the DMAy Streamx. */
	uint32_t              FIFOMode;		/* Specifies if the FIFO mode or Direct mode will be used for the specified stream. */
	uint32_t              FIFOThreshold;		/* Specifies the FIFO threshold level. */
	uint32_t              MemBurst;		/* Specifies the Burst transfer configuration for the memory transfers. */
	uint32_t              PeriphBurst;	/* Specifies the Burst transfer configuration for the peripheral transfers. */
}DMA_Init_t;

/*
 *  DMAハンドラ構造体定義
 */
typedef struct __DMA_Handle_t DMA_Handle_t;
struct __DMA_Handle_t
{
	uint32_t              base;
	DMA_Init_t            Init;			/* DMA communication parameters */
	uint32_t              sdid;			/* stream dma id */
	volatile uint32_t     status;		/* DMA status */
	void                  (*xfercallback)(DMA_Handle_t * hdma);		/* DMA transfer complete callback */
	void                  (*xferhalfcallback)(DMA_Handle_t * hdma);	/* DMA Half transfer complete callback */
	void                  (*xferm1callback)(DMA_Handle_t * hdma);	/* DMA transfer complete Memory1 callback */
	void                  (*errorcallback)(DMA_Handle_t * hdma);	/* DMA transfer error callback */
	volatile uint32_t     ErrorCode;	/* DMA Error code */
	void                  *localdata;	/* DMA local data */
};

extern ER dma_init(DMA_Handle_t *hdma);
extern ER dma_deinit(DMA_Handle_t *hdma);
extern ER dma_start(DMA_Handle_t *hdma, uint32_t SrcAddress, uint32_t DstAddress, uint32_t DataLength);
extern ER dma_end(DMA_Handle_t *hdma);
extern void dma_inthandler(DMA_Handle_t *hdma);
extern void stream_dma_isr(intptr_t exinf);


/*
 *  DMAステータス定義
 */
#define DMA2D_STATUS_BUSY       0x00000001	/* BUSY */
#define DMA2D_STATUS_TCOMP      0x00000002	/* DMA2D transfar process success */
#define DMA2D_STATUS_CCOMP      0x00000004	/* DMA2D CLUT Transfer process success */
#define DMA2D_STATUS_ERROR      0x00000100	/* DMA2D Error end */

/*
 *  DMA2Dエラーコード定義
 */
#define DMA2D_ERROR_NONE        0x00000000	/* No error             */
#define DMA2D_ERROR_TE          0x00000001	/* Transfer error       */
#define DMA2D_ERROR_CE          0x00000002	/* Configuration error  */
#define DMA2D_ERROR_TIMEOUT     0x00000020	/* Timeout error        */

/*
 *  DMA2Dモード定義
 */
#define DMA2D_M2M               0x00000000	/* DMA2D memory to memory transfer mode */
#define DMA2D_M2M_PFC           0x00010000	/* DMA2D memory to memory with pixel format conversion transfer mode */
#define DMA2D_M2M_BLEND         0x00020000	/* DMA2D memory to memory with blending transfer mode */
#define DMA2D_R2M               0x00030000	/* DMA2D register to memory transfer mode */

/*
 *  DMA2Dカラーモード定義
 */
#define DMA2D_ARGB8888          0x00000000	/* ARGB8888 DMA2D color mode */
#define DMA2D_RGB888            0x00000001	/* RGB888 DMA2D color mode   */
#define DMA2D_RGB565            0x00000002	/* RGB565 DMA2D color mode   */
#define DMA2D_ARGB1555          0x00000003	/* ARGB1555 DMA2D color mode */
#define DMA2D_ARGB4444          0x00000004	/* ARGB4444 DMA2D color mode */

/*
 *  DMA2D入力カラー定義
 */
#define CM_ARGB8888             0x00000000	/* ARGB8888 color mode */
#define CM_RGB888               0x00000001	/* RGB888 color mode */
#define CM_RGB565               0x00000002	/* RGB565 color mode */
#define CM_ARGB1555             0x00000003	/* ARGB1555 color mode */
#define CM_ARGB4444             0x00000004	/* ARGB4444 color mode */
#define CM_L8                   0x00000005	/* L8 color mode */
#define CM_AL44                 0x00000006	/* AL44 color mode */
#define CM_AL88                 0x00000007	/* AL88 color mode */
#define CM_L4                   0x00000008	/* L4 color mode */
#define CM_A8                   0x00000009	/* A8 color mode */
#define CM_A4                   0x0000000A	/* A4 color mode */

/*
 *  DMA2Dアルファモード定義
 */
#define DMA2D_NO_MODIF_ALPHA    0x00000000	/* No modification of the alpha channel value */
#define DMA2D_REPLACE_ALPHA     0x00000001	/* Replace original alpha channel value by programmed alpha value */
#define DMA2D_COMBINE_ALPHA     0x00000002	/* Replace original alpha channel value by programmed alpha value
                                                                with original alpha channel value */
/*
 *  DMA2D CLUT CM定義
 */
#define DMA2D_CCM_ARGB8888      0x00000000	/* ARGB8888 DMA2D C-LUT color mode */
#define DMA2D_CCM_RGB888        0x00000001	/* RGB888 DMA2D C-LUT color mode   */

#if defined(TOPPERS_STM32F767_NUCLEO144) || defined(TOPPERS_STM32F769_DISCOVERY)
/*
 *  DMA2Dアルファインバート定義
 */
#define DMA2D_REGULAR_ALPHA     0x00000000		/* No modification of the alpha channel value */
#define DMA2D_INVERTED_ALPHA    DMA2D_OPFCCR_AI	/* Invert the alpha channel value */                                  

/*
 *  DMA2D RBスワップ定義
 */
#define DMA2D_RB_REGULAR        0x00000000		/* Select regular mode (RGB or ARGB) */
#define DMA2D_RB_SWAP           DMA2D_OPFCCR_RBS/* Select swap mode (BGR or ABGR) */
#endif

/*
 *  DMA2Dレイヤーの数
 */
#define MAX_DMA2D_LAYER  2

/*
 *  DMA2Dステート定義
 */
#define DMA2D_STATE_RESET       0	/* DMA2D not yet initialized or disabled       */
#define DMA2D_STATE_READY       1	/* Peripheral Initialized and ready for use    */
#define DMA2D_STATE_BUSY        2	/* an internal process is ongoing              */
#define DMA2D_STATE_TIMEOUT     3	/* Timeout state                               */
#define DMA2D_STATE_ERROR       4	/* DMA2D state error                           */
#define DMA2D_STATE_SUSPEND     5	/* DMA2D process is suspended                  */

/*
 *  DMA2D入力構造体定義
 */
typedef struct
{
	uint32_t              Mode;				/* configures the DMA2D transfer mode. */
	uint32_t              ColorMode;		/* configures the color format of the output image. */
	uint32_t              OutputOffset;		/* Specifies the Offset value. */
#if defined(TOPPERS_STM32F767_NUCLEO144) || defined(TOPPERS_STM32F769_DISCOVERY)
    uint32_t              AlphaInverted;	/* Select regular or inverted alpha value for the output pixel format converter. */
    uint32_t              RedBlueSwap;		/* Select regular mode (RGB or ARGB) or swap mode (BGR or ABGR) */
#endif /* DMA2D_OPFCCR_RBS */
} DMA2D_Init_t;

/*
 *  DMA2Dレイヤー構造体定義
 */
typedef struct
{
	uint32_t               InputOffset;		/* configures the DMA2D foreground offset. */
	uint32_t               InputColorMode;	/* configures the DMA2D foreground color mode . */
	uint32_t               AlphaMode;		/* configures the DMA2D foreground alpha mode. */
	uint32_t               InputAlpha;		/* Specifies the DMA2D foreground alpha value and color value in case of A8 or A4 color mode. */
} DMA2D_LayerCfg_t;

/*
 *  DMA2Dハンドラ構造体定義
 */
typedef struct __DMA2D_Handle_t DMA2D_Handle_t;
struct __DMA2D_Handle_t
{
	uint32_t               base;
	DMA2D_Init_t           Init;										/* DMA2D communication parameters */
	volatile uint32_t      status;										/* DMA2D status */
	void                   (* xfercallback)(DMA2D_Handle_t * hdma2d);	/* DMA2D transfer complete callback */
	void                   (* errorcallback)(DMA2D_Handle_t * hdma2d);	/* DMA2D transfer error callback */
	DMA2D_LayerCfg_t       LayerCfg[MAX_DMA2D_LAYER];					/* DMA2D Layers parameters */
	uint32_t               ErrorCode;									/* DMA2D Error code */
};


#define INHNO_DMA2D     IRQ_VECTOR_DMA2D
#define INTNO_DMA2D     IRQ_VECTOR_DMA2D

#define INTPRI_DMA2D     -7        /* 割込み優先度 */
#define INTATR_DMA2D     0         /* 割込み属性 */

extern ER dma2d_init(DMA2D_Handle_t *hdma2d);
extern ER dma2d_start(DMA2D_Handle_t *hdma2d, uint32_t pdata, uint32_t DstAddress, uint32_t Width, uint32_t Height);
extern ER dma2d_waittransfar(DMA2D_Handle_t *hdma2d, uint32_t Timeout);
extern ER dma2d_configlayer(DMA2D_Handle_t *hdma2d, uint32_t LayerIdx);
extern void dma2d_inthandler(DMA2D_Handle_t *hdma);
extern void dma2d_handler(void);


/*
 *  RTCアラーム定義
 */
#define RTC_ALARM_A     RTC_CR_ALRAE
#define RTC_ALARM_B     RTC_CR_ALRBE

/*
 *  RTC日付、ウィークディ定義
 */ 
#define ALARMDAYSEL_DATE    0x00000000
#define ALARMDAYSEL_WEEKDAY 0x40000000

/*
 *  RTCマスク定義
 */ 
#define ALARMMASK_NONE      0x00000000
#define ALARMMASK_DATESEL   RTC_ALRMAR_MSK4
#define ALARMMASK_HOURS     RTC_ALRMAR_MSK3
#define ALARMMASK_MINUTES   RTC_ALRMAR_MSK2
#define ALARMMASK_SECONDS   RTC_ALRMAR_MSK1
#define ALARMMASK_ALL       (RTC_ALRMAR_MSK1 | RTC_ALRMAR_MSK2 | RTC_ALRMAR_MSK3 | RTC_ALRMAR_MSK4)

/*
 *  RTCサブセカンドアラームマッチ定義
 */
#define ALARMSSMASK_ALL     0x00000000	/* All Alarm SS fields are masked. */
#define ALARMSSMASK_SS14_1  0x01000000	/* SS[0]がマッチでアラーム */
#define ALARMSSMASK_SS14_2  0x02000000	/* SS[1:0]がマッチでアラーム */
#define ALARMSSMASK_SS14_3  0x03000000	/* SS[2-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_4  0x04000000	/* SS[3-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_5  0x05000000	/* SS[4-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_6  0x06000000	/* SS[5-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_7  0x07000000	/* SS[6-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_8  0x08000000	/* SS[7-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_9  0x09000000	/* SS[8-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_10 0x0A000000	/* SS[9-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_11 0x0B000000	/* SS[10-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_12 0x0C000000	/* SS[11-0]がマッチでアラーム */
#define ALARMSSMASK_SS14_13 0x0D000000	/* SS[12-0]がマッチでアラーム */
#define ALARMSSMASK_SS14    0x0E000000	/* SS[13-0]がマッチでアラーム */
#define ALARMSSMASK_NONE    0x0F000000	/* SS[14-0]がマッチでアラーム */

#define RTC_ERROR_LSI   0x00000001
#define RTC_ERROR_LSE   0x00000002
#define RTC_ERROR_RTC   0x00000004

#define INHNO_ALARM     IRQ_VECTOR_RTC_ALARM
#define INTNO_ALARM     IRQ_VECTOR_RTC_ALARM

#define INTPRI_ALARM     -11       /* 割込み優先度 */
#define INTATR_ALARM     0         /* 割込み属性 */

#define INHNO_RTCWUP    IRQ_VECTOR_RTC_WKUP	/* 割込みハンドラ番号 */
#define INTNO_RTCWUP    IRQ_VECTOR_RTC_WKUP	/* 割込み番号 */
#define INTPRI_RTCWUP   -8          /* 割込み優先度 */
#define INTATR_RTCWUP   TA_EDGE     /* 割込み属性 */

/*
 *  日時設定用の構造体を定義
 */
struct tm2 {
  int	tm_sec;			/* 秒 */
  int	tm_min;			/* 分 */
  int	tm_hour;		/* 時 */
  int	tm_mday;		/* 月中の日 */
  int	tm_mon;			/* 月 */
  int	tm_year;		/* 年 */
  int	tm_wday;		/* 曜日 */
  int	tm_yday;		/* 年中の日 */
  int	tm_isdst;
};

/*
 *  RTCアラーム構造体
 */
typedef struct
{
	uint32_t            alarm;				/* アラーム選択 */
	uint32_t            alarmmask;			/* アラームマスク設定 */
	uint32_t            subsecondmask;		/* アラームサブセカンドマスク */
	uint32_t            dayselect;			/* アラーム日付設定 */
	uint32_t            subsecond;			/* アラームサブセカンド */
	void                (*callback)(void);	/* アラームコールバック */
}RTC_Alarm_t;

/*
 *  RTC-WAKEUP構造体
 */
typedef struct
{
	uint8_t	            wakeuptimerPrescaler;	/* WAKEUP TIMERプリスケーラ */
	uint8_t             asynchPrescaler;	/* 非同期プリスケーラ */
	uint16_t            synchPrescaler;		/* 非同期プリスケーラ */
}RTC_Wakeup_t;


extern uint32_t rtcerrorcode;

extern void rtc_init(intptr_t exinf);
extern ER rtc_set_time(struct tm2 *pt);
extern ER rtc_get_time(struct tm2 *pt);
extern ER rtc_setalarm(RTC_Alarm_t *parm, struct tm2 *ptm);
extern ER rtc_stopalarm(uint32_t Alarm);
extern ER rtc_getalarm(RTC_Alarm_t *parm, struct tm2 *ptm, uint32_t Alarm);
extern ER rtc_wakeup_init(RTC_Wakeup_t *parm, void (*func)(void));
extern ER rtc_setup_wakeuptime(uint32_t time);
extern uint32_t rtc_get_ssr(void);
extern void rtc_handler(void);
extern void wakeup_handler(void);
extern void rtc_info_init(intptr_t exinf);


/*
 *  WINDOW-WDOGドライバ
 */
#define WDOG1_PORTID        1
#define NUM_WDOGPORT        1

typedef struct __WDOG_Init_t
{
	uint32_t              Window;			/* WDOG Window設定 0x40-0x7F */
	uint32_t              Counter;			/* WDOG ダウンカウンタ設定 0x40-0x7F 0x7F */
	uint32_t              MCounter;			/* WDOG More Counter */
} WDOG_Init_t;

extern ER wdog_init(ID portid, WDOG_Init_t *hwini);
extern ER wdog_deinit(ID portid);
extern ER wdog_reset(ID portod);
extern void wdog_handler(void);


/*
 *  USBのローカル設定
 */
#define ENABLE_FS_BASE1 (TADR_RCC_BASE+TOFF_RCC_AHB1ENR)
#define ENABLE_FS_VAL1  RCC_AHB1ENR_GPIOAEN
#define TADR_FS_G1_BASE TADR_GPIOA_BASE
#define FS_DM_PINNO     11
#define FS_DP_PINNO     12
#if defined(TOPPERS_STM32F7_DISCOVERY)
#define ENABLE_FS_BASE2 (TADR_RCC_BASE+TOFF_RCC_AHB1ENR)
#define ENABLE_FS_VAL2  RCC_AHB1ENR_GPIODEN
#define TADR_FS_G2_BASE TADR_GPIOD_BASE
#define FS_ID_PINNO     10
#define FS_POWERSW_PINO 5
#define FS_EVBUS_PINNO  FS_POWERSW_PINO
#elif defined(TOPPERS_STM32F723_DISCOVERY)
#define ENABLE_FS_BASE2 (TADR_RCC_BASE+TOFF_RCC_AHB1ENR)
#define ENABLE_FS_VAL2  RCC_AHB1ENR_GPIOGEN
#define TADR_FS_G2_BASE TADR_GPIOG_BASE
#define FS_G2_PORT_TYPE GPIO_OTYPE_OD
#define FS_POWERSW_PINO 8
#else
#define ENABLE_FS_BASE2 (TADR_RCC_BASE+TOFF_RCC_AHB1ENR)
#define ENABLE_FS_VAL2  RCC_AHB1ENR_GPIOGEN
#define TADR_FS_G2_BASE TADR_GPIOG_BASE
#define FS_ID_PINNO     10
#define FS_VBUS_PINNO   9
#define FS_POWERSW_PINO 6
#if !defined(TOPPERS_STM32F769_DISCOVERY)
#define FS_EVBUS_PINNO  FS_POWERSW_PINO
#endif
#endif

#if defined(TOPPERS_STM32F769_DISCOVERY)
#define ENABLE_HS_VAL1  RCC_AHB1ENR_GPIOIEN
#define TADR_HS_G1_BASE TADR_GPIOI_BASE
#define HS_DIR_PINNNO   11
#else
#define ENABLE_HS_VAL1  RCC_AHB1ENR_GPIOCEN
#define TADR_HS_G1_BASE TADR_GPIOC_BASE
#define HS_DIR_PINNNO   2
#endif

#define ENABLE_HS_BASE  (TADR_RCC_BASE+TOFF_RCC_AHB1ENR)
#define ENABLE_HS_VAL2  RCC_AHB1ENR_GPIOBEN
#define ENABLE_HS_VAL3  RCC_AHB1ENR_GPIOHEN
#define ENABLE_HS_VAL4  RCC_AHB1ENR_GPIOAEN
#define ENABLE_HS_VAL5  RCC_AHB1ENR_GPIOCEN

#define TOFF_RCC_USBFS  TOFF_RCC_AHB2ENR
#define RCC_USBFSEN     RCC_AHB2ENR_OTGFSEN
#define TOFF_RCC_USBHS  TOFF_RCC_AHB1ENR
#define RCC_USBHSEN     RCC_AHB1ENR_OTGHSEN
#define RCC_USBHSUPEN   RCC_AHB1ENR_OTGHSULPIEN
#define TOFF_RCC_SYSFG  TOFF_RCC_APB2ENR
#define RCC_SYSGFGEN    RCC_APB2ENR_SYSCFGEN

#define EXTI_IMR_BASE   (TADR_EXTI_BASE+TOFF_EXTI_IMR)
#define EXTI_PR_BASE    (TADR_EXTI_BASE+TOFF_EXTI_PR)

/*
 *  EMACのローカル設定
 */
#if defined(TOPPERS_STM32F7_DISCOVERY)
#define RMII_MII_TXD1_PORT       TADR_GPIOG_BASE
#define RMII_MII_TXD1_PIN        14
#else
#define RMII_MII_TXD1_CLOCK      RCC_AHB1ENR_GPIOBEN
#endif

/*
 *  ポートのLED接続ビット
 */
#define LED01           (1<<0)
#define LED02           (1<<1)
#define LED03           (1<<2)
#define LED04           (1<<3)

#define LED_MASK        (LED01 | LED02 | LED03 | LED04)

/*
 *  LEDとスイッチの状態マクロ
 */
#define ON              1     /* LEDやスイッチON状態             */
#define OFF             0     /* LEDやスイッチOFF状態            */

/*
 *  DIPSW設定
 */
#define DSW1             0x01
#define DSW2             0x02
#define DSW3             0x04
#define DSW4             0x08

/*
 *  LED接続ポート初期化
 */ 
extern void led_init(intptr_t exinf);

/*
 *  LED接続ポート読み出し
 */
uint_t led_in(void);

/*
 *  LED接続ポート書き込み
 */ 
void led_out(unsigned int led_data);

/*
 *  LEDとスイッチの個別設定・読み込み関数群
 */
extern void set_led_state(unsigned int led, unsigned char state);

#define NUM_EXTI9_FUNC   5
#define EXTI9_BASENO     5
#define INHNO_EXTI9 IRQ_VECTOR_EXTI9_5	/* 割込みハンドラ番号 */
#define INTNO_EXTI9 IRQ_VECTOR_EXTI9_5	/* 割込み番号 */
#define INTPRI_EXTI9    -4			/* 割込み優先度 */
#define INTATR_EXTI9     0			/* 割込み属性 */

#define NUM_EXTI15_FUNC  6
#define EXTI15_BASENO    10
#define INHNO_EXTI15 IRQ_VECTOR_EXTI15_10	/* 割込みハンドラ番号 */
#define INTNO_EXTI15 IRQ_VECTOR_EXTI15_10	/* 割込み番号 */
#define INTPRI_EXTI15    -4			/* 割込み優先度 */
#define INTATR_EXTI15    0			/* 割込み属性 */

#if defined(TOPPERS_STM32F769_DISCOVERY) || defined(TOPPERS_STM32F723_DISCOVERY)
#define INHNO_SW1   IRQ_VECTOR_EXTI0	/* 割込みハンドラ番号 */
#define INTNO_SW1   IRQ_VECTOR_EXTI0	/* 割込み番号 */
#define INTPRI_SW1  -4          /* 割込み優先度 */
#define INTATR_SW1  TA_EDGE     /* 割込み属性 */
#define NUM_EXTI_FUNC  1
#define EXTI_BASENO    0
#define exti_handler   exti0_handler
#else
#define NUM_EXTI_FUNC  6
#define EXTI_BASENO    10
#endif

extern void (*exti_func[16])(void);

/*
 *  PSW接続ビット
 */
#define PSW1             0x00000001
#define PSW_MASK         (PSW1)
#define PSW_CHK_INTERVAL 10


/*
 *  PUSHスイッチ接続ポート初期化
 */
extern void switch_push_init(intptr_t exinf);

/*
 *  PUSHスイッチコールバック関数設定
 */
extern void setup_sw_func(intptr_t exinf);

/*
 *  EXTI割込みハンドラ
 */
extern void exti0_handler(void);
extern void exti9_handler(void);
extern void exti15_handler(void);

/*
 *  DIPSWの取出し
 */
uint_t switch_dip_sense(void);


extern void device_info_init(intptr_t exinf);

extern uint_t dipsw_value;

#ifdef __cplusplus
}
#endif

#endif


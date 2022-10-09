#ifndef _PINMODE_H_
#define _PINMODE_H_

#ifdef __cplusplus
 extern "C" {
#endif

#define OUTPUT 1

#define LOW 0
#define HIGH 1

#define DIGITAL_PIN     0
#define ANALOG_PIN      1

#ifndef TOPPERS_MACRO_ONLY

/*
 *  関数のプロトタイプ宣言
 */

extern int  digitalRead(uint8_t no);
extern void digitalWrite(uint8_t no, int sw);
extern void pinMode(uint8_t no, uint32_t mode);

#endif /* TOPPERS_MACRO_ONLY */

#ifdef __cplusplus
}
#endif

#endif	/* _PINMODE_H_ */


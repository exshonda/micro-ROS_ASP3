/*
 *  タスクの定義
 */
#define MAIN_PRIORITY	10		/* メインタスクの優先度 */
#define	MAIN_STACK_SIZE	(4096U)	/* メインタスクのスタックサイズ */

#define	UROS_PORTID		4		/* 文字入力するシリアルポートID */

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif

extern void	main_task(intptr_t exinf);

#ifdef __cplusplus
}
#endif

#endif /* TOPPERS_MACRO_ONLY */

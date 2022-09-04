# フォルダ構成

- asp3_f413xxx
  - spike-rtからコピーした Discovery kit with STM32F413ZH MCU 対応のASP3カーネル
  - ビルドフォルダ asp3_f413xx\target\discovery_f413xx_gcc\stm32cubeide\sample1
  - arduinoヘッダに接続されているuart7をシリアルポートのポート2として使用可能．
    - CN8 2 : USART7 - TXx PF7
    - CN8 1 : USART7 - RX  PF6
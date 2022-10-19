# フォルダ構成

- asp3_f413xxx
  - spike-rtからコピーした Discovery kit with STM32F413ZH MCU 対応のASP3カーネル
  - ビルドフォルダ asp3_f413xx\target\discovery_f413xx_gcc\stm32cubeide\sample1
  - arduinoヘッダに接続されているuart7をシリアルポートのポート2として使用可能．
    - CN8 2 : USART7 - TXx PF7
    - CN8 1 : USART7 - RX  PF6
  - ターゲットにnucleo_f767zi_gccを追加
    - <https://github.com/yurie/asp3-f767zi>から取得
    - arduinoヘッダに接続されているuart6をシリアルポートのポート2として使用可能．
    - CN10 16 : USART6 - TXx PG14
    - CN10 14 : USART6 - RX  PG9
  - syssvc\serial.h, syssvc\tSerialAdapter.c, syssvc\tSerialPortMain.c
    - serial_trea_datを追加し、タイムアウトを指定できるよう変更
    - eSerialPort_readの引数に`TMO tmout`を追加し、`cReceiveSemaphore_wait`を`cReceiveSemaphore_waitTimeout`に変更し、`tmout`を渡すよう変更

- libkernel\discovery_f413xx_gcc
  - discovery_f413xx_gcc向けlibkernel.aのビルド環境

- libkernel\nucleo_f767zi_gcc
  - nucleo_f767zi_gcc向けlibkernel.aのビルド環境

- micro_ros_arduino
  - micro-ROSとTOPPERSアプリとのインターフェイス
  - discovery_f413xx_gcc
    - micro_ros_arduino.h
      - <https://github.com/micro-ROS/micro_ros_arduino>を参考に不要な部分を削除
    - micro_ros_arduino.cpp
      - TOPPERSシリアルドライバを使うよう実装
    - pinmode.cpp
      - Arduino APIのデジタルIOの空実装
    - pinmode.h
      - Arduino APIのデジタルIOの定義
  - discovery_f413xx_gcc
    - micro_ros_arduino.h
      - <https://github.com/micro-ROS/micro_ros_arduino>を参考に不要な部分を削除
    - micro_ros_arduino.cpp
      - TOPPERSシリアルドライバを使うよう実装
    - pinmode.cpp
      - Arduino APIのデジタルIOの実装（TOPPERS BASE PLATFORMから）
    - pinmode.h
      - Arduino APIのデジタルIOの定義（TOPPERS BASE PLATFORMから）
    - device.h
      - pinmode.cpp/hで使用する定義（TOPPERS BASE PLATFORMから）

- mcu_ws
  - <https://github.com/micro-ROS/micro_ros_setup>の手順に従ってビルドした、ST Nucleo F446RE向けのヘッダとライブラリ
  - Makefileを実行すると、配下の各ライブラリから`libmicroros.a`を作成する
- mcu_ws_f767zi
  - <https://github.com/micro-ROS/micro_ros_setup>の手順に従ってビルドした、ST Nucleo F767ZI向けのヘッダとライブラリ
  - Makefileを実行すると、配下の各ライブラリから`libmicroros.a`を作成する

- micro-ros_publisher
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cppを作成
- micro-ros_subscriber
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cppを作成
- micro-ros_ping_pong
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cppを作成
- micro-ros_joystick
  - 以前作ったWioTerminal\Demo_Zumo_Ros2_RC_Controller\main.cppを参考にmain.cppを作成
- 上記4フォルダ共通
  - MakefileはF413向け
  - Makefile.F767はF767向け
  - TOPPERS/ASP3のMakefileに`micro_ros_arduino\micro_ros_arduino.mk`をインクルードし、`libmicroros.a`をリンクするよう変更

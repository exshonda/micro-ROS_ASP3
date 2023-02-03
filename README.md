# フォルダ構成

- asp3
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

- micro_ros_asp
  - micro-ROSとTOPPERSアプリとのインターフェイス
  - micro_ros_asp.h
    - <https://github.com/micro-ROS/micro_ros_arduino>を参考に不要な部分を削除
  - micro_ros_asp.c
    - TOPPERSシリアルドライバを使うよう実装

- mcu_ws
  - <https://github.com/micro-ROS/micro_ros_setup>の手順に従ってビルドした、ST Nucleo F446RE向けのヘッダとライブラリ
  - ビルド結果から`mcu_ws`と`libmicroros.a`をコピーしたもの
- mcu_ws_f767zi
  - <https://github.com/micro-ROS/micro_ros_setup>の手順に従ってビルドした、ST Nucleo F767ZI向けのヘッダとライブラリ
  - ビルド結果から`mcu_ws`と`libmicroros.a`をコピーしたもの

- sample\Makefile.target
  - ターゲットボードの選択
- sample\libkernel
  - libkernel.aのビルド環境
- sample\publisher
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cを作成
- sample\subscriber
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cを作成
- sample\ping_pong
  - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cを作成
- sample\joystick
  - 以前作ったWioTerminal\Demo_Zumo_Ros2_RC_Controller\main.cを参考にmain.cを作成
- 上記4フォルダ共通
  - TOPPERS/ASP3のMakefileに`micro_ros_asp\micro_ros_asp.mk`をインクルードし、`libmicroros.a`をリンクするよう変更


# インストール

## ROS2のインストール

0. 前準備

ビルドを高速化するために以下を設定．NUMには並列コンパイルの数を記載する．

    ```bash
    export MAKEFLAGS="-j NUM"
    ```

1. ロケールを設定するため、以下のコマンドを実行する。

    ```bash
    sudo apt update && sudo apt install locales
    sudo locale-gen en_US en_US.UTF-8
    sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
    export LANG=en_US.UTF-8
    ```

2. GPGキーを設定する。以下のコマンドを実行する

    ```bash
    sudo apt update && sudo apt install curl gnupg2 lsb-release
    sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
    ```

3. リポジトリをソースリストに追加する。以下のコマンドを実行する

    ```bash
    sudo echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
    ```

4. ROS2パッケージをインストールする。以下のコマンドを実行する

    ```bash
    sudo apt update
    sudo apt install ros-humble-ros-base
    ```

## micro-ROSのインストール

1. 初期設定

    ```bash
    cd ./external
    make setup_miro_ros
    ```

2. libmicroros.a のビルド

    ```bash
    cd ./external
    make build_firmware
    ```
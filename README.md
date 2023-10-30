# フォルダ構成

- asp3
  - spike-rtからコピーした Discovery kit with STM32F413ZH MCU 対応のASP3カーネル
  - ビルドフォルダ asp3_f413xx\target\discovery_f413xx_gcc\stm32cubeide\sample1
  - arduinoヘッダに接続されているuart7をシリアルポートのポート2として使用可能．
    - CN8 2 : USART7 - TXx PF7
    - CN8 1 : USART7 - RX  PF6
  - syssvc\serial.h, syssvc\tSerialAdapter.c, syssvc\tSerialPortMain.c
    - serial_trea_datを追加し、タイムアウトを指定できるよう変更
    - eSerialPort_readの引数に`TMO tmout`を追加し、`cReceiveSemaphore_wait`を`cReceiveSemaphore_waitTimeout`に変更し、`tmout`を渡すよう変更

- micro_ros_asp
  - micro-ROSとTOPPERSアプリとのインターフェイス
  - micro_ros_asp.h
    - <https://github.com/micro-ROS/micro_ros_arduino>を参考に不要な部分を削除
  - micro_ros_asp.c
    - TOPPERSシリアルドライバを使うよう実装

- sample 
  - サンプルプログラム
  - sample\Makefile.target
    - ターゲットボードの選択
  - sample\libkernel
    - libkernel.aのビルド環境
  - sample\publisher
    - <https://github.com/micro-ROS/freertos_apps>のapps/int32_publisher/app.cを参考にmain.cを作成
  - sample\subscriber
    - <https://github.com/micro-ROS/freertos_apps>のapps/int32_subscriber/app.cを参考にmain.cを作成
  - sample\ping_pong
    - <https://github.com/micro-ROS/freertos_apps>のapps/ping_pong/app.cを参考にmain.cを作成
  - sample\joystick
    - 以前作ったWioTerminal\Demo_Zumo_Ros2_RC_Controller\main.cを参考にmain.cを作成
  - 上記4フォルダ共通
    - TOPPERS/ASP3のMakefileに`micro_ros_asp\micro_ros_asp.mk`をインクルードし、`libmicroros.a`をリンクするよう変更

- spike-rt
  - spike-rt向けサンプルプログラム

- external
  - miro-ROSのビルド用ディレクトリ

# ターゲット毎の設定

## Discovery F413ZH

USB-UARTを以下のポートに接続する．
- UART_RX  : CN8 - D1
- UART_TX  : CN8 - D0
- UART_GND : CN8 - GND

## Nucleo F401RE
- UART_RX  : CN10(左-下から3) PA_10
- UART_TX  : CN10(左-下から9)  PA_9
- UART_GND : CN10(右-下から10)

# インストール

## ROS2のインストール

0. 前準備 ビルドを高速化するために以下を設定．NUMには並列コンパイルの数を記載する．

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
    make apt_micro-ros
    make clone_micro-ros
    make init_micro-ros
    ```

## エージェントのインストール    

どちらの方法でも良い．

### エージェントのビルドと実行1

1. 参考

    下記の記事を参考に`Micro-XRCE-DDS-Agent`をビルドする。
    <https://qiita.com/lutecia16v/items/5760551dd3a7a0d3e7d3>

2. `Micro-XRCE-DDS-Agent`のコードをクローン

    ``` bash
    cd ~
    git clone https://github.com/eProsima/Micro-XRCE-DDS-Agent.git
    ```

3. ビルド

    ```bash
    cd Micro-XRCE-DDS-Agent
    mkdir build && cd build
    cmake -DTHIRDPARTY=ON ..
    make
    sudo make install
    sudo ldconfig /usr/local/lib/
    ```

4. 実行

    `verbose_level`を6に設定して、メッセージの受信を表示するようにします。

    ```bash
    source /opt/ros/humble/setup.bash
    MicroXRCEAgent serial --dev [device] -v 6
    ```

### エージェントのビルドと実行2

1. エージェントのビルド
    ```bash
    cd uros_ws    
    ros2 run micro_ros_setup create_agent_ws.sh
    colcon build
    source install/local_setup.bash
    ```

2. エージェントの実行

    ```bash
    ros2 run micro_ros_agent micro_ros_agent serial --dev [device]
    ```

## サンプルプログラムのビルド

1. ターゲットの指定 
- Makefile.config を編集してターゲットを指定する．

```
# Discovery F413ZH
#BUILDTARGET = discovery

# Prime Hub
#BUILDTARGET = primehub

# Nucleo F401RE
BUILDTARGET = nucleo_f401re
```

2. libmicroros.a のビルド

    ```bash
    cd ./external
    make init_firmware
    make build_firmware
    ```

3. カーネルライブラリのビルド

```
cd libkernel
make libkernal.a
```

3. 各サンプルのディレクトリで以下のコマンドを実行

```
make
```

- 作成されたasp.binを書き込む．
   - Nucleoの場合はフォルダに書き込む．

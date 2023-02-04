# SPIKE-RT対応

## 動作確認バージョン
https://github.com/spike-rt/spike-rt/tree/88ebbf0f73c676ac3ebec30369d999395c279b72

## ビルド方法

### SPIKE-RTへのパッチ
- spike-rt.mk をSPIKE-RTに適用
	- シリアルドライバにタイムアウト付きリード関数を追加する．

### sapike-rt.mkの変更
- SPIKE-RT_DIR : spike-rtのフォルダの相対場所
- SPIKE-RT_KERNELLIB_DIR : spike-rt のカーネルライブラリの場所

### ビルド
- 各フォルダでSPIKE-RTのサンプルと同様にビルドを実行
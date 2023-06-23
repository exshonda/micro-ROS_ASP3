# SPIKE-RT対応

## 動作確認バージョン
https://github.com/spike-rt/spike-rt/commit/f6724115b0ef8c8367a760eaec2840089e6b4e55

## ビルド方法

### SPIKE-RTへのパッチ
- spike-rt.patch をSPIKE-RTに適用
	- シリアルドライバにタイムアウト付きリード関数を追加する．

	```
	cd <spike-rtのトップフォルダ>
	git apply <本レポジトリへのパス>/micro-ROS_ASP3/spike-rt/spike-rt.patch
	```

### sapike-rt.mkの変更
- SPIKE-RT_DIR : spike-rtのフォルダの相対場所
- SPIKE-RT_KERNELLIB_DIR : spike-rt のカーネルライブラリの場所

### ビルド
- 各フォルダでSPIKE-RTのサンプルと同様にビルドを実行
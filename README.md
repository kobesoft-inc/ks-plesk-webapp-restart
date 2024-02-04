# ks-plesk-webapp-restart

## 概要

このソフトは、ユーザー権限でログインしたユーザーで、pleskのphp-fpm(8.0-8.3)とsupervisordを再起動します。
suidフラグを立てて、deployerに登録して使います。

## 導入方法

```
curl -O https://raw.githubusercontent.com/kobesoft-inc/ks-plesk-webapp-restart/main/ks-plesk-webapp-restart.c
gcc -o ks-plesk-webapp-restart ks-plesk-webapp-restart.c
sudo chown root:root ks-plesk-webapp-restart
sudo chmod u+s ks-plesk-webapp-restart
sudo mv ks-plesk-webapp-restart /usr/local/bin
```

## 実行

/usr/local/bin/ks-plesk-webapp-restart

## 背景

Pleskでopcacheを有効にして、deployerを使うと、最新のコードが反映されなかった。
opcache_resetしてもクリアされない・・・。どうして・・・。

どちらにしても、supervisordを使ってるなら、これもrestartしないといけないのと、
ユーザー権限でできるようにしたかったので、このコマンドを最後に呼ぶようにした。

## 注意事項

他社がサーバー内でシェルが実行できる環境では、導入しないこと。

# retro_kanban_digispark

セリアの光るミニチュア看板を切れかけの蛍光灯みたいに光らせます。  
DigisparkのmicroUSB版を入手します。（https://www.shigezone.com/product/digispark_usb-micro1/）.  
Arduinoコードを書き込みます。書き込み方はググって頑張りましょう。  
P0とGNDどちらかに220Ωの抵抗を接続してからセリアのLEDに繋いでください。カソードがGNDです。  
光の拡散板は各自創意工夫をこらしてください。  

Arduinoコードは配列に入っている数字を頭から順番にdelayしてオンオフを切り替えます。0があったらそこで先頭に戻ります。


#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    if(strpos($line,"xy") !== false)
    {
	echo "$line";//指定された文字が含まれるときのみ出力する
    }
  } 
?>
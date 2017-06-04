<?php

$arr = array();

function push($data) {
	global $arr;
	array_push($arr,$data);
}

function pop(){
	global $arr;
	array_pop($arr);
}

push(1);
push(2);
push(3);
push(4);

pop();

echo "total: ".count($arr)."<br/>";

for($i=0;$i<count($arr);$i++){
	echo $arr[$i]."<br/>";
}
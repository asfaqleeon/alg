<?php
$in=200;
$arr = new SplFixedArray(10000);

$s = sqrt($in);

for($i=2; $i<=$in; $i++){
	if($arr[$i] != 1){
		$arr[$i]=0;
	}
	for($j=2; $j<$s+2; $j++){
		if($i*$j <= $in){
			$arr[$i * $j]=1;
		}
	}
}

$count=0;
for($i=2;$i<=$in;$i++){
	if($arr[$i] == 0){
		echo $i."<br/>";
		$count++;
	}
}
echo "total". $count ."<br/>";
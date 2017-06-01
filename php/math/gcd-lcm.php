<?php
function gcd($a,$b){
	while($b!=0){
        $m=$a % $b;
        $a=$b;
        $b=$m;
	}
	return $a;
}

function lcm($a,$b){
    $m = ($a * $b)/gcd($a,$b);
    return $m;
}

echo gcd(664,414)."<br/>";
echo lcm(664,414);
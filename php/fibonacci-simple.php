<?php
    $f0=0;
    $f1=1;
    $fn=0;
    
    for($i=0;$i<3;$i++){
        $fn=$f0+$f1;
        $f0=$f1;
        $f1=$fn;
    }
    echo $fn;
?>
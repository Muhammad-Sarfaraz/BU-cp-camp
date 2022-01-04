<?php


$time_start = microtime(true);

$i=0;

while ($i<1000000000) {
    ++$i;
}

$time_end = microtime(true);

var_dump($time_end-$time_start);

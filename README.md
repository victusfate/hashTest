hash test
===
a simple comparison of a hash for function calls vs an if else block for thirty functions

the verdict: if you're function does 10ms of "work" the difference is negligible

<pre>
Mark-Essels-iMac:hashTest messel$ llvm-g++ -O3 test.cc -o test
Mark-Essels-iMac:hashTest messel$ ./test 1
"duration": 330.807  sum 465
"duration": 329.680  sum 465
Mark-Essels-iMac:hashTest messel$ ./test 2
"duration": 659.181  sum 930
"duration": 656.539  sum 930
Mark-Essels-iMac:hashTest messel$ ./test 3
"duration": 991.564  sum 1395
"duration": 984.421  sum 1395
Mark-Essels-iMac:hashTest messel$ ./test 10
"duration": 3288.146  sum 4650
"duration": 3289.164  sum 4650
Mark-Essels-iMac:hashTest messel$ ./test 20
"duration": 6575.116  sum 9300
"duration": 6577.663  sum 9300
</pre>
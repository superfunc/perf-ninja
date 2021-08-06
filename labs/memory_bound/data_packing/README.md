# RESULTS
## Origin
```
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
bench1         477599 ns       477540 ns         1254
```

## Re-ordered fields to get rid off padding
```
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
bench1         455133 ns       455109 ns         1357
```

## Change data types base on the assumption that S.i is >= 0 and <= 100, re-order struct fields again
```
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
bench1         439567 ns       439517 ns         1567
```

** SOLUTION ***
* use pahole tool to re-organize `struct S` fields in packed order
* 

**TODO**: add an introductory and a summary videos.

This is a lab about data packing. You can decrease the memory traffic of the application if you pack the data more efficiently.
Some of the ways to do that include:

* Eliminate compiler-added padding.
* Use types that require less memory or less precisionm e.g. (int -> short, double -> float).
* Use bitfields to pack the data even further.

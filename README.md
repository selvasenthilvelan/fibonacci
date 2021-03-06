// -----------------------------------------------------------------------------
//
// Project:      Fibonacci number sequence generator 
// File name:    README.md
// Description:  Documentation file
// License:      MIT license (see included file LICENSE)
// Build:        Use attached Makefile (see run.bash file for options)
//
// Commandline Parameter:  <sequence index> 
// Usage:                  fibonacci <sequence index>
//
// Author:                 Selva Senthilvelan
// Date:                   02/04/2020
// Version:                1.0
//
// -----------------------------------------------------------------------------


Project to generate fibonacci numbers
=====================================

This project uses 3 different ways to generate fibonacci number sequences till 
100 (valid input range: 0 to 100). 

1. Recursive method
2. Iterative method
3. Recursive method with optimization


Recursive method:
-----------------
This method uses recursion to compute the current fibonacci value by calling the 
fibonacci function on the previous 2 numbers. In this case the fibonacci value
for each index is computed more than once, since we compute every value on the 
fly. This is very memory intensive since recursion causes lots of frames to be 
sent to the stack and it also consumes a lot of compute time.

Please note that using this method for higher index(say 50 or more) can consume 
a lot of compute time to generate the required values. 

 
Iterative method:
-----------------
This method computes the fibonacci value efficiently, since it computes the 
lower fibonacci values first and then builds on this base to compute the next
higher fibonacci value. This consumes very little memory and uses far less 
compute time. However, please note that each fibonacci value needs to be 
computed on the fly till the current index value is reached.  

  
Recursive method with optimization:
-----------------------------------
This method uses recursion along with storage to optimize the fibonacci series
computation. It uses an array to store the fibonacci values previously computed
and uses these pre-coomputed values next time it is needed, instead of 
recomputing it using recursion. This uses some memory for storing the 
pre-computed values in an array, but it reduces the compute time drastically 
when compared to the pure recursive method. A storage implementation using an 
array is accectable in this case, since the index input range is bounded from 0 
to 100. For a genaralized use case, a hash table implementation can potentially
be beneficial to save memory.  




Usage Options & Sample Output:
------------------------------

The fibonacci binary can be invoked by either passing an index(0 to 100) as 
commandline parameter or in interactive mode by just launching the binary 
without any parameters.


# ./fibonacci 10
Recursive: 10 fibonacci number is: 55.000000
Iterative: 10 fibonacci number is: 55.000000
Recursive optimized: 10 fibonacci number is: 55.000000


# ./fibonacci 
Enter the Fibonacci index to compute: 10

Recursive: 10 fibonacci number is: 55.000000
Iterative: 10 fibonacci number is: 55.000000
Recursive optimized: 10 fibonacci number is: 55.000000



A more verbose output can be generated by compiling the binary with DEBUG level 
set. See the run.bash file for more compile options.

# ./fibonacci 4
0 : 0.000000
1 : 1.000000
2 : 1.000000
1 : 1.000000
0 : 0.000000
1 : 1.000000
2 : 1.000000
3 : 2.000000
4 : 3.000000
Recursive: 4 fibonacci number is: 3.000000

2 : 1.000000
3 : 2.000000
4 : 3.000000
Iterative: 4 fibonacci number is: 3.000000

0 : 0.000000
1 : 1.000000
2 : 1.000000
1 : 1.000000
3 : 2.000000
4 : 3.000000
Recursive optimized: 4 fibonacci number is: 3.000000  



--------------------------------------EOF--------------------------------------


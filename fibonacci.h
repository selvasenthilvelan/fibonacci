// ------------------------------------------------------------------------------
//
// Project: 	 Fibonacci number sequence generator 
// File name: 	 fibonacci.h
// Description:  Header file to invoke the fibonacci functions
// License: 	 MIT license (see included file LICENSE)
// Build:	 Use attached Makefile (see run.bash file for options)
//
// Commandline Parameter:  <sequence index> 
// Usage:		   fibonacci <sequence index>
//
// Author: 		   Selva Senthilvelan
// Date: 		   02/04/2020
// Version:		   1.0
//
// ------------------------------------------------------------------------------

#ifndef FIBONACCI_H__
 #define FIBONACCI_H__

 // Fibonacci function definitions
 double fib_recursive_d( unsigned int n ); // Fibonacci recursive function
 double fib_iterative_d( unsigned int n ); // Fibonacci iterative function

 void fib_recursive_optimized_init_d(); // Fibonacci Recursive Optimization - Init Function
 double fib_recursive_optimized_d( unsigned int n ); // Fibonacci Recursive Optimization function 

#endif

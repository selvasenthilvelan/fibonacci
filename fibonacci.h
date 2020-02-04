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
// Version:		   0.2
//
// ------------------------------------------------------------------------------

#ifndef FIBONACCI_H__
 #define FIBONACCI_H__

 // Fibonacci function definitions
 unsigned long long fib_recursive( unsigned int n ); // Fibonacci recursive function
 unsigned long long fib_iterative( unsigned int n ); // Fibonacci iterative function

#endif

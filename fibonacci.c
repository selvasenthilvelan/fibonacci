// ------------------------------------------------------------------------------
//
// Project: 	 Fibonacci number sequence generator 
// File name: 	 fibonacci.c
// Description:  C file to invoke the fibonacci functions
// License: 	 MIT license (see included file LICENSE)
// Build:	 Use attached Makefile (see run.bash file for options)
//
// Commandline Parameter:  <sequence index> 
// Usage:		   fibonacci <sequence index>
//
// Author: 		   Selva Senthilvelan
// Date: 		   02/04/2020
// Version:		   0.1
//
// ------------------------------------------------------------------------------


// Header Files
# include <stdio.h>
# include <stdlib.h>

# include "fibonacci.h"



// Fibonacci Function Implementations
//-----------------------------------

// Fibonacci Recursive Function
unsigned long long fib_recursive( unsigned int n )
{
  unsigned long long value;

  if( n <= 1 )
  {
    value = n;
  }
  else
  {
    value = fib_recursive( n - 2 ) + fib_recursive( n - 1 );
  }

  #if( DEBUG >= 1 )
  printf("%d : %llu\n", n, value );
  #endif

  return( value );
}



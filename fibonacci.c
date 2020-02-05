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
// Version:		   1.0
//
// ------------------------------------------------------------------------------


// Header Files
# include <stdio.h>
# include <stdlib.h>

# include "fibonacci.h"



// Fibonacci Function Implementations
//-----------------------------------

// Fibonacci Recursive Function
double fib_recursive_d( unsigned int n )
{
  double value;

  if( n <= 1 )
  {
    value = n;
  }
  else
  {
    value = fib_recursive_d( n - 2 ) + fib_recursive_d( n - 1 );
  }

  #if( DEBUG >= 1 )
  printf("%d : %f\n", n, value );
  #endif

  return( value );
}


// Fibonacci Iterative Function
double fib_iterative_d( unsigned int n )
{
  double value;
  double p2 = 0;
  double p1 = 1;
  unsigned int count = 2;

  if( n <= 1 )
  {
    value = n;
  }
  else
  {
    while( count <= n )
    {
      value = p2 + p1;
      p2 = p1;
      p1 = value;   

      #if( DEBUG >= 1 )
      printf("%d : %f\n", count, value );
      #endif

      count++;
    }
  }
  
  return( value );
}



// Fibonacci Recursive Optimization Section 

// Global variable declaration
static double fibonacci_d[ 100 ];


// Fibonacci Recursive Optimization - Init Function 
void fib_recursive_optimized_init_d()
{
  unsigned int i;

  fibonacci_d[ 0 ] = 0;
  fibonacci_d[ 1 ] = 1;
  for( i = 2; i < 100; i++ )
  {
    fibonacci_d[ i ] = 0;
  }
}


// Fibonacci Recursive Optimization Function 
double fib_recursive_optimized_d( unsigned int n )
{
  double value;

  if( n <= 1 )
  {
    value = n;
  }
  else
  {
    if( fibonacci_d[ n ] != 0 )
    {
      return( fibonacci_d[ n ] );
    }
    else
    {
      value = fib_recursive_optimized_d( n - 2 ) + fib_recursive_optimized_d( n - 1 );
    }
  }

  #if( DEBUG >= 1 )
  printf("%d : %f\n", n, value );
  #endif

  fibonacci_d[ n ] = value; 
  return( value );
}


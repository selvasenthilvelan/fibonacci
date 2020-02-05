// ------------------------------------------------------------------------------
//
// Project: 	 Fibonacci number sequence generator 
// File name: 	 main.c
// Description:  Main C file to invoke the sequence generator based on index input
// License: 	 MIT license (see included file LICENSE)
// Build:	 Use attached Makefile (see run.bash file for options)
//
// Commandline Parameter:  <sequence index> 
// Usage:		   fibonacci <sequence index>
//
// Author: 		   Selva Senthilvelan
// Date: 		   02/04/2020
// Version:		   0.4
//
// ------------------------------------------------------------------------------


// Header Files
# include <stdio.h>
# include <stdlib.h>

# include "fibonacci.h"


// Main Function
int main( int argc, char **argv )
{
 // Local variable definitions
 int pos; 	 // integer value of commandline input
 unsigned int n; // Index value after input validation

 // Handle commandline parameter
 if(argc > 1) 
  {
   pos = atoi(argv[1]);
   if((pos==0) && (argv[1][0]!='0'))
    { 	   
     pos = -1;
    }     
  }	  
 else
  {
   printf("Enter the Fibonacci index to compute: ");
   scanf("%d", &pos);
   printf("\n");   
  }

 if(( pos < 0 ) || ( pos > 100 ))
  {
    printf( "Error (%s:%d): Index has to be an integer between 0 to 100. Exiting...\n",
            __FILE__, __LINE__ );
    exit( 1 );
  }
  else
  {
    n = (unsigned)pos;
  }

  
 // Call the recursive fibonacci function and print the result
 //printf("Recursive: %d fibonacci number is: %f\n\n", n, fib_recursive_d( n ));

 // Call the iterative fibonacci function and print the result
 printf("Iterative: %d fibonacci number is: %f\n\n", n, fib_iterative_d( n ));

 // Call the optimized recursive fibonacci function and print the result
 fib_recursive_optimized_init_d(); // Call the init function
 printf("Recursive optimized: %d fibonacci number is: %f\n\n", n, fib_recursive_optimized_d( n ) );

}	


// ------------------------------------EOF------------------------------------------

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
// Version:		   0.1
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
  printf("got %d from cli \n", n);

  
 // Call the recursive fibonacci function and print the result
 printf("Recursive: %d fibonacci number is: %llu\n\n", n, fib_recursive( n ));


}	


// ------------------------------------EOF------------------------------------------

/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:39:50 BRST 2016
 *
 */

void function_receive_and_return_void ( void );
void function_receive_something_return_void ( int, int );
int function_receive_void_return_something ( void );
int function_receive_and_return_something ( int, int );

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  function_receive_and_return_void ();
  function_receive_something_return_void ( 3, 4 );
  printf ( "Random trash: %d\n", function_receive_void_return_something () );
  printf ( "(a + b) = %d\n", function_receive_and_return_something ( 10, 7 ) );


  return (EXIT_SUCCESS);
}

void function_receive_and_return_void ( void ){ 
  printf ( "void -> void\n" ); 
}

void function_receive_something_return_void ( int a, int b ){ 
  printf ( "(a + b) = %d\n", a + b ); 
}

int function_receive_void_return_something ( void ){ 
  int i;
  return i;
}

int function_receive_and_return_something ( int a, int b ){ 
  return ( a + b ); 
}

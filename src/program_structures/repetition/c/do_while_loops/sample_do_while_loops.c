/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:08:02 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 0;

  do {
    printf ( "%d\n", i ); 
  } while ( i++ < 10 );
  printf ( "\n" );

  // for single line statements the {} is optional
  i = 0;
  do
    printf ( "%d\n", i ); 
  while ( i++ < 10 );
  printf ( "\n" );

  // or
  i = 0;
  do printf ( "%d\n", i ); while ( i++ < 10 );

  return (EXIT_SUCCESS);
}

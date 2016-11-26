/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:05:00 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  for ( int i = 0; i < 10; i++ ) {
    printf("%d\n", i );
  }

  printf ( "\n" );
  // for single line statements the {} is optional
  for ( int i = 0; i < 10; i++ ) 
    printf("%d\n", i );

  printf ( "\n" );
  // or
  for ( int i = 0; i < 10; i++ ) printf("%d\n", i );

  return (EXIT_SUCCESS);
}

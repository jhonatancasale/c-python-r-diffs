/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:10:44 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 0;

  while ( i < 10 ) {
    printf ("%d\n", i );
    i++;
  }

  printf ( "\n" );
  // for single line statements the {} is optional
  i = -1;
  while ( i++ < 10 )
    printf ("%d\n", i );

  printf ( "\n" );
  // or
  i = -1;
  while ( i++ < 10 ) printf ("%d\n", i );

  return (EXIT_SUCCESS);
}

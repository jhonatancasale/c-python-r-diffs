/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Sat 10 Dec 16:28:22 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i;
  int array[ 100 ];
  int sum = 0;

  for ( i = 0; i < 100; i++ )
    array[ i ] = i + 1;

  for ( i = 0; i < 100; i++ )
    sum += array[ i ];

  printf ("Sum from 0 to 100: %d\n", sum);

  return (EXIT_SUCCESS);
}

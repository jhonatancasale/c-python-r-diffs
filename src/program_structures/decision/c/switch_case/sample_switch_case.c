/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:28:47 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 1;

  switch ( i ) {
    case 1:
      printf ( "1\n" );
      break;
    case 2:
      printf ( "2\n" );
      break;
    default:
      printf ( "Don't match\n" );
  }

  i = 10;

  switch ( i ) {
    case 1:
      printf ( "1\n" );
      break;
    case 2:
      printf ( "2\n" );
      break;
    default:
      printf ( "Don't match\n" );
  }

  return (EXIT_SUCCESS);
}

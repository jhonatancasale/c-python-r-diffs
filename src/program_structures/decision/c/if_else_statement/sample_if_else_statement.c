/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:23:41 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 0;

  if ( i != 0 ) {
    printf ( "True\n" );
  } else {
    printf ( "False\n" );
  }

  // for single line statements the {} is optional
  if ( i != 0 ) printf ( "True\n" );

  else printf ( "False\n" );

  return (EXIT_SUCCESS);
}

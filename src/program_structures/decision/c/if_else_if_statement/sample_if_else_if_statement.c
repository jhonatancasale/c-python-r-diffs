/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 03:25:28 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = -1;

  if ( i > 0 ) { 
    printf ( "> 0\n" ); 
  } else if ( i == 0 ) { 
    printf ( "== 0\n" ); 
  } else { 
    printf ( "< 0\n" ); 
  }

  return (EXIT_SUCCESS);
}

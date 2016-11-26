/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Sat 26 Nov 04:13:25 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int x = -1;

  int y = (x > 0) ? 1 : 0;

  printf("%d\n", y );

  printf("%s\n", (y) ? "True" : "False" );

  return (EXIT_SUCCESS);
}

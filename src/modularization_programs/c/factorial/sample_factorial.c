/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Wed 23 Nov 04:14:07 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int fact ( int );
int fact_recursive ( int );

int main (int argc, char **argv)
{
  srand ( time ( NULL ) );
  int j = ( rand () % 9 ) + 2;

  printf ( "%d! => %d\n", j, fact ( j ) );
  printf ( "%s\n", (fact ( j ) == fact_recursive ( j ) ) ? "Agree" : "Ups" );

  return (EXIT_SUCCESS);
}

int fact ( int n ) {
  int accum = 1;

  for ( int i = n; i > 1; i-- ) accum *= i;

  return accum;
}

int fact_recursive ( int n ) {
  return ( n == 1 ) ? 1 : n * fact_recursive ( n - 1 );
}

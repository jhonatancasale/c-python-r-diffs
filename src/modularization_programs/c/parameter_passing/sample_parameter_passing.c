/*
 * Author: Jhonatan Casale (jhc)
 *
 * Contact : jhonatan@jhonatancasale.com
 *         : casale.jhon@gmail.com
 *         : https://github.com/jhonatancasale
 *         : https://twitter.com/jhonatancasale
 *         : http://jhonatancasale.github.io/
 *
 * Create date Sat 10 Dec 16:13:19 BRST 2016
 *
 */

#include <stdlib.h>
#include <stdio.h>

int sumByReference (int *, int *);
int sumByValue (int, int);

int main (int argc, char **argv)
{
  int a = 10;
  int b = 37;

  printf ("a:%d, b%d\n", a, b);

  printf ("a:%d, b%d => sumByValue() = %d\n", a, b, sumByValue(a, b) );

  printf ("a:%d, b%d => sumByReference() = %d\n", a, b, sumByReference(&a, &b) );

  printf ("a:%d, b%d\n", a, b);

  return (EXIT_SUCCESS);
}

int sumByValue (int a, int b) {
  int aux = a;
  a = b;
  b = aux;
  return (a + b);
}

int sumByReference ( int * a, int * b) {
  int aux = *a;
  *a = *b;
  *b = aux;
  return (*a + *b);
}

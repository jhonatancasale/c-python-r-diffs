"""
  Author: Jhonatan Casale (jhc)
 
  Contact : jhonatan@jhonatancasale.com
          : casale.jhon@gmail.com
          : https://github.com/jhonatancasale
          : https://twitter.com/jhonatancasale
          : http://jhonatancasale.github.io/
 
  Create date Fri 25 Nov 20:18:52 BRST 2016
"""

import math

def fact(n):
    '''(int) -> int

    Precondition: n >= 0

    Return n!

    Examples:
    >>> fact(5)
    5
    >>> fact(10)
    3628800

    '''

    accum = 1

    for i in range( 1, n + 1):
        accum *= i

    return accum

def fact_recursive (n):
    '''(int) -> int

    Precondition: n >= 0

    Return n!

    Examples:
    >>> fact(5)
    5
    >>> fact(10)
    3628800

    '''

    return 1 if n == 1 else n * fact_recursive(n - 1)

def reduce_factorial (n):
    '''(int) -> int

    Precondition: n >= 0

    Return n!

    Examples:
    >>> fact(5)
    5
    >>> fact(10)
    3628800

    '''

    from functools import reduce
    return reduce((lambda x, y : x * y), range( 1, n + 1 ) )

j = 5

print('{}! = {}'.format( j, fact ( j ) ) )
print('{}'.format('Agree' if fact(j) == fact_recursive(j) else 'Ups' ) )
print('{}'.format('Really Agree' if fact(j) == math.factorial(j) else 'Ups' ) )
print('{}'.format('Really Really Agree' 
    if fact(j) == reduce_factorial(j) else 'Ups' ) )

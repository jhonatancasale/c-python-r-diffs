"""
  Author: Jhonatan Casale (jhc)
 
  Contact : jhonatan@jhonatancasale.com
          : casale.jhon@gmail.com
          : https://github.com/jhonatancasale
          : https://twitter.com/jhonatancasale
          : http://jhonatancasale.github.io/
 
  Create date Fri 25 Nov 20:20:56 BRST 2016
"""

def isPrime( n ):
    '''(int) -> bool

    Return True if the given number n is a prime number return False otherwise
    '''

    if n <= 1: return False

    for i in range(2, n):
        if n % i == 0: return False

    return True

def sumPrimes(start, end):
    '''(int, int) -> int

    Pre: start > 0
         end > start

    Return the sum of prime numbers between start and end
    '''

    partial = 0
    for i in range( start, end + 1 ):
        if isPrime( i ):  partial += i

    return partial

def sumPrimes2(start, end):
    '''(int, int) -> int

    Pre: start > 0
         end > start

    Return the sum of prime numbers between start and end
    '''

    elements = []
    for i in range(start, end + 1):
        if isPrime( i ): elements.append( i )

    return sum( elements )


import random
j = random.choice( range(2, 101) )

primes = []
for i in range(2, j + 1):
    if isPrime( i ): primes.append( i )

print( '[2, {}].primes => {}'.format( j, primes ) )
print( '[2, {}].sum_primes => {}'.format( j, sumPrimes( 2, j ) ) )
print( '[2, {}].sum_primes => {}'.format( j, sumPrimes2( 2, j ) ) )

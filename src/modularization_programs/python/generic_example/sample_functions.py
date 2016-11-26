"""
  Author: Jhonatan Casale (jhc)
 
  Contact : jhonatan@jhonatancasale.com
          : casale.jhon@gmail.com
          : https://github.com/jhonatancasale
          : https://twitter.com/jhonatancasale
          : http://jhonatancasale.github.io/
 
  Create date Fri 25 Nov 20:16:41 BRST 2016
"""

import random

def function_receive_and_return_void ():
    '''(void) -> void

    Print a dummy message
    '''

    print('void -> void')

def function_receive_something_return_void (a, b):
    '''(number, number) -> void 

    Print a plus b
    '''

    print('(a + b) = ({} + {}) = {}'.format(a, b, a+b) )

def function_receive_void_return_something ():
    '''(void) -> float

    Return a random number between 0 and 1
    '''

    return random.random()

def function_receive_and_return_something (a, b):
    '''(number, number) -> number

    Return: a + b
    '''

    return a + b

i, j = random.choice( range( 0, 101 ) ), random.choice( range( 0, 101 ) )

function_receive_and_return_void()
function_receive_something_return_void( i, j )
print( 'Rand: %f' % (function_receive_void_return_something () ) )
print( '(a + b) = ({} + {}) = {}'.format( i, j, 
    function_receive_and_return_something( i, j )) )

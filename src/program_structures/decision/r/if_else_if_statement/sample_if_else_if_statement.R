#
#  Author: Jhonatan Casale (jhc)
# 
#  Contact : jhonatan@jhonatancasale.com
#          : casale.jhon@gmail.com
#          : https:#github.com/jhonatancasale
#          : https:#twitter.com/jhonatancasale
#          : http:#jhonatancasale.github.io/
# 
#  Create date Sat 26 Nov 04:27:37 BRST 2016
#

i <- -1

if (i > 0) { 
  print ('> 0\n') 
} else if (i == 0) { 
  print ('== 0\n') 
} else { 
  print ('< 0\n') 
}

# for single line statements the {} is nearly optional
if (i > 0) {
  print ('> 0\n') 
} else if (i == 0) {
  print ('== 0\n') 
} else print ('< 0\n') 

# for really single line statements the {} is nearly optional
if (i > 0) print ('> 0\n') else if (i == 0) print ('== 0\n') else print ('< 0\n') 

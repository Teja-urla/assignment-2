import cmath

# Initializing real numbers
a = 0.6
b = 0.8


c = complex(a, b);   # converting a and b into complex number
x = 2
y = 1
z= complex((x*x-y*y)/(x*x+y*y) , 2*x*y/(x*x+y*y))  # conversion of complex number

print("The phase of complex number is : ", end="")
j = (cmath.phase(z))*180/3.14   # gives phase value of complex number z
k = (cmath.phase(c))*180/3.14   # gives phase value of complex number c
if(j == k):
    print("matching")    # if lhs = rhs the matching else not matching
else:
    print("not matching")

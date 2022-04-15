#include <stdio.h>
#include<complex.h>  
int main()
{   int x,y;
     double complex z1 = 0.6 + 0.8 * I; // declared calues here actually satisfies 
     int complex z2 = 2 + 1 * I;          // the condition  
     int complex z3 = 2 - 1 * I;
     float amplitude1 = cimag(z1)/creal(z1);
    
      float amplitude2 = (2*creal(z2)*cimag(z2))/(creal(z2)*creal(z2) - cimag(z2)*cimag(z2));
   
     if(amplitude1 == amplitude2)  // checking wheather amplitude1 = amplitude2
     printf("matching");
     else
     printf("not matching"); 

}

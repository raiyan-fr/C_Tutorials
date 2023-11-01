#include <stdio.h>
#include <math.h>

// addition, subtraction, multiplication, division, exponent

int main() { 
   float a, b;
   printf("enter a:");
   scanf("%f" , &a);

   printf("enter b:");
   scanf("%f" , &b);

   printf("sum is : %f \n" , a + b);
   printf("difference is : %f \n" , a - b);
   printf("product is : %f \n" , a * b);
   printf("division is : %f \n"  , a / b);
   printf("exponent is ; %f \n" , pow(a,b));
   
return 0;

}
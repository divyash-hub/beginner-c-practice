#include <stdio.h>

int main()
{
   int a=3;
   int b=2;

   printf("the sum of the two numbers are %d\n",  a&b); // this is an and value
   printf("the subtraction of the two numbers are %d\n",  a|b); // this is a or valeu
   printf("the multiplacation of the two numbers are %d\n",  a*b);
   printf("the division of the two numbers are %d\n",  a/b);
   printf("the remainder of the two numbers are %d\n",  a%b);
    
   printf("the size of the operator is %d\n", sizeof(a,b)  ) ;
   
   return 0;
}

#include <stdio.h>
#define Pi 3.1413 // we dont add = sign in define command
int main()
{
    int a = 234234;
    float b = 42342.423;   
    char C[] = "ramesh" ; // when we add a word we use [] and "" and %s
    char E = 'A'; // when we just use a single alphabet we use ' and %c
 


    printf("%f \n", Pi); // we use %f and not %d cause pi is 3.14 and it has decimals
    
    printf("the whole numeber is %d and the \a decimal number is %f and the word is %s and the alphabet is %c \n" , a , b , C , E);
    return 0;

}

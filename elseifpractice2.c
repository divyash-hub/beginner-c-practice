#include <stdio.h>


int main()
{
    int a;

    printf("the number which you have entered is \n");
    scanf("%d" , &a);

    if (a>0)
    {
         printf("the number which you have entered is a positive number.\n");
    }
    
    else if (a==0)
    {
        printf("the number which you have entered is just zero.\n");
    }

    else {

        printf("the number which you have entered is negative. \n");
    }
    
    return 0;
}

#include<stdio.h>

int main()
{
    
    int a; 

    printf("enter the number of which you want the multiplication of: \n") ;
    scanf("%d",&a);

    printf("The table of the given number is:%d\n" , a );
    for (int ramesh = 1; ramesh <= 34; ramesh++)

     printf("%d X %d = %d" , a, ramesh, a*ramesh);



    return 0;
}

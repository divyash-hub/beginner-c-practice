#include <stdio.h>

int main()
{
    int num;

    // Ask the user for input
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);

    // Print the table
    printf("Table of %d:\n", num);
    for (int i = 1; i <= 34; i++)
    
        printf("%d X %d = %d\n", num, i, num * i);
    

    return 0;


    
}


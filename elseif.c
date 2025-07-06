#include <stdio.h>

int main()
{
    int age;
    
    printf("please enter a valid age \n");

    scanf("%d" , &age) ;
    printf("the age which you have entered is %d \n" , age) ; 
    
    if (age>=18)
    {
        printf("you can vote, good boy");
    }
    
    else if (age>9)
    {
        printf("as your age is between 10-19 you can only vote for kids");
    }
    else if (age>=3)
    {
        printf("as your age is between 1 and 3 you can vote for toddlers");
    
    }
    
    else 
    {
        printf("You CANNOT vote sorry");
    }
    

    return 0;
}

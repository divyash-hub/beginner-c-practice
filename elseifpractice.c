    #include <stdio.h>

    int main()
    {
        int subject;

        printf("enter the number of subjects you have passed \n") ;
        scanf("%d" , &subject);

        if (subject>=2)
        {
            printf("damn bro you have passed 2 or more subjects you get 15 points") ; 

        }
        
        else if (subject<2)
        {
            printf("you have passed subjects less than 2 you only get 5 points");
        }

        else 
        {
            printf("you have passed less than two subjects bad boy");
        }
        



        return 0;
    }

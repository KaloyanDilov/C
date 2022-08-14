#include<stdio.h> 
#include<stdint.h>

int main(void)
{
    uint32_t attendance = 0;
    int option, number;
    while (1)
     {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Print numbers of available students\n");
        printf("6. Print numbers of missing students\n");
        printf("7. Exit\n");
        scanf("%d", &option);
        if((option < 1) || (option > 7))
        {
            printf("Choise from 1 to 7 number of operation");
        }

        if (option == 1)
        {   
            printf("Enter number of  student: ");
            scanf("%d", &number);
            if(number < 1 || number > 32)
            {
                printf("Wrong number!");
                continue;
            }
            attendance |= (1 << number);
            printf("attendance = %d \n", attendance);
        }
        else if (option == 2)
        {
            printf("Enter number of  student: ");
            scanf("%d", &number);
            if(number < 1 || number > 32)
            {
            printf("Wrong number!");
            continue;
            }
            attendance &= ~(1 << number);
        }
        else if (option == 3)
        {
            printf("Enter number of  student: ");
            scanf("%d", &number);
            if(number < 1 || number > 32)
            {
                printf("Wrong number!");
                continue;
            }
            if(attendance & (1 << number)){

                printf("Studen number %d is available.\n", number);
            }
            else{

                printf("Studen number %d is not available.\n", number);
            }
        }
        else if (option == 4)
        {
            printf("Enter number of  student: ");
            scanf("%d", &number);
            if(number < 1 || number > 32)
            {
             printf("Wrong number!");
             continue;
            }
            attendance ^= (1 << number);
        }
        else if (option == 5)
        {
            int n;
            printf("Numbers of available students:");
            for(n = 1; n < 33; n++)
            {
                if(attendance & (1 << n))
                {
                    printf("%d ", n);
                }

            }
            printf("\n");
        }

        else if (option == 6)
        {
            
            printf("Numbers of missing students:");
            int n;
            for(n = 1; n < 33; n++)
            {
                if((attendance & (1 << n)) == 0)
                {
                    printf("%d ", n );
                }
            }
            printf("\n");

        }

        else if (option == 7)
        {
            return 0;
        }
        

            


    }
    return 0;
}

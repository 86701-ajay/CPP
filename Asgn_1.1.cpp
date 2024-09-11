#include <iostream>
#include<stdio.h>
using namespace std;

struct Date
{

    int day, month, year;

};

     void initDate(struct Date* ptr)
    {

        ptr->day = 1;
         ptr->month = 1;
         ptr->year = 1990;
          printf("Default date : %d \\ %d \\ %d\n", ptr->day, ptr->month, ptr->year);
    }

    void acceptDateFromConsole(struct Date* ptr){
        
        printf(" Enter Date (Format : day ,month, year) : ");
        scanf("%d%d%d",&ptr->day,&ptr->month,&ptr->year);
    }

    void printDateOnConsole(struct Date* ptr){
         printf("date : %d \\ %d \\ %d\n", ptr->day, ptr->month, ptr->year);


    }

    int menu()
{

    int choice;
     printf("0. EXIT\n");
    printf("1. ADD DATE\n");
    printf("2. DISPLAY DATE\n");
    printf("3. DEFAULT DATE\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);


    return choice;
}



int main(int argc, char const *argv[])
{
    int choice;
    struct Date d1;
     
    /* initDate(&d1);
     acceptDateFromConsole(&d1);
     printDateOnConsole(&d1); */
    
    while ((choice = menu()) != 0)
    {

        switch (choice)
        {
        case 1:
            acceptDateFromConsole(&d1);
            break;

        case 2:
            printDateOnConsole(&d1);
            break;

        case 3:
            initDate(&d1);
            break;

        default:
            cout << "WRONG CHOICE .... ";
            break;
        }
    }
    
    
    return 0;
}

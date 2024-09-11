#include <iostream>
using namespace std;

class Date
{

    int day, month, year;

    public:

     Date()
    {

        day = 1;
        month = 1;
        year = 1990;
        cout <<" Default date : "<< day <<" \\ "<< month <<" \\ "<< year << endl;
    }

    void acceptDateFromConsole(){
        
        cout <<"Enter Date (Format : day ,month, year) : " << endl;
        cin >>  day >> month >> year ; 
    }

    void printDateOnConsole(){
        cout <<" Date : "<< day <<" \\ "<< month <<" \\ "<< year << endl;


    }

    bool isLeapYear(){

        if(year%4 == 0){
            cout << " LEAP YEAR" << endl;
            return true;
        }

        else{
            cout << " NOT A LEAP YEAR" << endl;
            return false;

        }
    }


};

int menu()
{

    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD DATE" << endl;
    cout << "2. DISPLAY DATE" << endl;
    cout << "3. Is LEAP YEAR" << endl;
    cout << " Enter Your Choice : ";
    cin >> choice;

    return choice;
}

int main(int argc, char const *argv[])
{
    int choice;
    Date d1;

    while ((choice = menu()) != 0)
    {

        switch (choice)
        {
        case 1:
            d1.acceptDateFromConsole();
            break;

        case 2:
            d1.printDateOnConsole();
            break;

        case 3:
            d1.isLeapYear();
            break;

        default:
            cout << "WRONG CHOICE .... ";
            break;
        }
    }

    return 0;
}

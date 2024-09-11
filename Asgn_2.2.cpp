#include <iostream>
using namespace std;

class Student

{
private:
    int roll_no, marks;
    string name;

public:
    Student()
    {

        cout << " Roll NO : " << 0 << endl;
        cout << " Name : " << " " << endl;
        cout << " Marks : " << 0 << endl;
    }

    void printStudentOnConsole()
    {

        cout << " Roll NO : " << roll_no << endl;
        cout << " Name : " << name << endl;
        cout << " Marks : " << marks << endl;
    }

    void acceptStudentFromConsole()
    {

        cout << " Enter Student Info (Roll No , Name , Marks) " << endl;
        cout << " Enter Roll No : ";
        cin >> roll_no;
        cin.ignore();
        cout << " Enter Name : ";
        getline(cin, name);
        cout << " Enter Marks : ";
        cin >> marks;
    }
};

int menu()
{

    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. Accept Student Info" << endl;
    cout << "2. DISPLAY Student Info" << endl;
    cout << " Enter Your Choice : ";
    cin >> choice;

    return choice;
}

int main(int argc, char const *argv[])
{
    int choice;
    Student s1;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            s1.acceptStudentFromConsole();
            break;

        case 2:
            s1.printStudentOnConsole();
            break;

        default:
            cout << "WRONG CHOICE .... ";
            break;
        }
    }

    return 0;
}

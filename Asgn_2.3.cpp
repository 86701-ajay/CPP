#include <iostream>
using namespace std;

namespace NStudent{

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


}

int main(int argc, char const *argv[])
{
    NStudent ::Student s1;
    s1.acceptStudentFromConsole();
    s1.printStudentOnConsole();
    return 0;
}

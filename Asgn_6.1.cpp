#include <iostream>
using namespace std;

class Date
{

    int day;
    int month;
    int year;

public:
    Date()
    {

        cout << "Date()" << endl;
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    Date(int day, int month, int year)
    {
        cout << "Date( int day, int month, int year )" << endl;
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    void acceptDate()
    {

        cout << "Enter day, month and year:  ";
        cin >> day >> month >> year;
    }

    void displayDate()
    {

        cout << day << "\\" << month << "\\" << year << endl;
    }
};

class Person
{

    string name;
    string address;
    Date dob; // Association - Composition (tight coupling)

public:
    Person()
    {

        cout << " Person() " << endl;
        this->name = " ";
        this->address = " ";
    }

    Person(string name, string address, int day, int month, int year) : dob(day, month, year)
    {

        cout << " Person( string name, string address, int day, int month, int year ) " << endl;
        this->name = name;
        this->address = address;
        this->dob.setDay(day);
        this->dob.setMonth(month);
        this->dob.setYear(year);
    }

    void setName(string name)
    {

        this->name = name;
    }

    void setAddress(string address)
    {

        this->address = address;
    }

    void acceptPerson()
    {

        cout << "Enter name : ";
        cin.ignore();

        getline(cin, name);
        cout << "Enter address : ";

        getline(cin, address);
        cout << "Enter the Date of Birth - " << endl;

        dob.acceptDate();
    }

    void displayPerson()
    {

        cout << " name : " << name << endl;
        cout << " address : " << address << endl;
        cout << "date of birth : ";
        dob.displayDate();
    }
};

class Employee : public Person
{

    int id;
    double sal;
    string dept;
    Date doj;

public:
    Employee()
    {

        cout << "Employee()" << endl;
        this->id = 0;
        this->sal = 0;
        this->dept = " ";
    }

    Employee(int id, double sal, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
        doj.setDay(day);
        doj.setMonth(month);
        doj.setYear(year);
    }

    void acceptEmployee()
    {
        acceptPerson();
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> sal;
        cout << "Enter the department - ";
        cin.ignore(); // clear the input buffer before getline
        getline(cin, dept);
        cout << "Enter the Date of joining - " << endl;
        doj.acceptDate();
    }

    void displayEmployee()
    {

        displayPerson();
        cout << "Empid - " << id << endl;
        cout << "Salary - " << sal << endl;
        cout << "Department - " << dept << endl;
        cout << "Date of Joining - ";
        doj.displayDate();
    }
};

int main(int argc, char const *argv[])
{

    // Person p("jon snow","winterfell",14,05,1676);
    // p.displayPerson();

    Employee e1;
    e1.acceptEmployee();
    e1.displayEmployee();

    return 0;
}

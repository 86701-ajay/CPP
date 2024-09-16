#include <iostream>
using namespace std;

class Employee
{

    int id;
    double salary;

public:
    Employee()
    {
        this->id = 0;
        this->salary = 0;
    }

    Employee(int id, double salary)
    {
        this->id = id;
        this->salary = salary;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setSalary(double salary)
    {
        this->salary = salary;
    }

    int getId()
    {
        return id;
    }

    double getSalary()
    {
        return salary;
    }

    void accept()
    {
        cout << "Enter empid: - ";
        cin >> id;
        cout << "Enter salary: - ";
        cin >> salary;
    }

    void display()
    {
        cout << " empid: " << id << endl;
        cout << " salary: " << salary << endl;
    }
};

class Manager : virtual public Employee
{

    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter bonus : ";
        cin >> bonus;
    }

    void displayManager()
    {
        cout << " bonus: " << bonus << endl;
    }

public:
    Manager()
    {
        this->bonus = 0;
    }

    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
    }

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
    }

    void accept()
    {

        Employee::accept();
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display()
    {

        Employee::display();
        cout << "Bonus : " << bonus << endl;
    }
};

class Salesman : virtual public Employee
{

    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter commission : ";
        cin >> commission;
    }

    void displaySalesman()
    {
        cout << " commission: " << commission << endl;
    }

public:
    Salesman()
    {
        this->commission = 0;
    }

    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        this->commission = commission;
    }

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return commission;
    }

    void accept()
    {

        Employee::accept();
        cout << "Enter commission: ";
        cin >> commission;
    }

    void display()
    {

        Employee::display();
        cout << "commission : " << commission << endl;
    }
};

class SaleManager : public Manager, public Salesman
{

    SaleManager()
    {
    }

    SaleManager(int id, double salary, double bonus, double commission) : Employee(id, salary)
    {

        this->setBonus(bonus);
        this->setCommission(commission);
    }

    void accept()
    {
        Employee::accept();
        this->acceptManager();
        this->acceptSalesman();
    }

    void display()
    {
        Employee::display();
        this->displayManager();
        this->displaySalesman();
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}

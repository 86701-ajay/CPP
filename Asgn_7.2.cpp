#include <iostream>
#include <typeinfo>
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

    virtual void accept()
    {
        cout << "Enter empid: - ";
        cin >> id;
        cout << "Enter salary: - ";
        cin >> salary;
    }

    virtual void display()
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
        this->acceptManager();
    }

    void display()
    {

        Employee::display();
        this->displayManager();
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
        commission = 0;
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
        acceptSalesman();
        

    }

    void display()
    {

        Employee::display();
        displaySalesman();
        //cout << "commission : " << commission << endl;
    }
};

class SaleManager : public Manager, public Salesman
{
public:
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

int acceptEmployee()
{
    int choice;
    cout << "1.Accept Manager" << endl;
    cout << "2.Accept Salesman" << endl;
    cout << "3.Accept SalesManager" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;
}

int menu()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Accept Employee" << endl;
    cout << "2.Display the count of all employees with respect to designation" << endl;
    cout << "3. Display All Managers" << endl;
    cout << "4. Display All Salesman" << endl;
    cout << "5. Display All SalesManagers" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;
}

void count(Employee **ptr, int index)
{

    int scnt = 0;
    int mcnt = 0;
    int smcnt = 0;

    int i;

    for ( i = 0; i < index; i++)
    {
        if (typeid(*ptr[i]) == typeid(Manager))
        {
            mcnt++;
        }
        else if (typeid(*ptr[i]) == typeid(Salesman))
        {
            scnt;
        }
        else
        {
            smcnt++;
        }
    }

    cout << "count of Manager: " << mcnt << endl;
    cout << "count of Salesman: " << scnt << endl;
    cout << "count of SalesManager: " << smcnt << endl;
}

int main(int argc, char const *argv[])
{
    Employee *arr[5];
    int choice;
    int choice2;
    int index = 0;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            while ((choice2 = acceptEmployee()) != 0)
            {
                switch (choice2)
                {
                case 1:
                    if (index < 5)
                    {
                        arr[index] = new Manager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout << " Array is Full " << endl;
                    }

                    break;

                case 2:
                    if (index < 5)
                    {
                        arr[index] = new Salesman();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout << " Array is Full " << endl;
                    }

                    break;

                case 3:
                    if (index < 5)
                    {
                        arr[index] = new SaleManager();
                        arr[index]->accept();
                        index++;
                    }
                    else
                    {
                        cout << " Array is Full " << endl;
                    }

                    break;

                default:
                    cout << "Invalid choice ! " << endl;

                    break;
                }
            }

            break;

        case 2:
            count(arr, index);
            break;

        case 3: 
        int i;

        for( i=0;i<index;i++)
			    {
				    if (typeid(*arr[i]) == typeid(Manager))
				    {
				    	arr[i]->display();
				    
					}
			    break;

                case 4: 

                int j;

        for( j=0;j<index;j++)
			    {
				    if (typeid(*arr[j]) == typeid(Salesman))
				    {
				    	arr[j]->display();
				    
					}
			    break;

                case 5: 

                int i;

        for( i=0;i<index;i++)
			    {
				    if (typeid(*arr[i]) == typeid(SaleManager))
				    {
				    	arr[i]->display();
				    
					}
			    break;



        default:
                cout << "Invalid choice ! " << endl;

            break;
        }
    }

    return 0;
}

 } } }
#include <iostream>
using namespace std;

class Address
{

    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        this->building = " ";
        this->street = " ";
        this->city = " ";
        this->pin = 000000;
    }

    Address(string building, string street, string city, int pin)
    {

        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }

    void setBuilding(string building)
    {

        this->building = building;
    }

    void setStreet(string street)
    {

        this->street = street;
    }

    void setCity(string city)
    {

        this->city = city;
    }

    void setPin(int pin)
    {

        this->pin = pin;
    }

    void getBuilding()
    {

        cout << " Building: " << building << endl;
    }

    void getStreet()
    {

        cout << " Street: " << street << endl;
    }

    void getCity()
    {

        cout << " City: " << city << endl;
    }

    void getPin()
    {

        cout << " Pin: " << pin << endl;
    }

    void accept()
    {
        cout << "Enter building : ";
        cin >> building;
        cout << "Enter street : ";
        cin >> street;
        cout << "Enter city : ";
        cin >> city;
        cout << "Enter pin : ";
        cin >> pin;
        cout << "===============================================" << endl;
    }

    void display()
    {
        cout << "===============================================" << endl;
        cout << " building : " << building << endl;
        cout << " street : " << street << endl;
        cout << " city : " << city << endl;
        cout << " pin : " << pin << endl;
    }
};

int main(int argc, char const *argv[])
{

    Address a1;
    // a1.accept();
    // a1.display();
    a1.setBuilding("galaxy apartment");
    a1.setStreet("bandra road");
    a1.setCity("mumbai");
    a1.setPin(431001);
    a1.getBuilding();
    a1.getStreet();
    a1.getCity();
    a1.getPin();
    a1.display();

    return 0;
}

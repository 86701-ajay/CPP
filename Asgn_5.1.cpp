

#include <bits/stdc++.h>
using namespace std;

class Date
{

private:
	int day;
	int month;
	int year;

public:
	Date()
	{
		this->day = 0;
		this->month = 0;
		this->year = 0;
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

	void displayDate()
	{
		cout << "Date of Birth: " << this->day << "/" << this->month << "/" << this->year << endl;
	}
	void acceptDate()
	{
		cout << "Enter Date as per DD/MM/YY: " << endl;
		cout << "Day: ";
		cin >> day;
		cout << "Month: ";
		cin >> month;
		cout << "Year: ";
		cin >> year;
	}
};

class Person
{

private:
	string name;
	string address;
	Date birthdate;

public:
	Person()
	{
		this->name = "NA";
		this->address = "NA";
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
		cout << "Enter Name: ";
		cin >> this->name;

		cout << "Enter Address: ";
		cin >> this->address;

		getchar();

		this->birthdate.acceptDate();
	}

	void displayPerson()
	{
		cout << "Name: " << this->name << endl;
		cout << "Address: " << this->address << endl;
		this->birthdate.displayDate();
	}
};

int main()
{
	cout << "How many people's Data you want to enter: ";
	int inp;
	cin >> inp;

	for (int i = 0; i < inp; i++)
	{
		Person p1;

		p1.acceptPerson();
		p1.displayPerson();
	}
}

#include <iostream>
#include <typeinfo>
using namespace std;

class product
{

    int id;
    string title;
    double price;

public:
    product()
    {
    }

    product(int id, string title, double price)
    {

        this->id = id;
        this->title = title;
        this->price = price;
    }

    virtual void accept()
    {

        cout << " Enter id = ";
        cin >> id;
        cout << " Enter title = ";
        getchar();
        getline(cin, title);
        cout << " Enter price = ";
        cin >> price;
    }

    virtual void display()
    {

        cout << "id = " << id << endl;
        cout << "title = " << title << endl;
        cout << "price = " << price << endl;
    }
    double getPrice()
    {
        return price;
    }
};

class Book : public product
{

    string author;

public:
    Book()
    {
    }

    Book(int id, string title, double price, string author) : product(id, title, price)
    {

        this->author = author;
    }

    void accept()
    {
        product::accept();
        cout << "Enter author = ";
        getchar();
        getline(cin, author);
    }

    void display()
    {
        product::display();
        cout << "author = " << author << endl;
    }
};

class Tape : public product
{

    string artist;

public:
    Tape()
    {
    }

    Tape(int id, string title, double price, string artist) : product(id, title, price)
    {

        this->artist = artist;
    }

    void accept()
    {
        product::accept();
        cout << "Enter artist = ";
        getchar();
        getline(cin, artist);
    }

    void display()
    {
        product::display();
        cout << "artist = " << artist << endl;
    }
};

int menu()
{
    int choice;

    cout << "0.EXIT" << endl;
    cout << "1.ADD PRODUCT" << endl;
    cout << "2.DISPLAY PRODUCT" << endl;
    cout << "3.CALCULATE FINAL BILL" << endl;
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;

    return choice;
}

int main(int argc, char const *argv[])
{
    product *arr[3];
    int choice;

    while ((choice = menu()) != 0)
    {

        switch (choice)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                int x;
                cout << "1.ADD BOOK" << endl;
                cout << "2.ADD TAPE" << endl;
                cin >> x;

                if (x == 1)
                {
                    arr[i] = new Book();
                }
                else
                {
                    arr[i] = new Tape();
                }
                arr[i]->accept(); 
            }
            break;

        case 2:
            for (int i = 0; i < 3; i++)
            {
                cout<<"---------------------------------"<<endl;
                arr[i]->display();
                cout<<"---------------------------------"<<endl;
            }
            break;

        case 3:
        {
            double total = 0;
            double discount = 0;
            for (int i = 0; i < 3; i++)
            {
                if (typeid(*arr[i]) == typeid(Book))
                {

                    discount = discount + arr[i]->getPrice() * 0.1;
                }

                else
                {
                    discount = discount + arr[i]->getPrice() * 0.05;
                }

                total = total + arr[i]->getPrice();
            }
            cout << " Total amount : " << total  << endl;
            cout << " Discount amount : " << discount << endl;

            cout << " Total payable amount : " << total - discount << endl;
        }
        break;

        default:
            break;
        }
    }
    return 0;
}

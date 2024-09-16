#include<iostream>
using namespace std;

class Tollbooth{

    unsigned int total_no_of_cars = 0;
    double collected_money = 0;

public :
    
  
		int menu()
		{
			cout<<"What you wanna do...?"<<endl;
			cout<<"1. Paying Car"<< endl;
			cout<<"2. Non-Paying car"<< endl;
			cout<<"3. Display Information Collected" << endl;
			cout <<"4. Exit"<< endl << endl;
			
		    int ch;
		    cout <<"Enter your choice: ";
			cin >> ch;
			return ch;	
		}

        Tollbooth(){
            this->collected_money = 0;
            this->total_no_of_cars = 0;
        }

        void payingCars(){

            this->collected_money = this->collected_money + 0.5;
            this->total_no_of_cars = this->total_no_of_cars + 1;
    
        }

        void nonPayingCars(){
            this->total_no_of_cars = this->total_no_of_cars + 1;
            
        }

        void printOnconsole(){
             cout<<"Total No of Cars Passed: "<< this->total_no_of_cars << " and ";
			 cout <<"Total Revenue Collected: "<< this->collected_money;
		
        }
};

int main(int argc, char const *argv[])
{
    Tollbooth t1;
	int ch;
    while( (ch=t1.menu())!= 4)
    {
    	if(ch == 1)
    	{
    		t1.payingCars();
    		cout << endl << endl;
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch == 2)
		{
		    t1.nonPayingCars();
			cout << endl << endl;
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch==3)
		{
			t1.printOnconsole();
			cout << endl << endl;
    		cout<<"---";
    		cout<< endl << endl;
		}
        else if(ch<1 || ch>4)
        {
        	cout << "Enter Valid Choice"<< endl << endl; 

    		cout<<"---";
    		cout<< endl << endl;
		}
		
	}  
    
    return 0;
}

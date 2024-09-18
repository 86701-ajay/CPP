

#include<bits/stdc++.h>
using namespace std;

class Time
{
	private:
		int hrs;
		int mins;
		int sec;
	
	public:
		Time()
		{
			this->hrs = 0;
			this->mins = 0;
			this->sec = 0;	
		}	
		
		void setHrs(int hrs)
		{
			this->hrs= hrs;
		}
		int getHrs()
		{
			return this->hrs;
		}
		void setMins(int mins)
		{
			this->mins= mins;
		}
		int getMins()
		{
			return this->mins;
		}
		void setSec(int sec)
		{
			this->sec= sec;
		}
		int getSec()
		{
			return this->sec;
		}
		
		void acceptTime()
		{
			int hrs;
			int mins;
			int sec;
			
			cout << "Enter Time Data "<< endl<< endl; 
			cout <<"Enter Hours: ";
			cin >> hrs;
			setHrs(hrs);
			cout << "Enter Mins Data: ";
			cin >> mins;
			setMins(mins);
			cout << "Enter Seconds Data: ";
			cin >> sec;	
			setSec(sec);
		}	
		
		void printTime()
		{
			cout << endl << endl;
			cout << "Your Entered Time is: " << endl;
			
			cout << "Hrs: "<< this->hrs << " Mins: "<< this->mins << "and Hrs: " << this->sec << endl ;
			
			for(int i=0;i<20;i++)
			cout << "---";
			cout << endl << endl;
			
		}
};

int main()
{
	Time **ptr = new Time*[5];
	
	for(int i=0;i<5;i++)
	{
		ptr[i] = new Time;
	}
	
	for(int i=0;i<5;i++)
	{
		ptr[i]->acceptTime();
		ptr[i]->printTime();
	}
	
	
/*Deallocating Memory Here*/
	
	for (int i = 0; i < 5; i++)
    {
        delete ptr[i];
    	ptr[i] = NULL;
    }
	
}


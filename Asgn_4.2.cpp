

#include <iostream>
using namespace std;
class Stack{
    
	private:
		int *arr;
    	int top;
    	int size;
    
	public:
        Stack(int size=5){
            this->size=size;
            arr=new int [size];
            this->top = -1;
            
        }
       
     
	void printAllElements()
	{
		for(int i=0;i<this->size;i++)
		cout << arr[i] << " ";	
	}
	   
    int menu()
		{
			cout<<"What you wanna do...?"<<endl;
			cout<<"1. PUSH Item Into Stack"<< endl;
			cout<<"2. POP Iteam from stack"<< endl;
			cout<<"3. Display TOP element" << endl;
			cout<<"4. Display all the elements"<<endl;
			cout <<"5. Exit"<< endl << endl;
			
		    int ch;
		    cout <<"Enter your choice: ";
			cin >> ch;
			return ch;	
		} 
       
     void push(int x) {
		if (isFull()) {
            cout << "Stack Overflow"<< endl;
            return ;
        }
        top++;
        arr[top]=x;
     }

   
    int pop() 
	{
        if (isEmpty()) {
            cout << "Stack Underflow" << endl; 
        }
        top--; 
	}
    
    int peek() const 
	{
        if (isEmpty()) 
		{
            cout << "Empty Stack" << endl; 
        }
        
		cout <<"Top Element Is: " <<arr[top];
        return arr[top]; 
    }

   
    int isEmpty() const 
	{
        return top == -1; 
    }

    
    int isFull() const 
	{
        return top == size - 1; 
    }
};

int main(){
    
    cout << "What size of stack you want: ";
	int sz;
	cin >> sz;
	Stack s(sz);
   
    int ch;
    while( (ch=s.menu())!= 4)
    {
    	if(ch == 1)
    	{
    		int x;
    		cout << " Enter Value you want to enter: ";
			cin >> x;
			s.push(x);	
    		cout << endl << endl;
    		for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch == 2)
		{
		    s.pop();
			cout << endl << endl;
			for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch==3)
		{
			s.peek();
			cout << endl << endl;
			for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		else if(ch == 4)
		{
			s.printAllElements();
			cout << endl << endl;
			for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
        else if(ch<1 || ch>5)
        {
        	cout << "Enter Valid Choice"<< endl << endl; 
        	for(int i=0;i<20;i++)
    		cout<<"---";
    		cout<< endl << endl;
		}
		
	}  





}

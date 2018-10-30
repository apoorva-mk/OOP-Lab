
#include <iostream>
#include <math.h>


using namespace std;


class A{
    public:
    static int count;                 //count keeps track of number of objects created. Being a static member it is allocated memory only once  
    A(){
        count++;		      //the count is updated in the constructor
    }
   
};

int A::count=0;			     //Initialising static member count



int main()
    {
        A a;
        cout<<endl<<a.count<<endl;

        A b;
        cout<<endl<<b.count<<endl;
		
	if(a.count==b.count)
	{
		cout<<"There is only one memory location for count member of class A";
	}

    }

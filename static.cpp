
#include <iostream>
#include <math.h>


using namespace std;


class A{
    public:
    static int count;
    A(){
        count++;
    }
   
};

int A::count=0;



int main()
    {
        A a;
        cout<<endl<<a.count<<endl;

        A b;
        cout<<endl<<b.count<<endl;

    }
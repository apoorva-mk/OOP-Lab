#include <iostream>
using namespace std;

class X
{
    int a;
    public:
    friend X operator ++(X &);
    friend X operator ++(X &, int);
    X(int x=0)
        {
            a=x;
        }
    void display(){
        cout<<a<<endl;
    }
};


X operator ++(X &a)
    {
        a.a++;
        return a;
    }

X operator ++(X &a, int)
    {
        X c=a;
        a.a++;
        return c;
    }

int main()
    {
        X A;
        ++A;
        
        A.display();

        X C=A++;
        A.display();
        C.display();
    }

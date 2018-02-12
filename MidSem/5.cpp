#include <iostream>
using namespace std;

class X

{
    int a;
    public:
        X():a(){
            cout<<"X()"<<a<<endl;
        }
        X(int x):a(x){
            cout<<"X(int):"<<a<<endl;
        }
        ~X(){cout<<"~X():"<<a<<endl;}

};


X a,b(5);

int main()
    {
        cout<<"Start Main"<<endl;
        {
            X c,d(10);
        }
        cout<<"End Main"<<endl;
    }
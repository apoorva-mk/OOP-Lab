#include <iostream>
using namespace std;
class privateClass
    {
        private:
        int number;
        privateClass(int a=0)
            {
                number=a;
            }
        void display()
            {
                cout<<number<<endl;
            }
        
        friend void classCreator(int a);
       
    };

void classCreator(int a)
    {
        privateClass A(a);
        A.display();
    }   

int main()
    {
        classCreator(5);
    }


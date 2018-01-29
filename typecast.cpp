#include <iostream>
using namespace std;

class number
    {
        int a;
        public:
            number(int x)
                {
                    a=x;
                }
            operator int()
                {
                    return a;
                }
    };

int main()
    {
         number A(2);
         cout<<int(A)<<endl;
    }

#include <iostream>
using namespace std;

class complex_num{
    private:
        int r,i;
    public:
        complex_num(int a=0, int b=0)
            {
                r=a;
                i=b;
            }

        void display()
            {
               cout<<r<<" + "<<i<<" i"<<endl;  
            }
    	complex_num operator+(complex_num B)
            {
                r=r+B.r;
                i=i+B.i;
                return *this;
            }
        complex_num operator-(complex_num B)
            {
                r=r-B.r;
                i=i-B.i;
                return *this;
            }
        complex_num operator*(complex_num &B)
            {
                complex_num temp;
                temp.r=r*B.r-i*B.i;
                temp.i=r*B.i+i*B.r;
                return temp;
            }
	complex_num operator/(complex_num &B)
		{
			complex_num temp;
			temp.r=(r*B.r+i*B.i)/(r*r-i*i);
                	temp.i=r*B.i-i*B.r/(r*r-i*i);
			return temp;
		}
};

int main()
    {
        
        complex_num A( 10,5);
        complex_num B( 2,6 );
        complex_num C;

        A.display();
        B.display();
        C=A+B;
        C.display();
        complex_num D=A*B;
	complex_num E=B/A;
	
        D.display();
	E.display();

    }


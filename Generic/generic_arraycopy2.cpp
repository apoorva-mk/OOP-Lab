// COPY FUNCTION b/w TWO ARRAYS OF DIFFERENT TYPE

#include <iostream>
using namespace std;


template <class T1, class T2>
void copy(T1 a[], T2 b[], int n)
    {
        for(int i=0;i<n;i++)
            {
                a[i]=b[i];
            }
    }

template <class T>
void print(T a[],int n)
    {
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
int main()
    {
        int n=3;
        int x[n]={4,4,5};
        cout<<"X: ";
        print(x,n);
        float y[n]={8.2,6.9,8};
        cout<<"Y: ";        
        print(y,n);
        
        copy (x,y,n);
        cout<<"X: ";
        print(x,n);
        
    }
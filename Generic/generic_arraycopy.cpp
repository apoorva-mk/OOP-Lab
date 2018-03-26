// COPY FUNCTION FOR ARRAYS INDEPENDENT OF ARRAY TYPE

#include <iostream>
using namespace std;


template <class T>
void copy(T a[], T b[], int n)
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
        int y[n]={8,6,8};
        cout<<"Y: ";        
        print(y,n);
        
        copy (x,y,n);
        cout<<"X: ";
        print(x,n);
        
    }
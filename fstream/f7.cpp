// COUT WITH PRECISION AND WIDTH

#include <iostream>  
#include <fstream>
#include <cstring>   
#include <tgmath.h>
using namespace std;
int main () {
    int i;
int n;
cout<<"Enter Range 1-__ "<<endl;
cin>>n;


for(i=1;i<n;i++)
    {
        cout<<i<<": ";
        cout.precision(5);
        cout.fill('#');
        cout.width(10);
        cout<<sqrt(i)<<endl;
    }
// OR cout<<setwidt(10)<<setprecision(4)<<setfill('#')<<sqrt(i);

}
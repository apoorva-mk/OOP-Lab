// Country + Capital

#include <iostream>  
#include <fstream>
#include <cstring>   

using namespace std;
int main () {
    int i;
  fstream capital, country;
  fstream combine;
  char co[50];
  char ca[50];
  

  //infile.open("test.txt");
  capital.open("capital.txt");
  country.open("countries.txt");
  combine.open("combine.txt", ios::trunc| ios::out);
  
while(!country.eof())
    {
        capital.getline(ca,50);
        country.getline(co,50); // BUFFER SIZE HAS TO BE BIG ENOUGH
        combine<<co<<": "<<ca<<endl;
        cout<<co<<endl;

        
    }


}
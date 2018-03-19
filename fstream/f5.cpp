// Class implementation

#include <iostream>  
#include <fstream>
#include <cstring>   

using namespace std;

class open
    {
        public:
            fstream infile;
            char data[50];
        open()
            {
                infile.open("testagain.txt", ios::trunc | ios::out ); // open file as blank
            }
        void getline()
        {
            cout<<"Input for file"<<endl;
            cin.getline(data,50);
        }

        void print(){
            infile<<data<<endl;
        }


    };
int main () {

    open fd;
    fd.getline();
    fd.print();
  
}
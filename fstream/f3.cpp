// Write Sentence to File

#include <iostream>  
#include <fstream>
#include <cstring>   

using namespace std;
int main () {
    int i;
  fstream infile, outfile;
  char data[50];

  //infile.open("test.txt");
  outfile.open("testo.txt");
  
  cout<<"Write what to be written"<<endl;
  cin.getline(data,50);

  for(i=0;i<=strlen(data);i++)
    {
        outfile.write(data,i);
        outfile.put('\n');
    }

  //infile.close();
  outfile.close();
}
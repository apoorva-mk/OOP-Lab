// Read charachter and write to another file one by one

#include <iostream>  
#include <fstream>   

using namespace std;
int main () {
  fstream infile, outfile;

  infile.open("test.txt");
  outfile.open("testo.txt");
  char c; 
  while(infile.eof()!=1)
  {
      c=infile.get();
      cout <<c;
      outfile.put(c);
  }

  infile.close();
  outfile.close();
}
#include <iostream>  
#include <fstream>   

using namespace std;
int main () {
  ofstream outfile ("test.txt");
  char ch;

  cout << "Type some text (type a dot to finish):\n";
  do {
    ch = cin.get();
    outfile.put(ch);
  } while (ch!='.');

  return 0;
}
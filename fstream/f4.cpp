// Frequency of Alphabets

#include <iostream>  
#include <fstream>   

using namespace std;
int main () {
  fstream infile, outfile;
    int i;
  infile.open("test.txt");
  int count[26];

  for(i=0;i<26;i++)
    {
        count[i]=0;
    }
  char c; 
  while(infile.eof()!=1)
  {
      c=infile.get();
      if(!isalpha(c))
        continue;
      c=tolower(c);
      cout <<c;
      count[c-97]++;
    //outfile.put(c);
  }
  cout<<endl;
  int j;
  for(i=0;i<26;i++)
    {
        c=i+97;
        cout<<c<<": ";
        for(j=0;j<count[i]/10;j++)
            cout<<"|";
        cout<<endl;
    }

  infile.close();
  outfile.close();
}
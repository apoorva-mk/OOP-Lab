//Negate the Grayscale of a Grayscale image. 

#include <iostream>
#include <fstream>

using namespace std;
int main()
    {
        fstream infile;
        fstream outfile;

        infile.open("tiger.bmp");
        outfile.open("neg.BMP");
        
        int r,g,b,c;
        int count=0;
        int flag=0;

        while(!infile.eof())
            {
                c=infile.get();
                count++;

                if(flag==3)
                    flag=0;

                if(count<54)
                    {
                        outfile.put(c);
                    }
                else
                    {
                        if(flag==0)
                            r=c;
                        if(flag==1)
                            g=c;
                        if(flag==2)
                            {
                                b=c;

                                c=255-(r+g+b)/3;
                                outfile.put(c);
                                outfile.put(c);
                                outfile.put(c);

                            }
                    }
                flag++;
            }
            cout<<count;

            infile.close();
            outfile.close();
    }
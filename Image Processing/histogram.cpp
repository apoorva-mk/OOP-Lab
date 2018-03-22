//RGB -> Grayscale

#include <iostream>
#include <fstream>

using namespace std;
int main()
    {
        int histogram[256];
        fstream infile;
        fstream outfile;

        infile.open("tiger.bmp");
        outfile.open("gray.BMP");
        
        int r,g,b,c,i=0;
        int count=0;
        int flag=0;

        for(i=0;i<256;i++)
            {
                histogram[i]=0;
            }
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

                                c=(r+g+b)/3;
                                histogram[c]=histogram[c]+3;
                                outfile.put(c);
                                outfile.put(c);
                                outfile.put(c);

                            }
                    }
                flag++;
            }
            

            infile.close();
            outfile.close();
            int sum=0;
            for(i=0;i<256;i++)
                {   
                    sum=sum+histogram[i];
                    int j=0;
                    cout<<i<<" : ";
                    while(j<histogram[i]%100)
                        {
                            cout<<"|";
                            j++;
                        }
                    cout<<endl;
                    //cout<<histogram[i]<<endl;
                }
            cout<<endl<<"Number of bits: "<<count<<endl;
    }
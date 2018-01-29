#include <iostream>
using namespace std;

class timer
    {
        public:
            int s,m,h;
        public:
            timer()
                {
                    s=0;
                    m=0;
                    h=0;
                }
            void clockify()
                {
                    if(s>60)
                        {
                            s=0;
                            m++;
                        }
                    if(m>60)
                        {
                            m=0;
                            h++;
                        }
                    if (h>12)
                        {
                            h=0;
                        }
                }

            void start()
                {
                    s++;
                    clockify()
                    getchar();
                    start();
                }

    };

int main()
    {
        timer A;
        A.start();
    echo<<endl<<"\t"<<A.h<<" h :"<<A.m<<" m :"<<A.s<<" s "<<endl;
    }
#include <iostream>
using namespace std;

class student{
    private:
        int roll;
        string first_name,last_name;
    public:
       inline void get_fn(string s)
        {
            this->first_name=s;
        }
        inline void get_ln(string s)
        {
            this->last_name=s;
        }
        inline void get_roll(int r)
        {
            this->roll=r;
        }
        inline void print_name()
            {
                cout<<first_name<<" "<<last_name<<endl;
            }
        inline string full_name()
            {
                string s;
                s=first_name+" "+last_name;
                return s;
            }
        inline string operator++(int )  // int is to specify it's a postfix
            {
                string s;
                s=first_name+" "+last_name;
                return s;
            }
        
        inline bool operator>(student A)
            {
                string x=this->full_name();
                string y=A.full_name();
               if((x.compare(y)) < 0)
                    cout<<endl <<x<<" is smaller than "<<y<<endl;
                else if(x.compare(y) > 0)
                    cout<<endl <<y<<" is smaller than "<<x<<endl;
                else cout<<"Same names\n";
            }


        
            
};

int main()
    {
       student A,B;
       A.get_fn("Govind");
       A.get_ln("Jeevan");

       B.get_fn("Soham");
       B.get_ln("Raje");
       
    
      string S=A.full_name();
      cout<<S<<endl;
      cout<<B++<<endl;
      
       A>B;
     

    }
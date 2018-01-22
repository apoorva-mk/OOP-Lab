#include <iostream>
#include <math.h>


using namespace std;



class perceptron{
  public:
  
        int input[4][2] = { {0,0},
                            {0,1}, 
                            {1,0},
                            {1,1}
                          },
                          correct_output[4] = {0, 0, 0, 1},
                          fireing, status;
        
        float threshold, bias, learning_rate, total, weight[2];;


        perceptron()
          {
                  
            fireing = 0;
            weight[0] = 0;
            weight[1] = 0;

            learning_rate = 0.1;
            bias = 0;
            total = 0;
     
          }

  int activation();
  int train();
  friend int fire(perceptron,int,int);
  };




  int fire(perceptron p, int a, int b)
    {
      p.total =p.bias + a *p.weight[0] + b *p.weight[1];
      cout<<"Input 1: "<<a<<" Input 2: "<<b<<" gate: "<< p.activation()<<endl;       
    }



int perceptron::activation()
  {
    if (total >= 0)
      return 1;
    else
      return 0;
  }


int perceptron::train(){

  for (int k = 0; k < 300; k++)
    {
      for (int i = 0; i < 4; i++)
        { 
         total =bias +input[i][0] *weight[0] +input[i][1] *weight[1];
         status = activation();
          for (int l = 0; l < 2; l++)
            {
             weight[l] =weight[l] + (correct_output[i] -status) *input[i][l] *learning_rate;
            }
         bias =bias + (correct_output[i] -status) *learning_rate;
         total = 0;
        }
    }
  cout << "\nThe weights are:" << " Weight 1: " <<weight[0] << " Weight 2: " <<weight[1]<<" bias:" <<bias << '\n'<<endl;

  }


int main()
  {
    
    int a,b;
    perceptron OR;
    OR=perceptron();
    OR.train();
    cout<<"ENTER TWO TEST INPUTS"<<endl;
    cin>>a>>b;
    fire(OR,a,b);
  }
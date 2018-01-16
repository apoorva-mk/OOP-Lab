#include <iostream>
#include <math.h>

using namespace std;

int activation(float a, float b)
  {
    if (a >= b)
      return 1;
    else
      return 0;
  }

class perceptron{
  public:
  int input[4][2] = { 
                      {0,0},
                      {0,1}, 
                      {1,0},
                      {1,1}
                    };
  float weight[2];
  float threshold;
  float bias;
  float learning_rate;
  int fireing;
  int correct_output[4] = {0, 0, 0, 1};
  float total;
  int status;

  };


int train(int a, int b, perceptron AND){
    
  AND.fireing = 0;
  AND.weight[0] = 0;
  AND.weight[1] = 0;

  AND.learning_rate = 0.1;
  AND.bias = 0;
  AND.total = 0;
          

  for (int k = 0; k < 300; k++)
    {
      for (int i = 0; i < 4; i++)
        { 
          AND.total = AND.bias + AND.input[i][0] * AND.weight[0] + AND.input[i][1] * AND.weight[1];
          AND.status = activation(AND.total, 0);
          for (int l = 0; l < 2; l++)
            {
              AND.weight[l] = AND.weight[l] + (AND.correct_output[i] - AND.status) * AND.input[i][l] * AND.learning_rate;
            }
          AND.bias = AND.bias + (AND.correct_output[i] - AND.status) * AND.learning_rate;
          AND.total = 0;
        }
    }
  cout << "The weights are: \n" << "Weight 1: " <<AND.weight[0] << " \n Weight 2: " << AND.weight[1]<<"\n bias:" << AND.bias << '\n'<<endl;
  AND.total = AND.bias + a * AND.weight[0] + b * AND.weight[1];
  cout<<"Input 1: "<<a<<" Input 2: "<<b<<" AND: "<< activation(AND.total, 0)<<endl;
              
  }


int main()
  {
    cout<<"ENTER TWO TEST INPUTS"<<endl;
    int a,b;
    cin>>a>>b;
    perceptron AND;
    train(a, b, AND);
  }
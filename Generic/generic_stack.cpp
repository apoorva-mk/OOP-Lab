// STACK USING TEMPLATES

#include <iostream>
using namespace std;


template <class T>
class Stack {
    public:
        Stack(int s):top(0),count(0) {size=s;}
        void push (T object);
        T pop();
        T topElement();
        bool isEmpty();

    private:
        struct StackNode {              // linked list node
            T data;                     // data at this node
            StackNode *next;            // next node in list
            // StackNode constructor initializes both fields
            StackNode(T newData, StackNode *nextNode)
                : data(newData), next(nextNode) {}
        };
        StackNode *top;                 // pointer to top of stack
        int count;
        int size;
};


template <class T>
void Stack<T>::push(T obj) {
   try {
       if (count >= size)
        {
           throw count;
        }
    
        else
        {
            top = new StackNode(obj, top);
            count++;
        }
   }

   catch (int x ) {
      cout << "OVERFLOW \n";
   }
}


template <class T>
T Stack<T>::pop() {

    try {
        if (isEmpty())
            {
            throw count;
            }
    
        else
            {
            StackNode *topNode = top;
            top = top->next;
            T data = topNode->data;
            delete topNode;
            count--;
            cout<<"\nPOPPED CHARACHTER "<<data<<endl;
            
            return data;
            }
        }

   catch (int x ) {
      cout << "UNDERFLOW \n";
   }
    //return 0;
}


template <class T>
T Stack<T>::topElement() {
    if ( !isEmpty() ) {
        return top->data;
    }
}



template <class T>
bool Stack<T>::isEmpty() {
    if (top == 0) {
        return true;
    }
    else {
        return false;
    }
}


int main()
    {

        Stack <float> C(3);
        int x=1;
        float f;
        while(x)
            {
                cout<<"\n\t\tSTACK\n\t\t1. Push 2. Pull"<<endl;
                scanf("%d",&x);

                switch(x)
                {
                    case 1: cout<<"Enter Float: ";scanf("%f", &f);
                            C.push(f);
                            break;
                    case 2: C.pop(); break;
                }
            }
    }
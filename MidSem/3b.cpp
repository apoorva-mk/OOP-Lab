#include <iostream>
using namespace std;

class X
{
    int a;
    friend A operator =(class&, class&);
}


A operator =(A* a, A* b)
    {
        a.number=b.number;
    }
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class A{
    int y;
    public:
    static int var;
    static void func(){      //Statis function Access only static member
        var++;
    }
    static int x;            //Declaration of Static variable x --- Common to all Objects  
    void setval(int val)
    {
        y = val;
    }
    A(){
        x++;                    // Increases no. of copies of class A at a time
    }
    ~A(){
        x--;
    }
};
int A::var = 0;
int A::x = 0;                   // Definition of x
int main() 
{
    A obj;
    cout<<A::x<<" ";
    A obj2;
    A obj3;
    cout<<A::x<<" ";
    cout<<A::var<<endl;
    A::func();
    cout<<A::var<<endl;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
    public:
    virtual void func() = 0;    // Pure Virtual Function
    int b;
};
class B:public A{
    public:
    void func()
    {cout<<"Class B";}    // must define virtual function else B wud become Abstract itself
    int a;
};
int main()
{
     // A obj -- Not valid   Object of Abstract Class 
     B obj;         // Valid
     obj.a = obj.b = 0; // Access 'b' as well of Abstract Class
    return 0;
}

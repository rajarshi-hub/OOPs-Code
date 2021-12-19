#include <iostream>

using namespace std;
class A{
    int y;
    public:
    virtual void func()
    {
        cout<<"A";
    }
};
class B:public A
{
    int a;
    public:
    int x = 5;
    void func()
    {
        cout<<"B";
    }
    
};
int main() 
{
    A p;
    p.func();  // object of A   Print A
    A *ptr;
    ptr = new A();
    ptr->func();  //onject pointer points to object of A   Prints A
    ptr = new B();          // object pointer compatible with the child object 
    ptr->func(); //prints B   Resolved at run time Late Binding 
    return 0;
}

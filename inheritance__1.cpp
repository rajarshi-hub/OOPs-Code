/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
    int a;
    int b;
    public:
    void func(){
        cout<<"func of A is called"<<endl;
    }
    int func1(int a)
    {
        cout<<"func1 of A is called with val-- "<<a<<endl;
    }
    
};
class B:public A{
    public:
    int c;
    void func(){
        cout<<"func of B is called"<<endl;
    }
    using A::func1;              // ##  Redefiniton using this we can use func1 as overloaded functions
    void func1()
    {
        cout<<"func1 of A is called"<<endl;
    }
};

int main()
{
    cout<<"Size of Object A-- "<<sizeof(A)<<endl;
    cout<<"Size of Object B-- "<<sizeof(B)<<endl;   //Expected 4 as private members of A do not inherit But -- 
                                             //All members are inherited (are visible) but not accesible by object or member function
    B obj;
    obj.func();                        //Overridden func()
    obj.A::func();                     //Can be called this way  A,s func()
    obj.func1();                      //obj.func1(0) => error (No such function) (when no Redefiniton -- ## )
    obj.func1(0);
    return 0;
}

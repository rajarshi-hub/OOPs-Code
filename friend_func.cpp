/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class A;
class B
{
    int a;
    public:
    int x = 5;
    void friendly(A);
    
};
class A{
    int y;
    public:
    friend void func(A obj);
    friend void B::friendly(A); 
    void setval(int val)
    {
        y = val;
    }
};
void B::friendly(A obj)                                    //Function of Class B -- Friend Function of Class A
{
    cout<<"Friend Function of B Class"<<" "<<obj.y;        //Access Private Data Member using object
}
void func(A obj){                                          // Global Friend Function
    cout<<"Global Friend Function"<<" "<<obj.y;            // Access private data Member
}
int main() 
{
    A obj;
    B obj2;
    obj.setval(7);
    func(obj);
    cout<<endl;
    obj2.friendly(obj);
}

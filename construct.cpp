/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class A{
    int x;
    public:
    A(){
        cout<<"Default Constructor";
    }
    A(int a)
    {
        cout<<"Parameterized Constructor";
        x = a;
    }
    A(A &obj)    // Called when ---- 1.object is passed by value -- 2.object returned -- 3. Copy Intialization
    {
        cout<<"Copy Constructor";
        x = obj.x;
    }
    
};

int main()
{
    A obj1;
    cout<<endl;
    A obj2(5);
    cout<<endl;
    A obj3 = obj2;      // Copy Intialization
    cout<<endl;
    A obj4(obj3);       // Copy Intialization
    cout<<endl;
    A obj5;
    obj5 = obj2;        // Not Copy Intialization
}

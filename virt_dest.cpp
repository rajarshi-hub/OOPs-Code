/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor of class A"<<endl;
    }
    virtual ~A(){                             //####
        cout<<"Destructor of class A"<<endl;
    }
    
};
class B:public A{
    public:
    B(){
        cout<<"Constructor of class B"<<endl;
    }
    ~B(){
        cout<<"Destructor of class B"<<endl;
    }
};
int main()
{
    A *ptr = new B;
   delete(ptr);//  Not Use Virtual  @ => #### ---- Destructor of Class A Only Called(destroying the object of B pointed ny pointer of Class A)

    return 0;
}

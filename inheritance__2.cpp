/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class A{
    protected:
    int a;
    public:
    int b;
    int k;
    A(int g)
    {
        cout<<"Constructor of A"<<endl;
        b = g;
    }
};
class B:private A{          //Public and protected are going to be private
    public:
    using A::a;            //Redefiniton of private variable --  Now its public of A
                           //Changing Access Specifier from private to public       
                           //   ####  Possible in Private visibility Mode Only Not in public
    int c;
    B(int cc, int gg):A(gg)     // Call Constructor of A then B  -- Initialization List> ;
    { 
        cout<<"Constructor of B"<<endl;
        c = cc;
    }
    void set_val(int val)
    {
        k = val;
    }
};

int main()
{
    B obj(1,2);
    obj.a = 5;               // obj.k and obj.b is invalid
    cout<<obj.a<<" ";
    obj.set_val(43);
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class Base{
   public:
   int a;
   int b;
};
class Der1:virtual public Base{         
    public:
    int c;
   
};
class Der2:virtual public Base{         
    public:
    int d;
   
};
class Der3:public Der1,public Der2    // By declaring Virtual it only onherits one B's variable
{
    public:
    int e;
};

int main()
{
    Der3 obj;
    obj.e = 5;
    obj.b = obj.e;       // Ambiguos Statement Two b's are in Der3 by Der1 and Der2 -- 
                         // Dreaded Diamond 
                         // Using Virtual Classes we can avoid this
    return 0;
}

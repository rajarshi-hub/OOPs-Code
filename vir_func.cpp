#include <iostream>

using namespace std;
class A{
    int y;
    public:
    static int x;
    A(){
        x++;
    }
    virtual int func()
    {
        cout<<"A";
        return 1;
    }
    friend void f();
};
void f()
{
    A obj;
    cout<<obj.y;
    cout<<'k';
}
int A::x = 0;
class B:public A
{
    int a;
    public:
    int x = 5;
    int func()
    {
        cout<<"B";
        return 1;
    }
    
};
int main()
{
    A p;
    A k;
    A arr[10];
    f();
    arr[0].func();
  cout<<p.x;
  
    

    return 0;
}

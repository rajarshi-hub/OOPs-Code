#include <bits/stdc++.h>

using namespace std;
class str{
    int var;
    public:
    string s;
    void set()
    {
        var = 5;
    }
    void func(str obj)
    {
        cout<<obj.var;
    }
};
void func2(str obj)
{
    cout<<obj.var;
}
int main()
{
    str a,b;
    b.set();
    a.func(b);
    func2(b);

    return 0;
}

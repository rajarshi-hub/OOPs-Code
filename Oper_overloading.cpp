#include <bits/stdc++.h>

using namespace std;
class str{
    public:
    string s;
    str operator ~()
    {
        str t;
        t.s = s.substr(0,2);
        return t;
    }
};

int main()
{
    str a,b;
    b.s = "Hero";
    a = ~b;
    cout<<a.s<<endl;
    

    return 0;
}

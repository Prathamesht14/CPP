using namespace std;
#include<iostream>

class demo
{
    public:
        int i;          // non-static
        int j;          // non- static
        static int k;   // static

        demo()
        {
            i = 0;
            j = 0;
        }

};

int demo :: k = 11;

int main()
{

    demo dobj;

    cout<<demo::k<<"\n";        // 11

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";

    return 0;
}
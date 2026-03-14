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

        void fun()              // non static method
        {
            cout<<"inside non static fun\n";
            cout<<"i :"<<i<<"\n";
            cout<<"j :"<<j<<"\n";
            cout<<"k :"<<k<<"\n";
        }

        static void gun()       // static method
        {
            cout<<"inside static gun\n";
            cout<<"k :"<<k<<"\n";
        }

};

int demo :: k = 11;

int main()
{

    cout<<demo::k<<"\n"; 

    demo::gun();

    demo dobj;

    cout<<dobj.i<<"\n";         // 0
    cout<<dobj.j<<"\n";         // 0

    dobj.fun();
    return 0;
}
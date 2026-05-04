#include<iostream>
using namespace std;

class Base                              //8
{
    public: 
        int i, j;


};

class Derived : public Base             // 16
{
    public: 
        int x, y;


};

int main()
{
    Derived *dp = NULL;
    Base bobj;

    dp = &bobj;                     // DownCasting(error)
    return 0;
}
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
    Base *bp = NULL;
    
    bp = new Derived();                 // upcasting (allowed)

    return 0;
}
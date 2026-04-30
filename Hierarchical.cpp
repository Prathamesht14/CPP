#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j;

        Base()
        {
            cout<<"Inside Base Constructor"<<"\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor"<<"\n";
        }

        void fun()
        {
            cout<<"Inside Function Fun"<<"\n";
        }
};

class Derived1 : public Base
{
    public:
        int a, b;

        Derived1()
        {
            cout<<"Inside Derived1 Constructor"<<"\n";
        }

        ~Derived1()
        {
            cout<<"Inside Derived1 Destructor"<<"\n";
        }

        void gun()
        {
            cout<<"Inside Function gun"<<"\n";
        }
};

class Derived2 : public Base
{
    public:
        int x, y;

        Derived2()
        {
            cout<<"Inside Derived2 Constructor"<<"\n";
        }

        ~Derived2()
        {
            cout<<"Inside Derived2 Destructor"<<"\n";
        }

        void sun()
        {
            cout<<"Inside Function sun"<<"\n";
        }
};

int main()
{
    Derived1 dobj1;
    Derived2 dobj2;
    cout<<"Inside Main"<<"\n";

    cout<<"Size of Base: "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived1: "<<sizeof(dobj1)<<"\n";
    cout<<"Size of Derived2: "<<sizeof(dobj2)<<"\n";

    cout<<"End of Main"<<"\n";
    return 0;
}
#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;

        Base1()
        {
            cout<<"Inside Base1 Constructor"<<"\n";
        }

        ~Base1()
        {
            cout<<"Inside Base1 Destructor"<<"\n";
        }

        void fun()
        {
            cout<<"Inside Function Fun"<<"\n";
        }
    
};

class Base2
{
    public:
        int a,b;

        Base2()
        {
            cout<<"Inside Base2 Constructor"<<"\n";
        }

        ~Base2()
        {
            cout<<"Inside Base2 Destructor"<<"\n";
        }

        void gun()
        {
            cout<<"Inside Function Gun"<<"\n";
        }
    
};

class Derived : public Base1, Base2
{
    public:
        int x, y;

        Derived()
        {
            cout<<"Inside Derived Constructor"<<"\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<"\n";
        }

        void sun()
        {
            cout<<"Inside Function Sun"<<"\n";
        }
};

int main()
{
    Derived dobj;

    cout<<"Inside Main"<<"\n";

    cout<<"Size of Base1: "<<sizeof(Base1)<<"\n";
    cout<<"Size of Base2: "<<sizeof(Base2)<<"\n";
    cout<<"Size of Derived: "<<sizeof(dobj)<<"\n";

    cout<<"End of Main"<<"\n";
    return 0;
}
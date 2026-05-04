#include<iostream>
using namespace std;

class Base 
{
    private:
        int i, j;
    public:    
        Base()
        {
            cout<<"Inside Base Constructor"<<"\n";
            i = 0; 
            j = 0;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor";
        }
        void fun()
        {
            cout<<"Inside Base Fun"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int x;

        Derived()
        {
            cout<<"Inside Derived Constructor"<<"\n";
            x = 0;

        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor"<<"\n";
        }

        void gun()
        {
            cout<<"inside Gun of Derived"<<"\n";
        }
};

int main()
{
    cout<<"Inside MAin \n";
    Derived dobj;

    cout<<"size of Base: "<<sizeof(Base)<<"\n";         // 8
    cout<<"size of derived: "<<sizeof(Derived)<<"\n";   // 12
    
    //cout<<dobj.i<<"\n";     // error
    //cout<<dobj.j<<"\n";     // error
    cout<<dobj.x<<"\n";     //0

    cout<<"End of main"<<"\n";

    return 0;
}
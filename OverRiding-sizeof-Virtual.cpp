#include<iostream>
using namespace std;

class Base                          
{
    public: 
        int i, j;

        void fun()
        { cout<<"Inside Base Fun"<<"\n";    }

        virtual void gun()
        { cout<<"Inside Base Gun"<<"\n";    }

        virtual void sun()
        { cout<<"Inside Base Sun"<<"\n";    }

};              //8

class Derived : public Base          
{
    public: 
        int x, y;

        void fun()                         // Redifination
        { cout<<"Inside Derived Fun"<<"\n";    }

        void sun()
        { cout<<"Inside Derived Sun"<<"\n";    }

        virtual void run()
        { cout<<"Inside Derived Run"<<"\n";    }

};         // 16

int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";


    return 0;
}
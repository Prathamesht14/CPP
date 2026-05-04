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

        void sun()                         // Redifination
        { cout<<"Inside Derived Sun"<<"\n";    }

        virtual void run()                  // Defination
        { cout<<"Inside Derived Run"<<"\n";    }

};         // 16

int main()
{
    Base *bp = new Derived();               // upcasting

    bp-> fun();             // Base fun
    bp-> gun();             // base gun
    bp-> sun();             // derived sun
 //   bp-> run();             // error

    return 0;
}
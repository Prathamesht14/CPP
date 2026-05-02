#include<iostream>
using namespace std;

class Base                          
{
    public: 
        int i, j;

        void fun()
        { cout<<"Inside Base Fun"<<"\n";    }

        void gun()
        { cout<<"Inside Base Gun"<<"\n";    }

        void sun()
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

        void run()
        { cout<<"Inside Derived Run"<<"\n";    }

};         // 16

int main()
{
    Base *bp = NULL;
    
    bp = new Derived();               

    bp -> fun();            // base fun
    bp -> gun();            // base gun
    bp -> sun();            // base sun
    //bp -> run();            // error

    return 0;
}
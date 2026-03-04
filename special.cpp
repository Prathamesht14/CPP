using namespace std;
#include<iostream>

class demo
{
    public:
        int i;          //characteristics
        float f;        //characteristics
    
        demo()              //constructor
        {
            cout<<"Inside constructor \n";
            i=0;
            f=0.0f;

        }
        ~demo()             //destructor
        {
            cout<<"inside destrcutor\n";

        }
        void fun()          //behavior
        {
            cout<<"inside fun \n";
        }
};

int main()
{
    cout<<"inside main\n";
    
    demo dobj;              //object creation

    cout<<dobj.i<<"\n";

    dobj.fun();
    cout<<"end of main\n";
    return 0;
}
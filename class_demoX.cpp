using namespace std;
#include<iostream>

class demo
{
    public:
        int i;          //characteristics
        float f;        //characteristics

    void fun()          //behavior
    {
        cout<<"inside fun \n";
    }
};

int main()
{
    demo dobj;

    cout<<sizeof(dobj)<<"\n";       //8
    return 0;
}
using namespace std;
#include<iostream>

//  Encapsulation
class Marvellous
{
    // Access Specifier (By Default Private)
    
    int No1, No2;       // Characteristics

    void Fun()          //Behaviour
    {
        cout<<"Inside Fun \n";      
    }

    void gun()          //Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{
    // Object Creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";      //8

    cout<<mobj1.No1<<"\n";

    mobj1.Fun();
    mobj2.Fun();

    mobj1.gun();
    return 0;
}
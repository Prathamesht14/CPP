using namespace std;
#include<iostream>

//  Encapsulation
class Marvellous
{
    // Access Specifier
    public:
    int No1, No2;       // Characteristics

    // Default Constructor
    Marvellous()
    {
        No1 = 0;
        No2 = 0;
        cout<<"Inside Default Constructor\n";
    }

    // Parameterized Constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside Parameterzied Constructor\n";
        No1 = B;
        No2 = 0;
    }

    //Copy Constructor
    Marvellous(Marvellous &ref)
    {      
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;          
    }

    // Destructor
    ~Marvellous()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";

    Marvellous mobj1;             // Default Constructor
    Marvellous mobj2(11,21);        // Parameterized Constructor
    Marvellous mobj3(mobj2);        // Copy Constructor

    cout<<"End of main\n";
    
    return 0;
}            // All Destructors gets called
// 1 : tula kay karaychay? -> Behaviours
// Answer -> Addition & Substraction

// 2 : Te KarnyaKarta tula kay lagnar ahe? -> Characteristics
// Answer -> 2 Numbers (2 int) -> No1, No2

using namespace std;
#include<iostream>

class Arthematic
{
    public:
        int no1;
        int no2;

        Arthematic()
        {
            no1 = 0;
            no2 = 0;
        }

        Arthematic(int value1, int value2)
        {
            no1 = value1;
            no2 = value2;
        }
        
        int addition()
        {
            int ans = 0;
            ans = no1 + no2;
            return ans;
        }

        int substraction()
        {
            int ans = 0;
            ans = no1 - no2;
            return ans;
        }

};

int main()
{
    Arthematic aobj(11,10);
    int result = 0;

    result = aobj.addition();
    cout<<"Addition is: "<<result<<"\n";

    result = aobj.substraction();
    cout<<"Subtractiion is : "<<result<<"\n";

    return 0;
}
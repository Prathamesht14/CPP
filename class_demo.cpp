using namespace std;
#include<iostream>

class demo
{
    public:
        int i;
        float f;
};
int main()
{
    demo dobj;

    cout<<sizeof(dobj)<<"\n";       //8
    return 0;
}
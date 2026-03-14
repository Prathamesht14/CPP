// 1 : tula kay karaychay? -> Behaviours
// Answer -> Addition & Substraction

// 2 : Te KarnyaKarta tula kay lagnar ahe? -> Characteristics
// Answer -> 2 Numbers (2 int) -> No1, No2


#include<stdio.h>

int addition(int no1, int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;
}

int substraction(int no1, int no2)
{
    int ans = 0;
    ans = no1 - no2;
    return ans;
}

int main()
{
    int A = 11, B = 10;
    int result = 0;

    result = addition(A,B);
    printf("Addition is : %d \n",result);

    result = substraction(A,B);
    printf("Substraction is : %d \n",result);

    return 0;
}
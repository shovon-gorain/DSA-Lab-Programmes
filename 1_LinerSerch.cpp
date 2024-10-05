#include<iostream>
using namespace std;

int main()
{
    int a[6]={3,4,5,6,73,3};
    int k=73;
    for(int i=0;i<=6;i++)
    {
        if(k==a[i])
        {
            cout<<"Number index is :"<<i;
            break;
        }
    }
    return 0;
}

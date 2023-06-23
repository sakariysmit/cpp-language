//fibonacci series
#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c,i;
    cout<<"enter number of fibonacci series n:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cout<<" "<<a;
        c=a+b;
        a=b;
        b=c;
    }
}


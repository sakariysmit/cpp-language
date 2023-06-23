//total 1,2,3....10=55.
#include<iostream>
using namespace std;
int main()
{
   int a,total=0;
   for (a=1;a<=10;a++)
   {
    cout<<" "<<a;
    total += a;   
   }
   cout <<" total is:"<<total;
}
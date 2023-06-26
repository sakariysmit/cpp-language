#include<iostream>
using namespace std;
class result{
   private:
   int eng,guj,eco,total;
   float pr;
   public:
   void input()
   {
    cout<<"enter eng :"<<endl;
    cin>>eng;
    
    cout<<"enter guj:"<<endl;
    cin>>guj;
    
    cout<<"enter eco :"<<endl;
    cin>>eco;
   }
   void logic()
   {
     total=eng+guj+eco;
     pr=float(total)/300*100;
   }
   void printe()
   {
    
   cout<<"total is: "<<total<<endl;
  cout<<"pr is :"<<pr; 

   }


};
int main()
{
    result x;
    x.input();
    x.logic();
    x.printe();
}
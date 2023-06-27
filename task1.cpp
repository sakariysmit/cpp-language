#include<iostream>
using namespace std;
class student{
   int admno;
   char sname[20];
   float eng,sci,maths,total;
   float ctotal(){
    return eng+sci+maths;
   }
   public:
   void takedeta()
   {
     cout<<"enter admno :";
    cin>>admno;
     cout<<"enter sname :";
    cin>>sname;

    cout<<"enter eng mark:";
    cin>>eng;
    
    cout<<"enter sci mark:";
    cin>>sci;
    
    cout<<"enter maths mark :"<<endl;
    cin>>maths;
    total=ctotal();
   }
   void showdata()
   {
     cout<<"admno:"<<admno<<endl;
     cout<<"sname:"<<sname<<endl;
     cout<<"eng mark:"<<eng<<endl; 
     cout<<"sci mark:"<<sci<<endl;
     cout<<"maths mark:"<<maths<<endl;
     cout<<"total mark:"<<total<<endl;
   }



};
int main()
{
    student x;
    x.takedeta();
    x.showdata();
}
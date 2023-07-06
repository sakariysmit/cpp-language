#include<iostream>

using namespace std;

class Result
{
    int e,b,s,total;
    float per;

    public : 
     void setdata();
     float calc();
     void showdata();
};

void Result::setdata()
{
    cout<<"Enter eco marks : ";
    cin>>e;
   
    cout<<"Enter ba  marks : ";
    cin>>b;
   
    cout<<"Enter sp  marks : ";
    cin>>s;
    cout<<endl;
    calc();
}

float Result::calc()
{
    total = e+b+s;
    per = total/3;
}


void Result::showdata()
{
    cout<<"Maths\tScience\tEnglish\tTotal\tPercentage\t"<<endl;
    cout<<"\t\t"<<e<<"\t"<<b<<"\t"<<s<<"\t"<<total<<"\t"<<per<<" %\t"<<endl;
}


int main()
{
    Result stu[5];

    int i;

    for (i=0;i<3;i++)
    {
        cout<<"Student : "<<i+1<<endl;
        stu[i].setdata();
    }

    for (i=0;i<3;i++)
    {
        cout<<"Student : [ "<<i+1<<"]";
        stu[i].showdata();
    }

    
    
}
#include<iostream>
using namespace std;
class ABC{
    protected:
    int a;
    public:
    void setA()
    {
        cout<<"Enter A:";
        cin>>a;
    }
};
class PQR:public ABC{
    protected:
    int b;
    public:
    void setB()
    {
        cout<<"Enter B:";
        cin>>b;
    }
};
class XYZ:public PQR{
    int c;
    public:
    void setc()
    {
        cout<<"Enter c:";
        cin>>c;
    }
    void get(){
        cout<<"Addition of a,b and c is:"<<a+b+c<<endl;
    }
};
int main()
{
    XYZ x;
    x.setA();
    x.setB();
    x.setc();
    x.get();
} 
#include<iostream>
using namespace std;
class Base{
    public:
    Base()
    {
        cout<<"base called..."<<endl;
    }
};
class ABC:public Base{
    public:
    ABC()
    {
        cout<<"ABC called..."<<endl;
    }
};
class XYZ:public Base{
    public:
    XYZ()
    {
        cout<<"XYZ called..."<<endl;
    }
};
class PQR:public XYZ,public ABC{
    public:
    PQR()
    {
        cout<<"PQR called..."<<endl;
    }
};
  int main()
  {
    PQR p;
  }

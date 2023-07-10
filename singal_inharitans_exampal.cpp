#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public:
    void setN(){
        cout<<"enter n ";
        cin>>n;
    }
};
  class Derived : public base{
    public:
    void getN(){
        cout<<"value of n is :"<<n<<endl;
    }
  };
  int main (){
  Derived d;
  d.setN();
  d.getN();
  }
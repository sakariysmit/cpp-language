#include<iostream>
using namespace std;
class base{
    protected:
    int n,i;
    };

  class Derived : public base{
    public:
    void getN(){
        cout<<"enter number: ";
        cin>>n;
        for (i=0;i<=n;i++){
        cout<<"sqare of is :"<<(i*i)<<endl;
    }
    }
  };
  int main (){
  Derived d;
  d.getN();
  }
#include<iostream>

using namespace std;

class base
{
    protected:   
    int n,i,fact=1;

    public :
    void setN()
    {
        cout<<"Enter N : ";
        cin>>n;
    }
};

class derived : public base{
    
    public:
    void getN()
    {
     for(i=1;i<=n;++i)
    {
        fact*=i;
      cout<<"Factorial of num [ "<<i<<" ] is : "<<fact<<endl;
    }
    }
};

int main ()
{
    derived s;

    s.setN();
    s.getN();
}
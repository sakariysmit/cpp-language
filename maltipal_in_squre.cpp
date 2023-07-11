#include<iostream>

using namespace std;

class base1 
{
  protected:
    int n;

  public:
    void setN()
    {
        cout<<"Enter n : ";
        cin>>n;
    }
};

class base2 
{
  protected :
    int i=0;
};

class derived : public base1 , public base2
{ 
  public :
    void get()
    {
     while(i<n)
     {
        i++;
        cout<<"Square of [ "<<i<<" ] : "<<i*i<<endl;
     }
    }
};

int main()
{
  derived N;

  N.setN();
  N.get();
}
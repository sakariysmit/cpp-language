#include<iostream>
using namespace std;
class Base1{
    protected:
    int m;
    public:
    void setm(){
        cout<<"Enter m:";
        cin>>m;
    }
};
class Base2{
    protected:
    int n;
    public:
    void setn(){
        cout<<"Enter n:";
        cin>>n;
    }
};
class Deravied : public Base2,public Base1 {
    public:
    void product(){
        cout<<"product of m and n is:"<<m*n<<endl;
    } 
    };
    int main()
    {
        Deravied d;
        d.setm();
        d.setn();
        d.product();
    }

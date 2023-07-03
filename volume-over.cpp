#include<iostream>

using namespace std;

class Test
{

    public:
     
    int Volume(int l)
   {
      return l*l*l;  // Cube : 
   }

    int Volume (int l,int w,int h)
   {
      return l*w*h; //  Solid or Cuboid 
   }

    double Volume(double r)
   {
      return ((4/3)*3.14*r*r*r); // Sphere 
   }

    double Volume(int b,double h)
   {
     return (b*b)*h; // Prism 
   }

    double Volume(double b, double h)
   {
     return 0.33*b*h; // Pyramid 
   }

    double Volume(double r,int h)
   {
     return 3.14*r*r*h; // Cylinder 
   }

};


int main()
{
    Test t;
    
    cout<<" Cube : "<<t.Volume(2)<<endl;

    cout<<" Solid or Cuboid  : "<<t.Volume(3,5,9)<<endl;

    cout<<" Sphere  : "<<t.Volume(2.5)<<endl;

    cout<<" Prism  :"<<t.Volume(2,4.5)<<endl;

    cout<<" Pyramid :"<<t.Volume(3.5,4.6)<<endl;

    cout<<" Cylinder  :"<<t.Volume(4.4,6)<<endl;
}
#include<iostream>

using namespace std;

class Test
{

public:
  
   void Area()
   {
     cout<<"\t Area of shape is"<<endl;
   }


   int Area(int side)
   {
     cout<<" Calculate area of Square : "<<side*side<<endl;
   }

    double Area(double red)
   {
     cout<<" Calculate area of Circle : "<<3.14*(red*red)<<endl;
   }

    int Area(int width , int height)
   {
      cout<<" Calculate area of Rectangle  "<<width*height<<endl;
   }

    double Area(double b , double h)
   {
      cout<<" Calculate area of Triengale  "<<0.5*b*h<<endl;
   }

};

int main()
{
    Test t;

    t.Area(15); //  Square 

    t.Area(3.12);  // Circle

    t.Area(20,50); //  Rectangle

    t.Area(4.12,9.1); // Triengale

}
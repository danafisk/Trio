#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void colors(int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  colors(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void colors(int &a, int &b, int &c)
{
  int temp;
  
  if (b > a && c > a && c > b) 
  {
    temp = a;
    a = c;
    c = temp;
  }

  if (b > a && b > c && c > a )

  {
    temp = a;
    a = b;
    b = temp;

    temp = b;
    b = c;
    c = temp;
  }

  if (b > a && b > c && a > c)
  {
     temp = a;
     a = b;
     b = temp;
  }

  if (a > b && c > b && c > a)
  {
   temp = b;
   b = c;
   c = temp;

   temp = a;
   a = b;
   b = temp;
  }

  if ( a > b && a > c && c > b)

  {
  temp = b;
  b = c;
  c = temp;
  }
      }

#include <iostream>
using namespace std;

const int DivideByZero = 111;

float div(float arg1, float arg2)
{
  if(arg2 == 0.0)
    throw DivideByZero;
  return arg1 / arg2;
} 

int main(void)
{
  float r, a, b;
  while(cin >> a)
  {
    cin >> b;
    try
    {
      r=div(a,b);
      cout << r << endl;
    }
    catch(const int e)
    {      
      cout << "Nope" << endl;
    }    
  }
  return 0;
}

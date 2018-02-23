#include <iostream>
using namespace std;
int main()
//Uppgift v.8  2
//Gör ett program som finner alla heltalslösningar till ekvationen
//3x - 7y = 1, med -50 less or equal than x greater or equal than
//50 och -20 less or equal than y greater or equal than 20 
 { 
  for (int  x =-50; x <= 50; x++)
  {
    for (int  y = -20; y <= 20; y++)
    {
      if( x*3 - y*7 ==1) 
      {
	cout << "x =" << x << '\t'<< "y ="<< y << endl;
    }
   
  }
 }
  
  
  
  
  return 0;
}

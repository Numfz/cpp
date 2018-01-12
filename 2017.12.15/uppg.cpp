#include <iostream>
using namespace std;
int main()
{
  //Övning 8.5 
  int hastighet[5];
  cout << "Ange 5 tal: ";

  for (int n = 0 ; n < 5 ; n++)
  {
    cout << "Tal "<< n+1 << ": ";
    cin >> hastighet[n];
  }
  int min =hastighet[0];
  for (int n=0 ; n < 5 ; n++)
  {
    if (min > hastighet[n] )
      min = hastighet[n];
  }
  cout << endl;
  cout << "Minsta värdet: " << min << endl;
  
  

  

  return 0;
}


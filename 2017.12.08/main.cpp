#include <iostream>
using namespace std;
int main()
{
  
  //Iteration (loop)
  //Med for-sats
  //8.1, sida 105

  cout << "Med for-sats" << endl; 
  //Startvärde; vilkor; förändring)
  for (int n=0; n<10; n++)
  {
    cout << "(for) n=" << n << endl;
  }
  
    cout << "Med while-sats" << endl;
    int o=0;
    while (o<10)
    {
      cout << "(while) n=" << o << endl;
      o++; // o=o+1;
    }

  /*
 int n=0;
 
  while (n<10)
  {
    cout << "Sant 1(while)" << endl;
    cout << "Sant 2(while)" << endl;
    n++; // n=n+1
    
  }
 
  do {
    
    cout << "Sant 1(do while)" << endl;
    cout << "Sant 2(do while)" << endl;
    
    
  } while (1>2);
  
  */
  
  
  return 0;
}

 
#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
 double tal = 4.0/3;
 cout << "tal: " << tal << endl;
 cout << "tal med tre värdesiffror: " << setprecision(3) << tal << endl;
 cout << "tal med tre decimaler: " << fixed << setprecision(3) << tal;
 
  
  return 0;
}
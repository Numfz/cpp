 
#include <iostream>
using namespace std;
int main()
{
  setlocale( LC_ALL, "" );

  //Övning 8.3
  int minst, storst, steg;
   cout << "Minsta talet: "; cin >> minst;
   cout << "Största talet: "; cin >> storst;
   cout << "Steg talet: "; cin >> steg;
  
   for (int n = storst ; n > minst ; n = n - steg)
   {
     cout << n << ' ';
   }


  
  
 return 0; 
}
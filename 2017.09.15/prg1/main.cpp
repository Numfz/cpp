#include <iostream>
using namespace std;
int main()
{
  /*
   * datatyp variabelnamn;
   */
  int tal1, tal2;	// plats för en int allokeras (bokas)
    // = är en tilldelning, inte likamed. Värdet 4
  //Inmatning från tangentbord
  
  cout << "Mata in heltal 1: ";
  cin >> tal1;
  cout << "Mata in heltal 2: ";
  cin >> tal2;
  int summa = tal1+tal2;
  /*
   * int summa;
   * summa = tal1+tal2;
   */
  cout << "Summan av talen blir " << summa << endl;
  cout << "Summan av talen blir " << (tal1+tal2) << endl;
 /* 
  * tal = tal+1
  */
  return 0; 
}

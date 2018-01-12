#include <iostream>
using namespace std;
int main()
{
  //Övning 4.5 (Prioritetsordnign)m sidan 60 
  int tal = 5 + 6 % 4; //=7	osynliga parenteser
  int tal = 5 + (6 % 4); //7
  int tal = (5 + 6) % 4; //3
 cout << tal << endl;
  
  
  
  
  
  
  /*
  //Exempel 4.2, sidan 55
  int tid = 800; //800sek
  int min = tid / 60;//Antalet hela minuter i 800 sekunder.
  int sek = tid % 60; //Sekunder som bli över
  
  cout << tid << "s = " << min << "min och " << sek << "s\n"; 
  
  
  int tal=2;
  //Tal tilldelas sitt eget värde som i detta fall är (2) + 1
  //Tal kommer att ha värdet 3
  // tal = tal + 1;  //Eller tal+=1;
  int tal2 = ++tal;
  cout << tal2 << endl;
  // cout << tal++ << endl; //2
  // cout << tal << endl; //3
  
  
  /*
  float ft = 9;
  float fn = 10;
  int t = 9;
  int n = 10;
  
  cout << (ft / fn) << endl;
  cout << (t / n) << endl;
  cout << (t % n) << endl;  
  */
  
  return 0;
}
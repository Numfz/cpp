#include <iostream>
using namespace std;
int main()
{
  //Ett val mellan tv� alternativ. selektion i ett aktivitetsdiagram
  //N�got som entydligt �r sant eller falskt
  cout << "Mata in ett heltal:" <<endl;
  int i;
  cin >> i;
  
  if (i >=10)
  {
    cout << "Du matade in ett tal, st�rre eller lika med 10" << endl;
  }
   
   else //...utf�rs detta ist�llet
   {  
    
     cout << "Du matade in ett tal, mindre �n 10" << endl;
   }
  
  
  return 0;
}

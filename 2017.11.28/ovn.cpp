//�vningar
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //�vning 7.2
  /*
  double diesel;
  cout << "Hur mycket br�nsle finns det i tanken?" << endl;
  cin >> diesel;
  if (diesel <10)
  {
   cout << "Du b�r tanka" << endl;
   cout << "Du kan fylla p� med: " << (50 - diesel) << "L"<< endl;
   cout << "Det kommer att kosta: " << ((50- diesel) * 9.50) << "Kr" << endl;
    
  } 
   else
   {
     cout << "Du kan k�ra vidare!" << endl;
   }
  */
  
  //�vning 7.3
  /*
  double alder;
  cout << "Hur gammal �r du?" << endl;
  cin >> alder;
  if (alder >=15 && alder <=65)
  {
  cout << "Du �ker stadsbuss f�r 10kr" << endl;
  }
  else
  {
    cout << "Taxan �r 5kr" << endl;
  }
  */
  
  //�vning 7.4
  /*
  double alder;
  cout << "Hur gammal �r du?" << endl;
  cin >> alder;
  if (alder >14 || alder <66)
  {
  cout << "Du �ker stadsbuss f�r 5kr" << endl;
  }
  else
  {
    cout << "Taxan �r 10kr" << endl;
  }
  */
  
  //�vning 7.5
  /*
  double hopp, vind;
  cout << "Hur l�ngt var hoppet?" << endl;
  cin >> hopp;
  cout << "Vindstyrka?" << endl;
  cin >> vind;
  if (hopp >7.92 && vind <=2)
  {
    cout << "Grattis det �r ett nytt rekord!" << endl;
  }
  */
  
  //�vning 7.6
  
  double skivor;
  cout << "Hur m�nga k�per du?" << endl;
  cin >> skivor;
  if (skivor >9 && skivor < 50)
  {
  cout << "Du f�r 5% rabatt, pris: " << (skivor * 9.90); << endl;
  }
  else if (skivor >49 && skivor < 100)
  {
   cout << "Du f�r 10% rabatt, pris: " << endl;
  }
  else if (skivor >99)
  {
    cout << "Du f�r 15% rabatt, pris: " << endl;
  }
  
  
  
  
  
  
  
  
  
  
  return 0;
}

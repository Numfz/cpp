//Övningar
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //Övning 7.2
  /*
  double diesel;
  cout << "Hur mycket bränsle finns det i tanken?" << endl;
  cin >> diesel;
  if (diesel <10)
  {
   cout << "Du bör tanka" << endl;
   cout << "Du kan fylla på med: " << (50 - diesel) << "L"<< endl;
   cout << "Det kommer att kosta: " << ((50- diesel) * 9.50) << "Kr" << endl;
    
  } 
   else
   {
     cout << "Du kan köra vidare!" << endl;
   }
  */
  
  //Övning 7.3
  /*
  double alder;
  cout << "Hur gammal är du?" << endl;
  cin >> alder;
  if (alder >=15 && alder <=65)
  {
  cout << "Du åker stadsbuss för 10kr" << endl;
  }
  else
  {
    cout << "Taxan är 5kr" << endl;
  }
  */
  
  //Övning 7.4
  /*
  double alder;
  cout << "Hur gammal är du?" << endl;
  cin >> alder;
  if (alder >14 || alder <66)
  {
  cout << "Du åker stadsbuss för 5kr" << endl;
  }
  else
  {
    cout << "Taxan är 10kr" << endl;
  }
  */
  
  //Övning 7.5
  /*
  double hopp, vind;
  cout << "Hur långt var hoppet?" << endl;
  cin >> hopp;
  cout << "Vindstyrka?" << endl;
  cin >> vind;
  if (hopp >7.92 && vind <=2)
  {
    cout << "Grattis det är ett nytt rekord!" << endl;
  }
  */
  
  //Övning 7.6
  
  double skivor;
  cout << "Hur många köper du?" << endl;
  cin >> skivor;
  if (skivor >9 && skivor < 50)
  {
  cout << "Du får 5% rabatt, pris: " << (skivor * 9.90); << endl;
  }
  else if (skivor >49 && skivor < 100)
  {
   cout << "Du får 10% rabatt, pris: " << endl;
  }
  else if (skivor >99)
  {
    cout << "Du får 15% rabatt, pris: " << endl;
  }
  
  
  
  
  
  
  
  
  
  
  return 0;
}

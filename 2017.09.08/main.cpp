
// inkluderar (tar med) "saker som finns i biblioteket iostream"
// Bland annat utskrift p� sk�rmen
#include <iostream>

// I en namnrymd ing�r olika bibliotek. Alla ing�ende bibliotek har olika namn 
using namespace std;

int main()					// H�r b�rjar programmet k�ra
{ 
  
  /*
   * cout = "datorns standardutenhet, definerat i operativsystemet (sk�rmen)
   * << �r utmaningsoperatorn. (matar ut till sk�rmen)
    
  
  */
  cout << "\"Hello World!\"" << endl;			// H�r skrivs en text till sk�rmen
  cout << "��� ���" << endl ;
  
  
  cout << "Kod p� tv� rader ";
  cout << "men utskrift p� en rad" << endl;		//endl end line
  cout << endl;
  cout << " En rad kod, " << endl << "utskrift p� tv�"; 
  cout << endl;
  
  return 0; 					// H�r avslutas programmet
}
						//g++ main.cpp

// inkluderar (tar med) "saker som finns i biblioteket iostream"
// Bland annat utskrift på skärmen
#include <iostream>

// I en namnrymd ingår olika bibliotek. Alla ingående bibliotek har olika namn 
using namespace std;

int main()					// Här börjar programmet köra
{ 
  
  /*
   * cout = "datorns standardutenhet, definerat i operativsystemet (skärmen)
   * << är utmaningsoperatorn. (matar ut till skärmen)
    
  
  */
  cout << "\"Hello World!\"" << endl;			// Här skrivs en text till skärmen
  cout << "ÅÄÖ åäö" << endl ;
  
  
  cout << "Kod på två rader ";
  cout << "men utskrift på en rad" << endl;		//endl end line
  cout << endl;
  cout << " En rad kod, " << endl << "utskrift på två"; 
  cout << endl;
  
  return 0; 					// Här avslutas programmet
}
						//g++ main.cpp
//Kap 3 f�lt
#include <iostream>
#include <string>
//Vi inf�r string-klassen
//boken s.44ff

using namespace std;
int main()
{
  /*
  //teckenf�lt, C-str�ngar 
  //Du Best�mmer storleken n�r str�ngen ska skapas
  //Du m�ste deklarera den innan den kan anv�ndas 
  
  char namn[100]; // 0-99
  namn[66] = 'A'; //heltalet 65
  cout << namn[66] << endl;
   //Funkar bara med charf�lt
  char fnamn[] = "Amelie";
  cout << fnamn << endl;
  
    int hel[100]; // 0-99
  hel[66] = 17; //heltalet 65
  cout << hel[66] << endl;


   // char ett_tecken;
  
  string s;
  s = "Marks ";
  string s1 = "Gymnasieskola";
  // cout << s+ "Gymnasieskola" << endl;
  s= s+s1;
  cout << s << endl;
  s.at(2) = 'P'; //position 2 dvs r i Marks
  cout << s << endl;
  
  int antal = s.size();
  cout << antal << endl;
  
  //Vi s�ker efter positionen
  //d�r "Gym" b�rjar
  int hitta = s.find('a',0);
  cout << hitta << endl;
  //Vi plockar ut 7 tecken ur s
  //med start d�r "Gym" b�rjar
  //och placerar detta i stringen
  //delstring
  string delstring = s.substr(hitta,8);
  cout << delstring << endl;
  */
  //Inmatning
  string namn,nyttnamn;
  int alder;
 // cin >> namn;
  getline(cin, namn);
  cout << "Du matade in 1: "<< namn << endl;
  cin >> alder;
  //Nyradstecknet ligger kvar 
  //f�rst och f�rhindrar ny inmatning
  cin.ignore(1000,'\n');
  getline(cin,nyttnamn);
  cout << "Du matade in 2: " << nyttnamn << endl;
  return 0;
 
}

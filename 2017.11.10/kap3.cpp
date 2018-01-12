//Kap 3 fält
#include <iostream>
#include <string>
//Vi inför string-klassen
//boken s.44ff

using namespace std;
int main()
{
  /*
  //teckenfält, C-strängar 
  //Du Bestämmer storleken när strängen ska skapas
  //Du måste deklarera den innan den kan användas 
  
  char namn[100]; // 0-99
  namn[66] = 'A'; //heltalet 65
  cout << namn[66] << endl;
   //Funkar bara med charfält
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
  
  //Vi söker efter positionen
  //där "Gym" börjar
  int hitta = s.find('a',0);
  cout << hitta << endl;
  //Vi plockar ut 7 tecken ur s
  //med start där "Gym" börjar
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
  //först och förhindrar ny inmatning
  cin.ignore(1000,'\n');
  getline(cin,nyttnamn);
  cout << "Du matade in 2: " << nyttnamn << endl;
  return 0;
 
}

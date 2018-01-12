#include <iostream>
#include <string>
using namespace std;
int main ()
{
  cout << "Text:";
  string text;
  cin >> text;
    cin.ignore(1000, '\n');
    cout << "Antal tecken:" << text.length()<< endl;
  
 return 0; 
}

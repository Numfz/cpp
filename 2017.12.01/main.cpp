 
#include <iostream>

#include <string> 
using namespace std;
int main()
{
  //Övning 7.7
  /*
  double behallningen = 1000;
  double in, ut;
  char vilket;
  cout << "1 = insattning, 2 = uttag eller 3 = behallningen?" << endl;
  cin >> vilket;
  switch (vilket)
  {
    case '1':
      cout << "Hur mycket vill du sätta in?" << endl;
      cin >> in;
      behallningen += in;
break;
    
    case '2':
      cout << "Hur mycket vill du ta ut?" << endl;
      cin >> ut;
      behallningen -= ut;

      if (ut > behallningen)
      { cout << "Du har inte tillräckligt med pengar din fattiglapp!" << endl;
      ut = 0;
      }
break;

    case '3':
break;
	
      
      
  }    
  cout << "Du har " << behallningen << "på ditt konto." << endl;
  */
  
  //Övning 7.8
 /*
  cout << "Skriv in ett namn" << endl;
  string namn1;
  getline(cin, namn1);
  
  cout << "Skriv in ett till namn" << endl;
  string namn2;
  getline(cin, namn2);
  
  cout << "Bokstavsordning:" << endl;
  
  if (namn1 < namn2)
  {
    cout << namn1 << " & " << namn2 << endl;
  }
   else
  { 
    cout << namn2 << " & " << namn1 << endl;
  }
  */
  
  //Övning 7.9
  /*
  int tal1, tal2, min;
  cout << "Mata in två heltal: ";
  cin >> tal1 >> tal2;
  min = tal1 < tal2 ? tal1 : tal2;
  cout << "Det minsta talet är: " << min << endl;
  */
  
  //Övning 7.10
  /*
  char kon;
  cout << "Är du man (m) eller kvinna (k)?" << endl;
  cin >> kon;
  cout << "Du är " << kon << (kon != 'm' ? "kvinna" : "man") << endl;
  */
  
  //Uppgift 7.2
  int avstand;
  cout << "Hur långt har du till jobbet? (km)" << endl;
  cin >> avstand;
  
  if (avstand <=50)
  { 
    cout << "Du får inget skatteavdrag" << endl;
  }
  else
  {
   char civilstand;
   cout << "Sambo eller ensamstående? (s/e)" << endl;
   cin >> civilstand;
   int ar;
   cout << "Hur länge kommer din dubbla bosättning att vara?"<< endl ;
    cin >> ar;
    
    if ( ( (civilstand == 's') && (ar<=3)) || ((civilstand = 'e') && (ar<=1)  ) )
    {
      cout << "Du får skatteavdrag" << endl;
    }
    else 
           cout << "Du får inget skatteavdrag" << endl;
 
      
      
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
  
  return 0;
}
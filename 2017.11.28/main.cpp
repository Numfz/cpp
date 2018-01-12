
#include <iostream>
using namespace std;
int main()
{	//Switch-case, s90.
  
  int tal = 1;
  switch (tal) //Heltal, (char,int)
  {
    case 1: 
      cout << "Tal är 1" << endl;
    break;
    case 2: 
      cout << "Tal är 2" << endl;
    break;
    case 3: 
      cout << "Tal är 3" << endl;
    break;
    default:
      cout << "Tal är något annat" << endl;
    
  } 
  //break hamnar hit
  /*
  if (tal==1)	//Något som går att utvärdera sant
  {
    cout << "Tal är 1" << endl;
  }
  if (tal==2)
  {
    cout << "Tal är 2" << endl;
  }
  if (tal==3)
  {
    cout << "Tal är 3" << endl;
  } 
  
  
  else
  {
    cout << "Tal är något annat" << endl;
  } 
  */
  //Hit
  
  
  return 0;
}

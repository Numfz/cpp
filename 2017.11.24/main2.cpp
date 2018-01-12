#include <iostream>
using namespace std;
//if else
//skilj mennaln; = tilldelning
//och == jämförelse
int main()
{
  //Alternativ 1
  
  if (1==2)
  { 
    cout << "1" << endl;
  }
  else if (2==3)
  {
    cout << "2" << endl;
  }
  
    else 
  {
    cout << "3" << endl;
  }
  
  
  //Alternativ 2
  //Nästlade if-satser
  
  if (1==2)
  {
    cout << "1" << endl;
  }
  else
  {
    if (2==3)
      cout << "2" << endl;
    else
      cout << "3" << endl;
  }
  
  
  
  return 0;
}

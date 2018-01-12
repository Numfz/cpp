 /*
    //EXEMPEL 2.1 s.25
// tilldelningsoperatorn
#include <iostream>
using namespace std;
int main()
{
  
  int a = 8;
  int b = 13-a;
  b = b-a;
  a = a*a;
  cout << "a = " << a << ", b = " << b;
  return 0;
}

 //ÖVNING 2.1 s.25
 #include <iostream>
using namespace std;
int main()
{
  int a = 4, b;
  b = 13-a;
  2*b = 10;
  12 = a;
  return 0;
}

 //EXEMPEL 2.2 s.27
 //cin 
 #include <iostream>
using namespace std;
int main()
{
  int tal1, tal2, tal3;
  cout << "Mata in ett tal: ";
  cin >> tal1;
  cout << "Mata in två tal: ";
  cin >> tal2 >> tal3;
  cout << "Du har matat in talen " << tal1 << ", " << tal2 << " och " << tal3 << endl;
  return 0;
}
*/
 //ÖVNING 2.2 s.27
 #include <iostream>
using namespace std;
int main()
{
  int tal1, tal2, tal3;
  cout << "Mata in tal 1:" ;
  cin >> tal1;
  cout << "Mata in tal 2:" ;
  cin >> tal2;
  cout << "Mata in tal 3:" ;
  cin >> tal3;
  int summa = tal1+tal2+tal3;
  cout << "Summan av talen blir:" << (tal1+tal2+tal3) << endl;
  
  return 0;
}
 
  
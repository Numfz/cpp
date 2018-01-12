//fält
#include <iostream>
using namespace std;
int main()
{
  double tid [] = {9.98,10.15,10.04};
  cout << "Fältet innehåller följande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << "\t" << tid[2] << endl;
 
  //Algoritm för att byta plats på  två värden i ett fält
  double tmp;
   tmp = tid[0];
   tid[0] = tid[1];
   tid[1] = tmp;
   
 
  cout << "Fältet innehåller följande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << "\t" << tid[2] << endl;
  
  
  return 0;
}

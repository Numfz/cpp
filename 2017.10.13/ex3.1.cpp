//f�lt
#include <iostream>
using namespace std;
int main()
{
  double tid [] = {9.98,10.15,10.04};
  cout << "F�ltet inneh�ller f�ljande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << "\t" << tid[2] << endl;
 
  //Algoritm f�r att byta plats p�  tv� v�rden i ett f�lt
  double tmp;
   tmp = tid[0];
   tid[0] = tid[1];
   tid[1] = tmp;
   
 
  cout << "F�ltet inneh�ller f�ljande tider: " << endl;
  cout << tid[0] << "\t" << tid[1] << "\t" << tid[2] << endl;
  
  
  return 0;
}

#include <iostream>
#include "Naturales.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
  Naturales a,b,c;
  Naturales d(1),e(1);
  cout<<"Valor de la suma de a:"<<a<<" + b: "<<b<<" = c:"<<a+b<<endl;
  cout<<"Valor de la suma de a:"<<a<<" - b: "<<b<<" = c:"<<a-b<<endl;
  cout<<"Valor de la suma de a:"<<a<<" * b: "<<b<<" = c:"<<a*b<<endl;
  cout<<"Valor de la suma de a:"<<d<<" / b: "<<e<<" = c:"<<d/e<<endl;
}

#include <iostream>
#include "Enteros.hpp"
#include "Racionales.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
  Enteros a,b,c;
  Enteros d,e,f,g;
  a=1;
  b=2;
  c=1;
  d=2;
  f=3;
  g=2;
  Racionales a1(a,b),b1(c,d),c1,d1;
  c1=f;//numerador
  c1=g;//denominador
  d1=g;
  d1=f;
  cout<<"valor de a1: "<<a1<<endl;
  cout<<"valor de b1: "<<b1<<endl;
  cout<<"valor de c1: "<<c1<<endl;
  cout<<"valor de d1: "<<d1<<endl<<endl;
  
  cout<<"Valor de la suma de a1: "<<a1<<" + b1: "<<b1<<" = c:"<<a1+b1<<endl;
  cout<<"Valor de la resta de a1: "<<a1<<" - b1: "<<b1<<" = c:"<<a1-b1<<endl;
  cout<<"Valor de la multiplicacion de a1: "<<a1<<" * b1: "<<b1<<" = c:"<<a1*b1<<endl;
  cout<<"Valor de la division de a1: "<<a1<<" / b1: "<<b1<<" = c:"<<a1/b1<<endl;
  cout<<"Valor de la potencia de c1: "<<c1.pow(3);
}

#include <iostream>
#include "Enteros.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
  Enteros a(5),b(0),c;
  Enteros d(1),e(1),f(1);
  c=1;
  cout << "Ingresa un numero" << '\n';
  cin>>a;
  e=(2*a-4)/2;
  cout<<"EL valor de e es: "<<e<<" EL valor de e es: "<<f<<endl;
  cout<<"Valor de la suma de a:"<<a<<" + b: "<<b<<" = c:"<<a+b<<endl;
  cout<<"Valor de la resta de a:"<<a<<" - b: "<<b<<" = c:"<<a-b<<endl;
  cout<<"Valor de la multiplicacion de a:"<<a<<" * b: "<<b<<" = c:"<<a*b<<endl;
  try{
    cout<<"Valor de la division de a:"<<d<<" / b: "<<e<<" = c:"<<a/b<<endl;
  }
  catch(const char *s ) {
    cout << "\n" << s <<endl;
  }
  cout<<"Valor de la potencia a la 3:"<< c.pow(3) <<endl;
}

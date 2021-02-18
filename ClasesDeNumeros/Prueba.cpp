#include <iostream>
#include "Naturales.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
  Naturales a(5),b(6),c;
  Naturales d(1),e(1),f(1);

  try{
    std::cout << "Ingresa un numero Natural" << '\n';
    cin>>a.n;
    //a=numeroDeEntrada;
  }
  catch (const char *e){
    cout << e << '\n';
    //a=numeroDeEntrada*-1;
    cout << e << "Cambie tu numero a"<< a <<'\n';
  }

  e=(2*a-4)/2;
  cout<<"EL valor de e es: "<<e<<" EL valor de e es: "<<f<<endl;
  cout<<"Valor de la suma de a:"<<a<<" + b: "<<b<<" = c:"<<a+b<<endl;
  try{
    cout<<"Valor de la resta de a:"<<a<<" - b: "<<b<<" = c:"<<a-b<<endl;
  }
  catch(const char *s ) {
  cout << "\n" << s <<endl;
  }

  cout<<"Valor de la multiplicacion de a:"<<a<<" * b: "<<b<<" = c:"<<a*b<<endl;
  cout<<"Valor de la division de a:"<<d<<" / b: "<<e<<" = c:"<<d/e<<endl;

  cout<<"Valor de la potencia a la 3:"<< b.pow(3) <<endl;
}

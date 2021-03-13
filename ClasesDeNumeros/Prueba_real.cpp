#include <iostream>
#include "Reales.hpp"
#include "Enteros.hpp"
#include "Racionales.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
    try{
    Enteros a,b,c;
    Enteros d,e,f,g;
    a=27;
    b=21;
    c=1;
    d=2;
    f=3;
    g=2;
    Racionales a1(a,b),b1(c,d),c1,d1,f1(64,128),g1(512,1024);
    Reales a2(a1),b2(b1);
    cout<<"Racionales"<<endl;
    cout<<"valor de a1: "<<a1<<endl;
    c1=f;
    d1=g;
    cout<<"valor de a1 despues de la igualdad: "<<a1<<endl;
    cout<<"valor de b1: "<<b1<<endl;
    cout<<"valor de c1: "<<c1<<endl;
    cout<<"valor de d1: "<<d1<<endl;
    cout<<"valor de f1: "<<f1<<endl;
    cout<<"valor de g1: "<<g1<<endl<<endl;
    cout<<"Reales"<<endl;
    cout<<"Real a2: Parte real: "<<a2<<" Parte racional: "<<a2<<endl;
    cout<<"Real b2: Parte real: "<<b2<<" Parte racional: "<<b2<<endl;
    /*if(b2==a2){
      cout<<"Son iguales"<<endl;
    }
    else{
      cout<<"No son iguales"<<endl;
    }
    if(b2!=a2){
      cout<<"No son iguales"<<endl;
    }
    else{
      cout<<" son iguales"<<endl;
    }
    /*cout<<"Valor de la suma de a2: "<<a2<<" + b2: "<<b2<<" = c:"<<a2+b2<<endl;
    cout<<"Valor de la resta de a2: "<<a2<<" - b2: "<<b2<<" = c:"<<a2-b2<<endl;
    cout<<"Valor de la multiplicacion de a2: "<<a2<<" * b2: "<<b2<<" = c:"<<a2*b2<<endl;
    cout<<"Valor de la division de a2: "<<a2<<" / b2: "<<b2<<" = c:"<<a2/b2<<endl;*/
    cout<<"Valor de la potencia de a2: "<<a2<<endl;
    cout<<"Valor de la potencia de a2: "<<a2.pow(2)<<" Segundo valor: "<<a2.pow(2)<<endl;
    cout<<"Valor de la potencia de a2: "<<a2.raiz(2)<<" Segundo valor: "<<a2.raiz(2)<<endl;
  }
  catch(const char *s ){
    cout << "\n" << s <<endl;
  }
}

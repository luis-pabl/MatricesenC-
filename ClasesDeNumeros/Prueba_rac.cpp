#include <iostream>
#include "Enteros.hpp"
#include "Racionales.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
    try{
    Enteros a,b,c;
    Enteros d,e,f,g;
    a=1;
    b=0;
    c=1;
    d=2;
    f=3;
    g=2;
    Racionales a1(a,b),b1(c,d),c1,d1,f1(64,128),g1(512,1024);
    cout<<"valor de a1: "<<a1<<endl;
    c1=f;
    d1=g;
    cout<<"valor de a1 despues de la igualdad: "<<a1<<endl;
    cout<<"valor de b1: "<<b1<<endl;
    cout<<"valor de c1: "<<c1<<endl;
    cout<<"valor de d1: "<<d1<<endl;
    cout<<"valor de f1: "<<f1<<endl;
    cout<<"valor de g1: "<<g1<<endl<<endl;
    if(b1==a1){
      cout<<"Son iguales"<<endl;
    }
    else{
      cout<<"No son iguales"<<endl;
    }
    if(b1!=a1){
      cout<<"No son iguales"<<endl;
    }
    else{
      cout<<" son iguales"<<endl;
    }
    cout<<"Valor de la suma de a1: "<<a1<<" + b1: "<<b1<<" = c:"<<a1+b1<<endl;
    cout<<"Valor de la resta de a1: "<<a1<<" - b1: "<<b1<<" = c:"<<a1-b1<<endl;
    cout<<"Valor de la multiplicacion de a1: "<<a1<<" * b1: "<<b1<<" = c:"<<a1*b1<<endl;
    cout<<"Valor de la division de a1: "<<a1<<" / b1: "<<b1<<" = c:"<<a1/b1<<endl;
    cout<<"Valor de la potencia de c1: "<<c1.pow(3);
  }
  catch(const char *s ){
    cout << "\n" << s <<endl;
  }
}

#include <iostream>
#include "Reales.hpp"
#include "Enteros.hpp"
#include "Racionales.hpp"
#include "Complejos.hpp"
using namespace std;
using namespace NUMEROS;
int main(){
    try{
    Enteros a,b,c;
    Enteros d,e,f,g;
    a=27;
    b=3;
    c=1;
    d=2;
    f=3;
    g=2;
    ////////////////////////////
    Racionales a1(a,b),b1(c,d),c1,d1,f1(64,128),g1(512,1024);
    ///////////////////////
    Reales a2(f1),b2(b1);
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

    cout<<"Valor de la potencia de a2: "<<a2<<endl;
    Complejos a3(2*sqrt(3),-2),b3(6,-2),c3(-1,12),d3(-3,-3),f3(0,1),e3(0,-1),j3(1,0),i3(-1,0);
    cout<<endl<<"Complejos"<<endl;
    cout<<"valor de a3: "<<a3<<endl;

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
    }*/
    a3.set_tipo(0);
    b3.set_tipo(1);
    cout<<"Valor de la suma de a3: "<<a3<<" + a3: "<<a3<<" = c:"<<(a3+a3)<<endl;
    cout<<"Valor de la resta de a3: "<<a3<<" - b3: "<<b3<<" = c:"<<a3-b3<<endl;
    cout<<"Valor de la multiplicacion de a3: "<<a3<<" * b3: "<<b3<<" = c:"<<a3*b3<<endl;
    cout<<"Valor de la division de a3: "<<a3<<" / b3: "<<b3<<" = c:"<<a3/b3<<endl;
    cout<<"Valor de la raiz cuadrada de a3: "<<a3<<" = z_1:"<<a3.raiz(2)<<endl;
    cout<<"Forma polar de a3: "<<a3<<" -> "<<a3.polar()<<endl;
    /*
    cout<<"Valor de la resta de a2: "<<a2<<" - b2: "<<b2<<" = c:"<<a2-b2<<endl;
    cout<<"Valor de la multiplicacion de a2: "<<a2<<" * b2: "<<b2<<" = c:"<<a2*b2<<endl;
    cout<<"Valor de la division de a2: "<<a2<<" / b2: "<<b2<<" = c:"<<a2/b2<<endl;*/
    cout<<"Forma polar de a3: "<<a3<<" -> "<<a3.polar()<<endl;
    cout<<"Forma polar de b3: "<<b3<<" -> "<<b3.polar()<<endl;
    cout<<"Forma polar de c3: "<<c3<<" -> "<<c3.polar()<<endl;
    cout<<"Forma polar de d3: "<<d3<<" -> "<<d3.polar()<<endl;
    cout<<"Forma polar de e3: "<<e3<<" -> "<<e3.polar()<<endl;
    cout<<"Forma polar de f3: "<<f3<<" -> "<<f3.polar()<<endl;
    cout<<"Forma polar de j3: "<<j3<<" -> "<<j3.polar()<<endl;
    cout<<"Forma polar de i3: "<<i3<<" -> "<<i3.polar()<<endl;
  }
  catch(const char *s ){
    cout << "\n" << s <<endl;
  }
}

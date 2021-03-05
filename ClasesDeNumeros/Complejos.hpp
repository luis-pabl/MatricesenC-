#ifndef Complejos_H
#define Complejos_H
#include <iostream>
#include "Reales.hpp"
#include <math.h>
using namespace std;
namespace NUMEROS{
  class Complejos{
  public:
    Reales real; //Representacion racional del Numero
    float imaginario; //Representacion 'decimal' del numero (numeros de coma flotante)
    char letra[1]={'i'};
    Complejos(){
      Enteros a=1;
      real=a;
      imaginario=1;
    }
    Complejos(Reales a,float b){
      real=a;
      imaginario=b;
    }
    Complejos(Reales a){
      real=a;
      imaginario=1;
    }
    Complejos(float a,float b){
      real.real=a;
      imaginario=b;
    }
  };
  Complejos operator+(Complejos a,Complejos b){
    Complejos c;
      c.real=a.real+b.real;
      c.imaginario=a.imaginario+b.imaginario;
      return c;
  }
  Complejos operator-(Complejos a,Complejos b){
    Complejos c;
    c.real=a.real-b.real;
    c.imaginario=a.imaginario-b.imaginario;
    return c;
  }
  Complejos operator*(Complejos a,Complejos b){
    Complejos c;
      c.real=(a.real*b.real)-(a.imaginario*b.imaginario);
      c.imaginario=(a.real.real*b.imaginario)+(a.imaginario*b.real.real);
    return c;
  }
  Complejos operator/(Complejos a,Complejos b){
    Complejos c;
    c.real=((a.real*b.real)+(a.imaginario*b.imaginario))/(b.real*b.real+b.imaginario*b.imaginario);
    cout<<"Valor de real division: "<<((a.real*b.real)+(a.imaginario*b.imaginario))/(b.real*b.real+b.imaginario*b.imaginario)<<endl;
    c.imaginario=((a.imaginario*b.real.real)-(a.real.real*b.imaginario))/(b.real.real*b.real.real+b.imaginario*b.imaginario);
    return c;
  }
  ostream& operator<<(ostream& os,Complejos a){
    cout<<a.real<<" + "<<a.imaginario;
    return  os<<a.letra[0];
  }
};
#endif
//Hacer el metodo privado de simplificar

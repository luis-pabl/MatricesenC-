#ifndef RACIONALES_H
#define RACIONALES_H
#include <iostream>
#include "Enteros.hpp"
using namespace std;
namespace NUMEROS{
  class Racionales{
  public:
    int numerador;
    int denominador;
    Racionales(){
      numerador=1;
      denominador=1;
    }
    Racionales(Enteros a,Enteros b ){
      if(a.n<0&&b.n<0){
        numerador=a.n*-1;
        if(b.n==0){
          throw "El denominador no puede ser Cero";
        }
        denominador=b.n*-1;
      }
      else if(b.n<0){
        numerador=a.n*-1;
        if(b.n==0){
          throw "El denominador no puede ser Cero";
        }
        denominador=b.n*-1;
      }
      else{
        numerador=a.n;
        if(b.n==0){
          throw "El denominador no puede ser Cero";
        }
        denominador=b.n;
      }
    }
    Racionales& operator=(Enteros b){
      static int cont=0;
      if(cont==0){
      this->numerador=b.n;
      cont++;
      return *this;
      }
      else{
        this->denominador=b.n;
        cont=0;
        return *this;
      }
    }
    Racionales pow(Enteros p){
      Racionales aux(this->numerador,this->denominador);
      for (int i = 1; i < p.n; i++) {
        aux.numerador=aux.numerador*numerador;
        aux.denominador=aux.denominador*denominador;
      }
      return aux;
    }
  };
  Racionales operator+(Racionales a,Racionales b){
    Racionales c;
    if(a.denominador==b.denominador){
      c.numerador=a.numerador+b.numerador;
      c.denominador=a.denominador;
      if(c.numerador==c.denominador){
        return c;
      }
      else{
        return c;
      }
    }
    else{
      c.numerador=a.numerador*b.denominador+b.numerador*a.denominador;
      c.denominador=a.denominador*b.denominador;
      return c;
    }
  }
  Racionales operator-(Racionales a,Racionales b){
    Racionales c;
    if(a.denominador==b.denominador){
      c.numerador=a.numerador-b.numerador;
      c.denominador=a.denominador;
      return c;
    }
    else{
      c.numerador=a.numerador*b.denominador-b.numerador*a.denominador;
      c.denominador=a.denominador*b.denominador;
      return c;
    }
  }
  Racionales operator*(Racionales a,Racionales b){
    Racionales c;
    c.numerador=a.numerador*b.numerador;
    c.denominador=a.denominador*b.denominador;
    return c;
  }
  Racionales operator/(Racionales a,Racionales b){
    Racionales c;
    c.numerador=a.numerador*b.denominador;
    c.denominador=a.denominador*b.numerador;
    return c;
  }
  ostream& operator<<(ostream& os,Racionales a){
    if(a.numerador%a.denominador==0){
      return os<<a.numerador/a.denominador;
    }
    else{
      cout<<a.numerador<<"/";
      return os<<a.denominador;
    }
  }
};
#endif

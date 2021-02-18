#ifndef NATURALES_H
#define NATURALES_H
#include <iostream>
using namespace std;
namespace NUMEROS{
  class Naturales{
  public:
    unsigned int n;
    Naturales(){
      n=0;
    }
    Naturales(unsigned int a ){
      n=a;
    }
    Naturales(int a ){
      if(a<0){
        throw "Un natural no puede ser Negativo";
      }
      this->n=(unsigned int)a;
    }

    Naturales& operator=(int a){
      if (a<0) {
        throw "Un natural no puede ser Negativo";
      }
      this->n=(unsigned int)a;
      return *this;
    }
    Naturales& operator=(Naturales a){

      this->n=a.n;
      return *this;
    }
    Naturales pow(Naturales p){
      Naturales aux(this->n);
      for (unsigned int i = 1; i < p.n; i++) {
        aux=aux.n*n;
      }
      return aux;
    }
  };



  Naturales operator+(Naturales a,Naturales b){

    Naturales c;
    c.n=a.n+b.n;
    return c;
  }
  Naturales operator-(Naturales a,Naturales b){
    Naturales c;
    c.n=a.n-b.n;
    if (a.n<b.n) {
      throw "Error en la resta";
    }
    //El valor no puede ser negativo
    return c;
  }
  Naturales operator*(Naturales a,Naturales b){
    Naturales c;
    c.n=a.n*b.n;
    //El valor no puede ser negativo
    return c;
  }
  Naturales operator/(Naturales a,Naturales b){
    Naturales c;
    c.n=a.n/b.n;
    //El valor no puede ser negativo
    return c;
  }
  ostream& operator<<(ostream& os,Naturales a){
    return os<<a.n;
  }
  istream& operator>>(istream& is,Naturales a){
    return is>>a.n;
  }

};
#endif
//operardor de entrada >>
//division negativos no ni cero

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
  };
  Naturales operator+(Naturales a,Naturales b){
    Naturales c;
    c.n=a.n+b.n;
    return c;
  }
  Naturales operator-(Naturales a,Naturales b){
    Naturales c;
    c.n=a.n-b.n;
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
};
#endif

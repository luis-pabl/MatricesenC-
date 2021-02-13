#ifndef ENTEROS_H
#define ENTEROS_H
#include <iostream>
using namespace std;
namespace NUMEROS{
  class Enteros{
  public:
    unsigned int n;
    Enteros(){
      n=0;
    }
    Enteros(unsigned int a ){
      n=a;
    }
  };
  Enteros operator+(Enteros a,Enteros b){
    Enteros c;
    c.n=a.n+b.n;
    return c;
  }
  Enteros operator-(Enteros a,Enteros b){
    Enteros c;
    c.n=a.n-b.n;
    return c;
  }
  Enteros operator*(Enteros a,Enteros b){
    Enteros c;
    c.n=a.n*b.n;
    return c;
  }
  Enteros operator/(Enteros a,Enteros b){
    Enteros c;
    c.n=a.n/b.n;
    return c;
  }
  ostream& operator<<(ostream& os,Enteros a){
    return os<<a.n;
  }
};
#endif

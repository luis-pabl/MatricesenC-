#ifndef ENTEROS_H
#define ENTEROS_H
#include <iostream>
using namespace std;
namespace NUMEROS{
  class Enteros{
  public:
    int n;
    Enteros(){
      n=0;
    }
    Enteros(int a ){
      n=a;
    }
    Enteros pow(Enteros p){
      Enteros aux(this->n);
      for (int i = 1; i < p.n; i++) {
        aux=aux.n*n;
      }
      return aux;
    }
    Enteros& operator=(Enteros a){
      this->n=a.n;
      return *this;
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
    if(b.n==0){
      throw "No puedes hacer esta division";
    }
    c.n=a.n/b.n;
    return c;
  }
  ostream& operator<<(ostream& os,Enteros a){
    return os<<a.n;
  }
  istream& operator>>(istream& is,Enteros a){
    return is>>a.n;
  }
};
#endif

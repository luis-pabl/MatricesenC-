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
    Enteros raiz(Enteros p){
      Enteros aux(this->n);
      float aux_raiz[1]={float(aux.n)};
      int k,l=1;
      for(int j=0;j<1;j++){
        for(int i=1;i<aux_raiz[j];i++){
          for(int cont=0;cont<p.n;cont++){
            k=i;
            l*=i;
          }
          if(l==aux_raiz[j]){
            aux_raiz[j]=k;
            l=1;
          }
          else{
            l=1;
          }
        }
      }
      aux.n=aux_raiz[0];
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

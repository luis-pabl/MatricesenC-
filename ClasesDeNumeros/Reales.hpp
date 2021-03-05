#ifndef REALES_H
#define REALES_H
#include <iostream>
#include "Enteros.hpp"
#include "Racionales.hpp"
#include <math.h>
using namespace std;
namespace NUMEROS{
  class Reales{
  public:
    Racionales racional; //Representacion racional del Numero
    float real; //Representacion 'decimal' del numero (numeros de coma flotante)
    Reales(){
      racional=1;
      real=1;
    }
    Reales(float a){
      real=a;
    }
    Reales(Racionales a){
      racional=a;
      real=float(a.numerador)/float (a.denominador);
    }
    Reales(int n,int d){
      racional=Racionales(n,d);
      real=float(n)/float(d);
    }
    Reales(int n,int d,float a){
      racional=Racionales(n,d);
      real=a;
    }
    Reales& operator=(Enteros b){
      //Formato racional
      this->racional.numerador=b.n;
      this->racional.denominador=1;
      //formato Real
      this->real=float(b.n);
      return *this;
    }
    Reales& operator=(Racionales a){
      this->racional.numerador=a.numerador;
      this->racional.denominador=a.denominador;
      this->real=float(a.numerador)/float(a.denominador);
      return *this;
    }
    //reales a()
    Reales pow(Enteros p){
      Reales aux(this->racional.numerador,this->racional.denominador,this->real);
      for (int i = 1; i < p.n; i++) {
        aux.racional.numerador=aux.racional.numerador*racional.numerador;
        aux.racional.denominador=aux.racional.denominador*racional.denominador;
        aux.real=aux.real*real;
      }
      return aux;
    }
    Reales raiz(Enteros p){
      Reales aux(this->racional.numerador,this->racional.denominador,this->real);
      float aux_raiz[2]={float(aux.racional.numerador),float(aux.racional.denominador)};
      int k,l=1;
      for(int j=0;j<2;j++){
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
      aux.racional.numerador=aux_raiz[0];
      aux.racional.denominador=aux_raiz[1];
      aux.real=float(aux.racional.numerador)/float(aux.racional.denominador);
      return aux;
    }

    bool operator==(const Reales &a)const{
      return this->real==a.real;
    }
    bool operator<(const Reales &a)const{
        return this->real<a.real;
    }
    bool operator>(const Reales &a)const{
        return this->real>a.real;
    }
    bool operator!=(const Reales &a)const{
        return this->real!=a.real;
    }
  };

  Reales operator+(Reales a,Reales b){
    Reales c;
    if(a.racional.denominador==b.racional.denominador){
      c.racional.numerador=a.racional.numerador+b.racional.numerador;
      c.racional.denominador=a.racional.denominador;
      c.real=a.real+b.real;
      return c;
    }
    else{
      c.racional.numerador=a.racional.numerador*b.racional.denominador+b.racional.numerador*a.racional.denominador;
      c.racional.denominador=a.racional.denominador*b.racional.denominador;
      c.real=a.real+b.real;
      return c;
    }
  }
  Reales operator-(Reales a,Reales b){
    Reales c;
    if(a.racional.denominador==b.racional.denominador){
      c.racional.numerador=a.racional.numerador-b.racional.numerador;
      c.racional.denominador=a.racional.denominador;
        c.real=a.real-b.real;
      return c;
    }
    else{
      c.racional.numerador=a.racional.numerador*b.racional.denominador-b.racional.numerador*a.racional.denominador;
      c.racional.denominador=a.racional.denominador*b.racional.denominador;
      c.real=a.real-b.real;
      return c;
    }
  }
  Reales operator*(Reales a,Reales b){
    Reales c;
    c.racional.numerador=a.racional.numerador*b.racional.numerador;
    c.racional.denominador=a.racional.denominador*b.racional.denominador;
    c.real=a.real*b.real;
    return c;
  }
  Reales operator/(Reales a,Reales b){
    Reales c;
    c.racional.numerador=a.racional.numerador*b.racional.denominador;
    c.racional.denominador=a.racional.denominador*b.racional.numerador;
    c.real=a.real/b.real;
    return c;
  }
  ostream& operator<<(ostream& os,Reales a){
    static int cont=0;
    if(cont==0){
        cont++;
        return os<<a.real;
    }
    else{
      cont=0;
      if(a.racional.numerador%a.racional.denominador==0){
        return os<<a.racional.numerador/a.racional.denominador;
      }
      else{
        for(int i=2;i<a.racional.numerador;){
          if(a.racional.numerador%i==0&&a.racional.denominador%i==0){
            a.racional.numerador=a.racional.numerador/i;
            a.racional.denominador=a.racional.denominador/i;
          }
          else{
            i++;
          }
        }
        a.real=float(a.racional.numerador)/float(a.racional.denominador);
        cout<<a.racional.numerador<<"/";
        return os<<a.racional.denominador;
      }
    }
  }
};
#endif
//Hacer el metodo privado de simplificar

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
    int tipo;
    Reales(){
      racional=1;
      real=1;
      tipo=0;
    }
    Reales(float a){
      real=a;
      racional=frac(a);
      tipo=0;
    }
    Reales(Racionales a){
      racional=a;
      real=float(a.numerador)/float (a.denominador);
      tipo=0;
    }
    Reales(int n,int d){
      racional=Racionales(n,d);
      real=float(n)/float(d);
      tipo=0;
    }
    Reales(int n,int d,float a){
      racional=Racionales(n,d);
      real=a;
      tipo=0;
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
    void set_tipo(int a){
      tipo=a;
    }
    Racionales frac(float a){
      int b=int(a);
      float c=a-b;
      c=c*100000;
      Enteros n,d;
      n=c+b*100000;
      d=100000;
      Racionales e(n,d);
      return simp(e);
    }
    Racionales simp(Racionales a){
      int pri=2;
      for(int i=0;i<a.numerador;i++){
        if(a.numerador%pri==0&&a.denominador%pri==0){
          a.numerador=a.numerador/pri;
          a.denominador=a.denominador/pri;
          i=0;
        }
        else{
          pri++;
        }
      }
      return a;
    }
    bool operator==(const Reales &a)const{
      //cout<<"Me estoy ejecutando"<<endl;
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
      c.racional=c.simp(c.racional);
      return c;
    }
    else{
      c.racional.numerador=a.racional.numerador*b.racional.denominador+b.racional.numerador*a.racional.denominador;
      c.racional.denominador=a.racional.denominador*b.racional.denominador;
      c.real=a.real+b.real;
      c.racional=c.simp(c.racional);
      return c;
    }
  }
  Reales operator-(Reales a,Reales b){
    Reales c;
    if(a.racional.denominador==b.racional.denominador){
      c.racional.numerador=a.racional.numerador-b.racional.numerador;
      c.racional.denominador=a.racional.denominador;
      c.real=a.real-b.real;
      c.racional=c.simp(c.racional);
      return c;
    }
    else{
      c.racional.numerador=a.racional.numerador*b.racional.denominador-b.racional.numerador*a.racional.denominador;
      c.racional.denominador=a.racional.denominador*b.racional.denominador;
      c.real=a.real-b.real;
      c.racional=c.simp(c.racional);
      return c;
    }
  }
  Reales operator*(Reales a,Reales b){
    Reales c;
    c.racional.numerador=a.racional.numerador*b.racional.numerador;
    c.racional.denominador=a.racional.denominador*b.racional.denominador;
    c.real=a.real*b.real;
    c.racional=c.simp(c.racional);
    return c;
  }
  Reales operator/(Reales a,Reales b){
    Reales c;
    c.racional.numerador=a.racional.numerador*b.racional.denominador;
    c.racional.denominador=a.racional.denominador*b.racional.numerador;
    c.real=a.real/b.real;
    c.racional=c.simp(c.racional);
    return c;
  }
  ostream& operator<<(ostream& os,Reales a){
   int cont=a.tipo;
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
        int pri=2;
        for(int i=0;i<a.racional.numerador;i++){
          if(a.racional.numerador%pri==0&&a.racional.denominador%pri==0){
            a.racional.numerador=a.racional.numerador/pri;
            a.racional.denominador=a.racional.denominador/pri;
            i=0;
          }
          else{
            pri++;
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

#ifndef COMPLEJOS_H
#define COMPLEJOS_H
#include <iostream>
#include "Reales.hpp"
#include <math.h>
const float pi=3.141592;
using namespace std;
namespace NUMEROS{
  class Complejos{
  public:
    Reales real; //Representacion racional del Numero
    Reales imaginario; //Representacion 'decimal' del numero (numeros de coma flotante)
    char letra[1]={'i'};
    int tipo;
    Complejos(){
      Enteros a=1;
      real=a;
      imaginario=a;
      tipo=0;
    }
    Complejos(Reales a,Reales b){
      real=a;
      imaginario=b;
      tipo=0;
    }
    Complejos(Reales a){
      Enteros b=0;
      real=a;
      imaginario=b;
      tipo=0;
    }
    Complejos(float a,float b){
      real=Reales(a);
      imaginario=Reales(b);
      tipo=0;
    }
    Complejos(Reales a,float b){
      real=a;
      imaginario=Reales(b);
      tipo=0;
    }
    void set_tipo(int a){
      tipo=a;
      real.set_tipo(a);
      imaginario.set_tipo(a);
    }
    float modulo(){
      float mod=sqrt((real*real+imaginario*imaginario).real);
      return mod;
    }
    float argumento(){
      float arg=0;
      if(real==0&&imaginario>0){
        arg=pi/2;
      }
      else if(real==0&&imaginario<0){
        arg=(3*pi)/2;
      }
      else if(real>0&&imaginario==0){
        arg=0;
      }
      else if(real<0&&imaginario==0){
        arg=pi;
      }
      else if(real<0&&imaginario<0){
        arg=atan((imaginario/real).real)+pi;
      }
      else if(real>0&&imaginario<0){
        arg=atan((imaginario/real).real)+2*pi;
      }
      else if(real>0&&imaginario>0){
        arg=atan((imaginario/real).real);
      }
      else{
        arg=atan((imaginario/real).real)+pi;
      }
      return arg;
    }
    char* polar(){
      float mod;
      float arg;
      mod=modulo();
      arg=argumento();
      arg=(arg*180)/pi;
      static char pol[30];
      sprintf(pol,"%.2fcis(%.0f)",mod,arg);
      return pol;
    }
    Complejos raiz(Enteros p){
      Complejos aux(this->real,this->imaginario);
      float mod=modulo();
      //cout<<"Valor de modulo: "<<modulo<<endl;
      float arg=0;
      arg=argumento();
      /*cout<<"Valor de argumento: "<<(arg*180)/pi<<endl;
      cout<<"valor de cos:"<<cos(arg/2)<<endl;
      cout<<"valor de sin:"<<sin(arg/2)<<endl;*/
      aux.real.real=sqrt(mod)*cos(arg/2);
      aux.imaginario.real=sqrt(mod)*sin(arg/2);
      return aux;
    }
  };
  Complejos operator+(Complejos a,Complejos b){
    Complejos c;
    c.real=a.real+b.real;
    c.imaginario=a.imaginario+b.imaginario;
    c.set_tipo(a.tipo);
    return c;
  }
  Complejos operator-(Complejos a,Complejos b){
    Complejos c;
    c.real=a.real-b.real;
    c.imaginario=a.imaginario-b.imaginario;
    c.set_tipo(a.tipo);
    return c;
  }
  Complejos operator*(Complejos a,Complejos b){
    Complejos c;
    c.real=(a.real*b.real)-(a.imaginario*b.imaginario);
    c.imaginario=(a.real*b.imaginario)+(a.imaginario*b.real);
    c.set_tipo(a.tipo);
    return c;
  }
  Complejos operator/(Complejos a,Complejos b){
    Complejos c;
    c.real=((a.real*b.real)+(a.imaginario*b.imaginario))/((b.real*b.real)+(b.imaginario*b.imaginario));
    c.imaginario=((a.imaginario*b.real)-(a.real*b.imaginario))/(b.real*b.real+b.imaginario*b.imaginario);
    c.set_tipo(a.tipo);
    return c;
  }
  ostream& operator<<(ostream& os,Complejos a){
    a.real.set_tipo(a.tipo);
    a.imaginario.set_tipo(a.tipo);
    if(a.imaginario<0){
      cout<<a.real<<" - "<<a.imaginario*-1;
      return  os<<a.letra[0];
    }
    cout<<a.real<<" + "<<a.imaginario;
    return  os<<a.letra[0];
  }
  ////Raices primera raiz y metodo polar
};
#endif

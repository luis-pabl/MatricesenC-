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
    Complejos raiz(Enteros p){
      Complejos aux(this->real,this->imaginario);
      float pi=3.141592;
      float modulo=sqrt(aux.real.real*aux.real.real+aux.imaginario.real*aux.imaginario.real);
      cout<<"Valor de modulo: "<<modulo<<endl;
      float arg=0;
      if(aux.real.real>0&&aux.imaginario.real>0){
       arg=atan(aux.imaginario.real/aux.real.real);
      }
      else if(aux.real.real>0&&aux.imaginario.real<0){
        cout<<"Entre en segundo if" <<endl;
         arg=atan(aux.imaginario.real/aux.real.real)+2*pi;
        cout<<"Valor de argumento: "<<arg<<endl;
      }
      else if(((aux.real.real==0||aux.real.real<0)&&aux.imaginario.real<0)||(aux.real.real<0&&aux.imaginario.real>0)){
        if(aux.imaginario.real<0&&aux.real.real==0){
          cout<<"Entre en 3 if" <<endl;
          arg=(270*pi)/180;
          cout<<"Valor de argumento1: "<<arg<<endl;
        }
        else{
          cout<<"Entre en 4 if" <<endl;
          arg=atan(aux.imaginario.real/aux.real.real)+pi;
          cout<<"Valor de argumento: "<<arg<<endl;
        }
      }
      cout<<"Valor de argumento: "<<(arg*180)/pi<<endl;
      cout<<"valor de cos:"<<cos(arg/2)<<endl;
      cout<<"valor de sin:"<<sin(arg/2)<<endl;
      aux.real.real=sqrt(modulo)*cos(arg/2);
      aux.imaginario.real=sqrt(modulo)*sin(arg/2);
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
    cout<<a.real<<" + "<<a.imaginario;
    return  os<<a.letra[0];
  }
  ////Raices primera raiz y metodo polar
};
#endif

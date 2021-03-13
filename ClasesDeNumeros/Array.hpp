#ifndef Array_H
#define Array_H
#include <iostream>
#include <math.h>
using namespace std;
namespace NUMEROS{
  template <class T>
  class Array{
  private:
    T *indice;
    int size;
  public:
    /*
    *Constructor por defecto
    */
    Array(){
      indice=NULL;
      size=0;
    }
    /*
    *Constructor con entero
    */

    Array(int size){
      if(size>0){
        indice=new T[size];
        this->size=size;
      }
      else{
        indice=NULL;
        size=0;
      }
    }

    int get_size(){
      return size;
    }

    T& operator[](int i){
      if(!(i>=0&&i<size)){
        throw "Indice fuera de Rango";
      }
      return indice[i];
    }

    friend Array operator+(Array a,Array b){
      if(a.get_size()!=b.get_size()){
        throw "Size mismatch";
      }
      Array c(a.get_size());
      for (int i = 0; i < a.get_size(); i++) {
        c[i]=a[i]+b[i];
      }
      return c;
    }
    friend ostream& operator<<(ostream& os, Array a){
      for (int i = 0; i < a.size; i++) {
        os<<a[i] <<" ";
      }
      return os;
    }
  };


};
#endif
//Hacer el metodo privado de simplificar

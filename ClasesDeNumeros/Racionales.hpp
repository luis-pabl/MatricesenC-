#ifndef RACIONALES_H
#define RACIONALES_H
#include <iostream>
using namespace std;
namespace NUMEROS{
  class Racionales{
  public:
    unsigned int n;
    Racionales(){
      n=0;
    }
    Racionales(unsigned int a ){
      n=a;
    }
  };
  Racionales operator+(Racionales a,Racionales b){
    Racionales c;
    c.n=a.n+b.n;
    return c;
  }
  Racionales operator-(Racionales a,Racionales b){
    Racionales c;
    c.n=a.n-b.n;
    return c;
  }
  Racionales operator*(Racionales a,Racionales b){
    Racionales c;
    c.n=a.n*b.n;
    return c;
  }
  Racionales operator/(Racionales a,Racionales b){
    Racionales c;
    c.n=a.n/b.n;
    return c;
  }
  ostream& operator<<(ostream& os,Racionales a){
    return os<<a.n;
  }
};
#endif

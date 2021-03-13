#include <iostream>
#include "Array.hpp"
#include <string.h>
using namespace std;
using namespace NUMEROS;
int main(){
  char cad1[20]="Hola";
  char cad2[20]="Mundo";
  std::cout << cad1 <<" "<<cad2 <<'\n';
  strcat(cad2,cad1);
  std::cout << cad1 <<" "<<cad2 <<'\n';

  string s1("Hola");
  string s2("Mundo");
  string sSuma=s1+" "+s2;
  std::cout << "Con strings" <<s1<<" "<<s2 << '\n';
  std::cout << "La suma es " <<sSuma<< '\n';
  cout<<"Prueba de la Libreria Array"<<endl;
  string s[3];
  Array <string> a(3), b(3), c(3);
   a[0]="Hola";
   a[1]="pato";
   a[2]="Perro";

   b[0]="ave";
   b[1]="Mango";
   b[2]="Sarten";


  
  cout << "Arreglo a: " <<a <<'\n';
  cout << "Arreglo b: " <<b <<'\n';
  cout << "Arreglo c: " <<c <<'\n';

}

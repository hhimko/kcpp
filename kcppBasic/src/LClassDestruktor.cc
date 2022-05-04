/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.04.23
 * \brief Klasy: ~Destruktor w C++
 * v0.01
 */

#include <iostream>
using namespace std;

class A 
{
   
 public:
   A() {};
   A(int zmienna);
   A(double zmienna) { fLicznikDouble = zmienna; };
   ~A();

   int fLicznikInt;
   double fLicznikDouble;
};

A::A(int zmienna){
   fLicznikInt = zmienna;
}
        
A::~A(){
   cout <<"Obiekt zostal zniszczony"<< endl;
}

int  main(){
   A *obiektC = new A(444);
   A *obiektD = new A(444.1);
   A *obiektE = new A();
        
   cout << obiektC->fLicznikInt    << endl; 
   cout << obiektD->fLicznikDouble << endl; 
   cout << obiektE->fLicznikInt    << endl; 
 
   delete obiektC;  //sprawdzic co sie stanie gdy zakomentujemy ta linie
}
 

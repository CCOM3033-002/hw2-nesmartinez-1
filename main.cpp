/*
Asignación 2: Suma de dos fracciones
Nombre: Nestor A. Martinez Rivera
GitHub username: nesmartinez-1
Num. Est: 802-22-3069
*/

/*Saludos profe, I got a little confused con la fecha de entrega de esta asignacion. Habia pensado que era para hoy antes de las 10 pq la confundi con el Lab 2.
It would be great if no pts were taken off because of the tardiness but I'll understand
Thanks! :)
*/

#include <iostream>
using namespace std;

int main() {
  int num1, den1, num2, den2, numerador, denominador;


  cout << "Este programa suma dos fracciones. Los numeros deben ser enteros.\n";


  cout << "Entre el numerador de la 1ra fracción: ";
  cin >> num1;

  cout << "Entre el denominador de la 1ra fracción: ";
  cin >> den1;

  cout << "Entre el numerador de la 2da fracción: ";
  cin >> num2;

  cout << "Entre el numerador de la 2da fracción: ";
  cin >> den2;


  numerador = (num1 * den2) + (den1 * num2);
  denominador = den1 * den2;


  cout << "La suma es " << numerador << "/" << denominador << "." << endl;

  return 0;
}
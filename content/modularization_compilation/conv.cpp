#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "conv.h"
int main() {
int opcao;
cout << "Conversor de temperatura" << endl;
cout << "(1) Celsius -> Fahrenheit" << endl;
cout << "(2) Fahrenheit -> Celsius" << endl;
cout << "Digite sua opcao: ";
cin >> opcao;
switch(opcao) {
float temp;
cout << "Digite a temperatura: ";
cin >> temp;
float conv;
case 1:
conv = celsius2fahrenheit(temp);
cout << temp << "oC = " << conv << "oF" << endl;
break;
case 2:
conv = fahrenheit2celsius(temp);
cout << temp << "oF = " << conv << "oC" << endl;
break;
default:
cout << "Opcao invalida" << endl;
}
return 0;
}
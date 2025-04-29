#include <iostream>
#include "retangulo.h"

int main() {
Retangulo r(10, 5);
std::cout << "Largura = " << r.getLargura();
std::cout << ", Altura = " << r.getAltura();
Retangulo q;
std::cout << "Largura = " << q.getLargura();
std::cout << ", Altura = " << q.getAltura();
return 0;
}
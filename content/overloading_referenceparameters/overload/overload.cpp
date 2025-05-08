#include <iostream>
#include <string>


int somar ( int x, int y, int z) { return x + y + z; }
int somar ( int x, int y) { return x + y; }
double somar ( double x, double y) { return x + y; }
std::string somar (std::string x, std::string y) { 
    return x+y;
}
float somar ( int x, float y) { return (float) x + y; }
float somar ( float x, int y) { return x + (float) y; }

// Não podemos diferenciar funções apenas pelo tipo de retorno
// Não podemos diferenciar funções apenas pelos nomes dos parâmetros

// #include <iostream>
// int somar ( int x, int y) { return x + y; } // OK
// float somar ( int x, int y) { return x + y; } // Erro
// double somar ( int a, int b) { return a + b; } // Erro

int main () {
std::cout << somar( 2, 4.1f) << std::endl;
std::cout << somar( 2.1f, 4) << std::endl;
std::cout << somar("josé", "caio") << std::endl;
return 0;
}
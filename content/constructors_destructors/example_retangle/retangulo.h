#ifndef _RETANGULO_H
#define _RETANGULO_H


class Retangulo {
private:
int largura;
int altura;
public:
Retangulo();
Retangulo(int l, int a);
~Retangulo();
};


Retangulo::~Retangulo() {
// Destrutor padrao
}

Retangulo::Retangulo() {
largura = 0; // setLargura(0)
altura = 0; // setAltura(0)
}
Retangulo::Retangulo(int l, int a) :
largura(l), altura(a) {}

#endif


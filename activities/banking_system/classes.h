#ifndef _CLASSES_H // Evita a redefinicao dos membros do arquivo
#define _CLASSES_H // Inicio da definicao de _CLASSES_H
#include <string>
#include <iostream>

// classe Cliente que represente um cliente do banco.
class Cliente {
    private:
    std::string cpf;
    std::string nome;
public:
    // Construtor da classe inicializa os atributos nome e cpf.
    Cliente(std::string numcpf, std::string nomecliente);
    // Métodos públicos:
    // Métodos getter para acessar o nome e o cpf.
    std::string getCpf();
    std::string getNome();
};
    Cliente::Cliente(std::string numcpf, std::string nomecliente) :
    cpf(numcpf), // setCpf
    nome(nomecliente){}// setNome

//Metódos usando getters para acessar o nome e o cpf.
std::string Cliente::getCpf(){
    return cpf;
};
std::string Cliente::getNome(){
    return nome;
};


class ContaBancaria {
    // Implemente verificações necessárias, como saldo insuficiente para saques e transferências.


};

#endif // Fim da definicao de _CLASSES_H


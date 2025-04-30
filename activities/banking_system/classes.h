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

    //Contrutor
    Cliente(std::string numcpf, std::string nomecliente);

    //Getters
    std::string getCpf();
    std::string getNome();
};
// Construtor da classe inicializa os atributos nome e cpf.
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
    
private:
int numero;
double saldo;
Cliente titular;

public:
// Construtor para Inicializar o numero, o titular e, opcionalmente, o saldo (padrão zero).
ContaBancaria(int nconta, Cliente titularconta, double sconta = 0);
//Metódos da classe
    double  depositarValor(double valor);
    double sacarValor(double valor);
    void transferirValor(double valor, ContaBancaria &destino1);
    void transferirValor(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo() ;
    void exibirInformacoes() ;
    void exibidirNumeroConta();
};

 ContaBancaria::ContaBancaria(int nconta, Cliente titularconta, double sconta):
    numero(nconta), //setConta
    saldo(sconta), // setSaldo
    titular(titularconta){}// setCliente

//Metódo para depositar um valor maior do que zero
double ContaBancaria::depositarValor(double valor){
        if (valor <= 0){
            return -1;
        }
        saldo += valor;
        return saldo;
    }

//Metódo para sacar um valor que não seja maior que o saldo da conta
double ContaBancaria::sacarValor(double valor){
        if(ContaBancaria::saldo < valor)
        {
            std::cout << "Não será póssivel realizar a operação \n";
            return -1;
        }
        std::cout << "Valor sacado. \n"; 
        saldo -= valor;
        return valor;
    }

//Metódo para exibir apenas o saldo de uma conta bancária
void  ContaBancaria::exibirSaldo(){
    std::cout << "O saldo atual da conta " << numero <<": R$ " << saldo << std::endl;
} 

//Metódo para exibir as informações da conta e do titular.
void ContaBancaria::exibirInformacoes(){
    std::cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << "\n" << 
    "Número da Conta: " << numero << " Saldo: " << saldo << "\n" <<std::endl;
}

//Metódos de transferir (Utilizando o conceito de sobrecarga)

    // Transfere o valor para a conta destino (Verifica se há saldo suficiente) - Versão 1 da Função
    void ContaBancaria::transferirValor(double valor, ContaBancaria &destino1) {
    if (saldo < valor) {
        std::cout << "Saldo insuficiente para transferência.\n";
        return;
    }
    saldo -= valor;
    destino1.depositarValor(valor);
    std::cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << &destino1 << "\n";
}
    // Trasfere o valor dividido igualmente entre duas contas destino (Verifica se há saldo suficiente). - Versão 2 da Função

    void ContaBancaria::transferirValor(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
        if (saldo < valor) {
        std::cout << "Saldo insuficiente para transferência.\n";
        return;
    }
    saldo -= valor;
    destino1.depositarValor(valor/2);
    destino2.depositarValor(valor/2);
       std::cout << "Transferido: R$ " << (valor/2) << " para cada conta " <<"("<< &destino1 << "e" << &destino2 << ")" << " da conta " << numero << "\n";
    }

    #endif // Fim da definicao de _CLASSES_H


#include <stdio.h>

// Definição da estrutura
struct MeuCarro
{
    int cor;
    int ano;
};

// Função para mudar a cor do carro
void carro_mudar_cor(struct MeuCarro *carro, int nova_cor)
{
    carro->cor = nova_cor; // Usa "->" para acessar um campo de uma struct via ponteiro
}

int main()
{
    // Criando uma variável do tipo struct MeuCarro
    struct MeuCarro carro1 = {1, 2025};

    printf("Cor antes da mudança: %d\n", carro1.cor);

    // Chamando a função e passando o endereço da struct
    carro_mudar_cor(&carro1, 3);

    printf("Cor depois da mudança: %d\n", carro1.cor);

    return 0;
}

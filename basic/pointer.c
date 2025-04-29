#include <stdio.h>

struct meuCarro
{
    int cor;
    int ano;
};

void carro_mudar_cor(struct meuCarro *carro, int nova_cor)
{
    carro->cor = nova_cor;
}

int main(int argc, char const *argv[])
{
    struct meuCarro carrinho = {1, 200};
    carro_mudar_cor(&carrinho, 1);

    return 0;
}

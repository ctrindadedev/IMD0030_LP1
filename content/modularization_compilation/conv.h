#ifndef _CONV_H // Evita a redefinicao dos membros do arquivo
#define _CONV_H // Inicio da definicao de NOME_DO_ARQUIVO_H

// Conversao de temperatura em escala Celsius para Fahrenheit
float celsius2fahrenheit(float temp) {
return temp * 1.8 + 32;
}
// Conversao de temperatura em escala Fahrenheit para Celsius
float fahrenheit2celsius(float temp) {
return (temp - 32) / 1.8;
}

#endif // Fim da definicao de _CONV_H




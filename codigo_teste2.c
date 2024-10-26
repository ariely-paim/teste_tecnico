/*
2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
*/

#include <stdio.h>

int main() {
    char str[100];
    int caracter = 0;
    int cont = 0;

    printf("Diga uma frase: ");
    fgets(str, sizeof(str), stdin);

    while (str[caracter] != '\0') {
        if (str[caracter] == 'A' || str[caracter] == 'a') {
            cont++;
        }
        caracter++;
    }

    if (cont > 0) {
        printf("A letra 'A' ou 'a' ocorre %d vez(es) na frase dada.\n", cont);
    } else {
        printf("A letra 'A' ou 'a' não ocorre na frase dada.\n");
    }

    return 0;
}

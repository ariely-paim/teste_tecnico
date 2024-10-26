/*
1) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int numero, c;

    printf("Diga um número: ");
    scanf("%d", &numero);

    if (numero == a || numero == b) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
        return 0;
    }

    while (b <= numero) {
        c = a + b;
        if (c == numero) {
            printf("O número %d pertence à sequência de Fibonacci.\n", numero);
            return 0;
        }
        a = b;
        b = c;
    }

    printf("O número %d não pertence à sequência de Fibonacci.\n", numero);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Função recursiva para calcular o fatorial
int fatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorialRecursivo(n - 1);
    }
}

// Função iterativa para calcular o fatorial
int fatorialComLoop(int n) {
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    // Validação de entrada
    printf("Digite um número inteiro não negativo: ");
    while (scanf("%d", &numero) != 1 || numero < 0) {
        printf("Valor inválido. Digite novamente: ");
    }

    printf("O fatorial de %d (recursivo) é: %d\n", numero, fatorialRecursivo(numero));
    printf("O fatorial de %d (iterativo) é: %d\n", numero, fatorialComLoop(numero));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//SOMA COM FUN��O
int SOMA(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

int main(void) {

    //ALTERNATIVA MAIS ENXUTA - SWITCH

    /*
    int escolha;

    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            printf("Voce escolheu o numero 1. \n");
            break;
        case 2:
            printf("Voce escolheu o numero 2. \n");
            break;
        case 3:
            printf("Voce escolheu o numero 3. \n");
            break;
        case 4:
            printf("Voce escolheu o numero 4. \n");
            break;
        case 5:
            printf("Voce escolheu o numero 5. \n");
            break;
        default:
            printf("Numero Invalido!!");
    }
    */

    //ESTRUTURA DE REPETI��O - WHILE

    /*
    int x, y, result, cont;
    cont = 1;

    while(cont <= 3) {
        printf("\n Digite um numero: ");
        scanf("%d", &x);

        printf("\n Digite outro numero: ");
        scanf("%d", &y);

        result = x + y;

        printf("\n O resultado da soma e: %d", result);

        cont++;
    }
    */

    //ESTRUTURA DE REPETI��O - FOR

    /*
    for(int num1, num2, result, x = 1; x <= 3; x++) {
        printf("\n Digite um numero para somarmos: ");
        scanf("%d", &num1);

        printf("\n Agora digite outro numero: ");
        scanf("%d", &num2);

        result = num1 + num2;

        printf("\n O resultado da soma e: %d", result);
    }
    */

    //ESTRUTURA DE REPETI��O - WHILE DO

    /*
    int x, y, result, cont;
    cont = 1;

    do {
        printf("\n Digite um numero: ");
        scanf("%d", &x);

        printf("\n Digite outro numero: ");
        scanf("%d", &y);

        result = x + y;

        printf("O resultado da soma e: %d", result);
        cont++;
    } while(cont <=3);
    */

    //SOMA COM FUN��O

    int x, y;
    printf("\n Digite um numero: ");
    scanf("%d", &x);

    printf("\n Digite outro numero: ");
    scanf("%d", &y);

    int z = SOMA(x, y);
    printf("O resultado da soma e: %d", z);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int somaDigitos (int num){
    if (num <= 1){
        return num;
    }
    return num %10 + somaDigitos(num/10);
}


int main (){
    int num;
    printf("Digite um numero : ");
    scanf("%d", &num);

    printf("%d", somaDigitos(num));

}

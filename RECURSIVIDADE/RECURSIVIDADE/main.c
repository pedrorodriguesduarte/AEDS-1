#include <stdio.h>
#include <stdlib.h>


//fun��o recursiva padr�o
int fatorialRecursivo(int n){
	//if else
	if (n ==0 || n ==1){
		return 1;
	} else{
		//chamada recursiva
		return n = fatorialRecursivo(n-1);
	}
}


//Solu��o Iterativa
int fatorialComLoop(int n){
	int resultado = 1;
	//Utilizando um loop for para ,ultiplicar os n�meros de 1 a n
	for(int i = 1; i<=n; i++){
		resultado *= i;
	}
	return resultado;
}


int main(void) {
	int numero = 5;
	printf("O fatorial de %d �: %d\n", numero, fatorialRecursivo);
	return 0;
}

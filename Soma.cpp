#include<stdio.h>


int soma(int *n1, int *n2){ 
	int calculo = *n1 + *n2;
	return calculo;

}


int main(){
	
	int n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	soma(n1, n2);

	
	printf("Soma dos numeros eh: %i %i",soma);
	
	return 0;
}

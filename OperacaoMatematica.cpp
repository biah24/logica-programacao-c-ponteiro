//ex04

#include<stdio.h>

//fução para omar
int soma(int a, int b){
	return a + b;
}

//função subtrair

int subtrair(int a, int b){
	return a - b;
	
}



int main(){
	int a = 10, b = 5;
	int (*operacao)(int, int);
	operacao = soma;
	printf("Soma: %d\n", operacao(a,b));
	
	return 0; 
}

#include<stdio.h>

//Ponteiros como parâmetros de funções;
// procedimento(void) - não tem retorno e função(return);

void trocar(int *i, int *j){
	int temp;
	temp = *i;
	*i = *j;
	*j =  temp;
}
int main(){
	int a=5, b=10, temp;
	printf("%d %d\n", a,b);
	
	trocar(&a,&b);
	printf("%d %d\n", a,b);
	
	 
}

#include<stdio.h>

struct Funcionario{
	char nome[50];
	float vendas[3];
};

int main(){
    


	typedef struct Funcionario Funcionario;
	Funcionario funcionario[2];

	for (int i = 0; i < 2; i++){
		
		printf("Nome funcionario: ", i + 1);
		getchar();
		fgets(funcionario[i].nome, 50, stdin);

		printf("\n");
		
	float valores = 0;
		
	 for (int j = 0; j < 3; j++) {
            switch (j) {
                case 0:
                    printf("Vendas de novembro: ");
                    break;
                case 1:
                    printf("Vendas de dezembro: ");
                    break;
                case 2:
                    printf("Vendas de janeiro: ");
                    break;
            }
            scanf("%f", &funcionario[i].vendas[j]);
            valores = valores + funcionario[i].vendas[j];  


        printf("\nResumo do Funcionario %d\n");
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Total vendido: %.2f\n", valores);
        printf("Pontuacao arrecadada: %.2f\n\n", valores / 1000);
    }

    return 0;
}
	}
	

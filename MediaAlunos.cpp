#include<stdio.h>

struct Aluno{
	char nome[50];
	int matricula;

};
struct Diciplina{
	char nome[50];
	float nota;
};

float calcularMedia(float a, float b, float c){
	float media;
	media = a + b + c / 3;
	return media;
}
float encontraMaiorNota(float A, float B, float C){
	
	if(A > B && A > C){
		printf("A maior nota eh: %f", A);
	}else if (B > A && B > C){
		printf("A maior nota eh: %f", B);
		
	}else if(C > A && C > B){
		printf("A maior nota eh: %f", A);
	}else{
		printf("Iguais!");
	}
}



int main(){
	struct Aluno aluno;
	struct Diciplina diciplina[3];
	float media;
	float n1, n2, n3;
	calcularMedia (n1, n2, n3);
	
	printf("Nome: ");
	fgets(aluno.nome, 50, stdin);
	printf("Matricula: ");
	scanf("%i", &aluno.matricula);

	for (int i = 0; i < 3; i++){
		//for (int j = 0; j < 3; j++){
		printf("Nome da diciplina: ");
		getchar();
		fgets(diciplina[i].nome, 40, stdin);
		printf("Nota: ");
		scanf("%f", &diciplina[i].nota);
	
		
}	media = diciplina[0].nota + diciplina[1].nota + diciplina[2].nota / 3;
	if(diciplina[0].nota> diciplina[1].nota && diciplina[0].nota > diciplina[2].nota){
		printf("A maior nota foi %.2f", diciplina[0].nota);
	}else if(diciplina[1].nota > diciplina[2].nota && diciplina[1].nota > diciplina[3].nota){
		printf("A maior nota foi %.2f", diciplina[1].nota);
		
	}else if(diciplina[3].nota > diciplina[2].nota && diciplina[3].nota > diciplina[1].nota){
		printf("A maior nota foi %.2f ", diciplina[2].nota);
	}else{
		printf("Iguais");
	}
		printf("\nDADOS DOS ALUNOS\n");
		printf("Nome do aluno: %s", aluno.nome);
		printf("Matricula: %i\n", aluno.matricula );
		printf("Media das nota: ¨%.2f\n", media);
	}

	

	
		



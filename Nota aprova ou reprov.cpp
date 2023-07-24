#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Algoritimo que avalia uma nota e tem como saida se o aluno esta aprovado, recuperação ou reprovado.//

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float media;
	
	printf("Digite a nota do aluno:");
	scanf("%f", &media);
	
	if(media >= 7){
		printf("Aprovado! \n");
	}else{
		if(media >= 4)
		printf("Recuperação! \n");
	else 
		printf("Reprovado!");
	}
	
	return 0;
}

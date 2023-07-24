#include<stdio.h>
#include<stdlib.h>
#include<locale>

//Algoritimo que realiza a divisão de dois numeros e apresenta como saida o quociente e o resto da divesão//

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int n1, n2, q, r;

	printf("Informe um número:\n");
	scanf("%d", &n1);
	printf("Informe outro número:\n");
	scanf("%d", &n2);
	
	q = n1 / n2;
	r = n1 % n2;
	
	printf("O resultado (Quociente) da divisão entre %d / %d = %d \n", n1, n2, q);
	printf("O resto da divisão é %d \n", r);
	
	return 0; 
}

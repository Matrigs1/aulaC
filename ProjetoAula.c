#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	int a=0;
	printf("Digite o primeiro valor na tela:\n");
	scanf("%i",&i);
	printf ("Digite o segundo valor na tela:\n");
	scanf("%i",&a);
	printf("Resultado: %i",i+a);
	//system("pause");
}

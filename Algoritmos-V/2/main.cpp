#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int number, soma;
	printf("Insira um número: ");
	scanf("%d", &number);
	
	for(int i = 0; i <= number; i++){
		soma += i;
	}
	
	printf("%d", soma);
}

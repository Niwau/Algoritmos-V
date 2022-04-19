#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int number;
	printf("Insira um número: ");
	scanf("%d", &number);
	
	for(int i = 2; i <= number; i+=2){
		printf("%d\n", i);
	}
}

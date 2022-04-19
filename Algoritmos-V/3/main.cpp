#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int number;
	printf("Insira um número: ");
	scanf("%d", &number);
	
	for(int i = 1; i <= number; i++){
		if(number%i == 0){
			printf("%d\n", i);
		}
	}
}

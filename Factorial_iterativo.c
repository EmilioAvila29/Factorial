//Factorial Iterativo
#include<stdio.h>

int main (){
	
	int i, n, factorial = 1;
	
	printf("\t\n--Factorial de un numero--");
	printf("\nIntroduzca el numero para calcular su factorial: ");
	scanf("%d", &n);
	
	if(n < 0){
		printf("Numero invalido, ingrese numeros positivos");
	}else{
		for(i=1; i<=n; i++){
		factorial = factorial*i;
		}
	}
	
	printf("\nEl resultado es: %d", factorial);
	
	return 0;
}

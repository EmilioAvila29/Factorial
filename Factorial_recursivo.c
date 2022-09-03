//Factorial Recursivo
#include<stdio.h>

int factorial(int);

int factorial(int n){
	if(n == 0){
		n=1;
	}
	else{
		n = n*factorial(n-1);
	}
	return n;
}

int main (){
	
	int n, res;

	printf("\t\n--Factorial de un numero--");
	printf("\nIngresa un numero para calcular su factorial: ");
	scanf("%d", &n);
	
	res = factorial(n);
	printf("\nEl resultado es: %d", res);
	
	return 0;
}



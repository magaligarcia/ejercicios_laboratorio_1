/*
 ============================================================================
 Magali Garcia 1E

d-Operadores Logicos
Aplicando el concepto de Operadores L�gicos con valores booleanos en el condicional:
Solicitar un n�mero al usuario
Informar si el mismo es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroIngresado;
	int resultado;

	printf("Ingrese un n�mero: ");
	fflush(stdin);
	scanf("%d",&numeroIngresado);

	resultado = numeroIngresado % 2 ==0;

	if(resultado)
	{
		printf("El n�mero ingresado es par");

	}
	else
	{
		printf("El n�mero ingresado es impar");

	}
	return 0;
}

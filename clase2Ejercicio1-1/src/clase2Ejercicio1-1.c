/*
 ============================================================================
Magali Garcia 1E

Ingresar dos n�meros enteros, sumarlos y mostrar el resultado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese el primer n�mero: ");
	fflush(stdin);
	scanf("%d",&numeroUno);

	printf("Ingrese el segundo n�mero: ");
	fflush(stdin);
	scanf("%d",&numeroDos);

	resultado = numeroUno + numeroDos;

	printf("La suma de los dos n�meros es: %d",resultado);

	return 0;
}

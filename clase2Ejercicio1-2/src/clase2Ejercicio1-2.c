/*
 ============================================================================
Magali Garcia 1E

ingresar 3 n�meros y mostrar el mayor de los tres.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
		int numeroUno;
		int numeroDos;
		int numeroTres;
		int mayorNumero;

		printf("Ingrese el primer n�mero: ");
		fflush(stdin);
		scanf("%d",&numeroUno);

		printf("Ingrese el segundo n�mero: ");
		fflush(stdin);
		scanf("%d",&numeroDos);

		printf("Ingrese el tercer n�mero: ");
		fflush(stdin);
		scanf("%d",&numeroTres);

		if(numeroUno > numeroDos && numeroUno > numeroTres)
		{
			mayorNumero = numeroUno;
		} else
		{

		}


	return 0;
}

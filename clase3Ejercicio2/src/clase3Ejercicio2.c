/*
 ============================================================================
Magali Garcia 1E

Ejercicio 3-2:
Crear una funci�n que muestre por pantalla el n�mero flotante que recibe como par�metro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float mostrarNumero(float num);

int main(void) {
	setbuf(stdout, NULL);
	float numeroIngresado;

	printf("Ingrese un numero con decimales: ");
	scanf("%f",&numeroIngresado);
	mostrarNumero(numeroIngresado);
	return 0;
}

float mostrarNumero(float num)
{
	float mostrar;
	mostrar = printf("\nEl n�mero ingresado es: %.4f",num);
	return mostrar;
}

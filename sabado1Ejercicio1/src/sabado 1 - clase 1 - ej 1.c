/*
 ============================================================================
Garcia, Magali 1E
	Ejercicio 1:
	Ingresar n�meros enteros, hasta que el usuario lo decida. Calcular y mostrar:
	a)	El promedio de los n�meros positivos.
	b)	El promedio de los n�meros negativos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	char variableControl;
	int numeroIngresado;
	int contadorPositivos = 0;
	int contadorNegativos = 0;
	int acumuladorPositivos = 0;
	int acumuladorNegativos = 0;
	int promedioPositivos;
	int promedioNegativos;


	variableControl = 's';
	while(variableControl == 's')
	{
		printf("Ingrese un n�mero: ");
		fflush(stdin);
		scanf("%d",&numeroIngresado);

		if(numeroIngresado>0)
		{
			contadorPositivos++;
			acumuladorPositivos += numeroIngresado;
		} else
		{
			contadorNegativos++;
			acumuladorNegativos += numeroIngresado;
		}


	printf("Desea ingresar otro n�mero? \nResponda 's' para s� � 'n' para no: ");
	fflush(stdin);
	scanf("%c",&variableControl);
	while(variableControl != 's' && variableControl != 'n')
	{
		printf("ERROR! \nReingrese 's' para s� � 'n' para no: ");
		scanf("%c",&variableControl);
	}
	}// FIN WHILE
promedioPositivos = acumuladorPositivos / contadorPositivos;
promedioNegativos = acumuladorNegativos / contadorNegativos;
//SALIDA
if(contadorPositivos !=0)
	{
		printf("\nEl promedio de los positivos es: %d",promedioPositivos);
	} else
	{
		printf("\nNo se ingresaron n�meros positivos para promediar.");
	}
if(contadorNegativos !=0)
	{
		printf("\nEl promedio de los negativos es: %d",promedioNegativos);
	}else
	{
		printf("\nNo se ingresaron n�meros negativos para promediar.");
	}

	return 0;
}

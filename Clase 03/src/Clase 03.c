/*
 ============================================================================
 Name        : Clase.c
 Author      : Thomas Sbulf
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/******************************************************************************

	Pedir 10 numeros al usuario
	Mostrar el maximo y minimo a medida que se ingresan los numeros.

	*******************************************************************************/

	setbuf(stdout, NULL);

	/*
    int numeros;
    int contador;
    int numeroMasGrande;
    int numeroMasChico;
    int flag;

    flag = 0;

    for(contador=0 ; contador < 10 ; contador++)
    {
        printf("\n ingrese un numero");
        scanf("%d", &numeros);

        if(flag == 0)
        {
        	numeroMasGrande = numeros;
        	numeroMasChico = numeros;
        	flag = 1;
        }
        else
        {
        	if(numeroMasChico > numeros)
        	{
        		numeroMasChico = numeros;
        	}
        	if(numeroMasGrande < numeros)
        	{
        		numeroMasGrande = numeros;
        	}
        }

    }
    printf("el numero mas grande es: %d y el numero mas chico es %d", numeroMasGrande, numeroMasChico);

	return 0;
	*/


	/******************************************************************************

	Pedir numeros hasta que el usuario quiera
	Mostrar el maximo y minimo a medida que se ingresan los numeros.

	*******************************************************************************/

	int numeros;
	int numeroMayor;
	int numeroMenor;
	int flag = 0;
	int contador = 0;

	do
	{
		contador++;

		printf("ingrese un numero (\"69\" finaliza el ingreso) \n");
		scanf("%d", &numeros);

		if(flag == 0)
		{
			numeroMayor = 0;
			numeroMenor = 0;
			flag = 1;
		}
		else
		{
			if(numeroMayor < numeros)
			{
				numeroMayor = numeros;
			}
			if(numeroMenor > numeros)
			{
				numeroMenor = numeros;
			}
		}

	}while(69 != numeros);

	printf("cantidad de numeros ingresados: %d \n el numero mayor es: %d \n y el numero menor es %d",contador,numeroMayor,numeroMenor);
	return 0;
}

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
/*
 * RETORNO - NOMBRE - (int, float, char)
 *int float double - char - void - void*
 */
//----------------------------------------------------------------- CABECERA
/*int suma(int num1, int num2);

//----------------------------------------------------------------- MAIN

int main(void)
{
	setbuf(stdout, NULL);
	// TODO MI PROGRAMA

	return 0;
}
//----------------------------------------------------------------- DESARROLLO

int Suma(int n1, int n2)
{

}*/

//TAREA
float sumar(float, float);
float restar(float, float);
float multiplicar(float, float);
//NO SE PUEDE DIVIDIR POR CERO, EN EL CASO QUE INGRESE 0, RETORNAR 0.
float dividirInt(int, int);
float dividirFloat(float, float);



int main(void)
{
	setbuf(stdout, NULL);

	float n1;
	float n2;

	float r1;
	float r2;
	float r3;
	float r4;
	float r5;

	printf("Dame n1: ");
	scanf("%f", &n1);
	printf("Dame n2: ");
	scanf("%f", &n2);

	r1 = sumar(n1, n2);
	r2 = restar(n1, n2);
	r3 = multiplicar(n1, n2);

	printf("Suma: %2.f \n", r1);
	printf("Resta: %2.f \n", r2 );
	printf("Multiplicacion: %2.f \n", r3 );
	if(n2 != 0)
	{
		r4 = dividirInt(n1, n2);
		r5 = dividirFloat(n1, n2);

		printf("Division INT: %f \n", r4);
		printf("Division FLOAT: %f \n", r5);
	}
	else
	{
		printf("NO SE PUEDE DIVIDIR POR CERO");
	}
	return 0;
}

float sumar(float n1, float n2)
{
	float rtn;
	rtn = n1 + n2;

	return rtn;
}

float restar(float n1, float n2)
{
	float rtn;
	rtn = n1 - n2;

	return rtn;
}

float multiplicar(float n1, float n2)
{
	float rtn;
	rtn = n1 * n2;

	return rtn;
}

float dividirInt(int n1, int n2)
{
	float rtn;
	rtn = n1 / n2;

	return rtn;
}

float dividirFloat(float n1, float n2)
{
	float rtn;
	rtn = n1 / n2;

	return rtn;
}


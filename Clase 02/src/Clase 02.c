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
	//TIPOS DE DATOS
	// int - float - double - char - void - void*

	//MODIFICADORES
	//short - long - unsigned

	//long agrega 4 bytes
	//short divide a la mitad (reduce 2 bytes)

	//char vale 1 byte, 1 byte guarda 8 espacios (8 bits)

	/*
	int num1;
	int num2;

	num1 = 15;
	num2 = 15;

	while(num1 < 20)
	{
		printf("%d \n" , num1);
		num1++;
	}

	printf("sali");
	*/

	//------------------------------------------
	//int numero1 = 15;
	//int numero2 = 20;


	//printf("%d", numero1);//contenido
	//scanf("%d", &numero1);//ubicacion
	//printf("%d", &numero1); (6422300)
	//printf("\n%d", &numero2); (6422296) "con short in pasa a 294"


	//Especificadores de formato
	/*

	 *%c: Caracter
	 *%d: Número entero(int)
	 *%D: Número entero long(o también %ld)
	 *%i: Número entero(int)
	 *%f: Punto flotante(float)
	 *%e: Notación científica con e minúscula
	 *%E: Notación científica con E mayúscula
	 *%g: Utiliza %f o %e según sea más corto
	 *%G: Utiliza %f o %E según sea más corto
	 *%o: Número octal sin signo
	 *%s: Cadena de texto(string)
	 *%u: Entero sin signo
	 *%U: Entero sin signo long(o también %lu)
	 *%x: Hexadecimal sin signo con minúsculas
	 *%X: Hexadecimal sin signo con mayúsculas
	 *%p: Puntero, dirección de memoria
	 *%n: Número de caracteres
	 *%o: Formato entero octal
	 *%O: Formato entero octal long(o también %lo)
	 *%lf: Formato double
	 *%LF: Formato long double
	 *%%: porcentaje
	 */

	//printf("hola mundo %d %d %c %c", numero1, numero1, 'F', 64);

	//secuencia de escape
	/*

	 *\n	Salto de línea
	 *\b	Retroceso
	 *\t	Tabulación horizontal
	 *\v	Tabulación vertical
	 *\\	Contrabarra
	 *\f	Salto de página
	 *\'	Apóstrofe
	 *\"	Comillas dobles
	 *\0	Fin de una cadena de caracteres

	 */

	//int dia = 15;
	//int mes = 08;
	//int anio = 1998;

	//printf("%d/%d/%d");

	/*int numero;

	setbuf(stdout, NULL);
	printf("Dame un dato: ");

	//el scanf siempre usa la direccion de memoria "&"
	scanf("%d", &numero);

	return EXIT_SUCCESS;*/



	/*
	 int main(void)
	 {
	 	 int maximo;
	 	 int minimo;
	 	 int contador;
	 	 int bufferInt;
	 	 int flag;

	 	 contador = 0;
	 	 flag = 0;

	 	 for(contador;contador<5;contador++)
	 	 {
	 	 	 printf("ingrese un numero %d \n", contador+1);
	 	 	 scanf("%d", &bufferInt);

	 	 	 if(flag == 0)
	 	 	 {
	 	 	 	 maximo = bufferInt;
	 	 	 	 minimo = bufferInt;
	 	 	 	 flag = 1;
	 	 	 }
	 	 	 else
	 	 	 {
	 	 	 	 if(bufferInt > maximo)
	 	 	 	 {
	 	 	 	 	 maximo = bufferInt;
	 	 	 	 }
	 	 	 	 if(bufferInt < minimo)
	 	 	 	 {
	 	 	 	 	 minimo = bufferInt;
	 	 	 	 }
	 	 	 }
	 	 }
	 	 printf("El valor minimo es: %d y el valor maximo es: %d",minimo,maximo);

	 	 return 0;
	 }
	 */


}

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

	setbuf(stdout,NULL);

	//var nombreVariable;
	//var numeroVariable;
	//numeroVariable = ; //depende de lo que yo guarde para que esto tenga algun tipeo


	//c es un lenguaje fuertemente tipado

	int numerosEnteros = 10;
	float numerosDecimales = 10.2;
	char unCaracter = 'a';
	int numeroPedidoUsuario;

	//javascript
	//console.log()
	//alert()
	//document.getElementById()
	//document.write()

	//En c imprimir en la consola
	printf("\n asi se muestra un int %d",numerosEnteros);
	printf("\n asi se muestra un float %f", numerosDecimales);
	printf("\n %c %c", unCaracter, 97);


	printf("\n practica pedido usuario");
	printf("\n %d",numeroPedidoUsuario);

	printf("\n ingrese un numero \n");
	scanf("%d",&numeroPedidoUsuario); //che en la biblioteca tal se encuentra la caja

	printf("\n dato pedido");
	printf("\n %d",numeroPedidoUsuario);


	numeroPedidoUsuario +1;



	/*
	 int main(void)
	 {
	 	 int num1;
	 	 int num2;
	 	 int suma;

	 	 printf("ingrese un numero\n");
	 	 scanf("%d", &num1);
	 	 printf("ingrese otro numero\n");
	 	 scanf("%d", &num2);
	 	 suma=num1+num2;
	 	 printf("la suma es %d",suma);

	 	 return 0;
	 }

	 int main(void)
	 {
	 	 int num1;
	 	 int num2;
	 	 int num3;
	 	 int num4;
	 	 int num5;
	 	 int promedio;
	 	 int suma;

	 	 printf("ingrese un numero:\n");
	 	 scanf("%d", &num1);
	 	 printf("ingrese otro numero:\n");
	 	 scanf("%d", &num2);
	 	 printf("ingrese otro numero:\n");
	 	 scanf("%d", &num3);
	 	 printf("ingrese otro numero:\n");
	 	 scanf("%d", &num4);
	 	 printf("ingrese otro numero:\n");
	 	 scanf("%d", &num5);

	 	 suma = num1 + num2 + num3 + num4 + num5;
	 	 promedio = suma / 5;

	 	 printf("el promedio es:%d", promedio);

	 }
	 */


	return EXIT_SUCCESS;
}

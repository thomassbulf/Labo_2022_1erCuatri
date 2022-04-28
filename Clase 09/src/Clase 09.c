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


typedef struct
{
	int edadCliente;
	char nombreCliente[10];
	char apellidoCliente[10];
	char emailCliente[10];
	int nroCuentaCliente;
}Cliente;

int main(void)
{
	//Esto formaria los datos de 1 cliente
	int edadCliente;
	char nombreCliente[10];
	char apellidoCliente[10];
	char emailCliente[10];
	int nroCuentaCliente;

	Cliente clienteUno;
	clienteUno.nroCuentaCliente = 126548;

	//Tener varios clientes array paralelos
	int edadClienteArray[100];
	char nombreClienteArray[100][10];
	char apellidoClienteArray[100][10];
	char emailClienteArray[100][10];
	int nroCuentaClienteArray[100];
	printf("Edad cliente %d, nombre cliente %s, nrocuenta %d", edadClienteArray[1], nombreClienteArray[1], nroCuentaClienteArray[1]);
	printf("Edad cliente %d, nombre cliente %s, nrocuenta %d", arrayCliente[1].edadCliente, arrayCliente[1].nombreCliente, arrayCliente[1].nroCuentaCliente);

	return EXIT_SUCCESS;
}

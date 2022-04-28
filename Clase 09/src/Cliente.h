/*
 * Cliente.h
 *
 *  Created on: 26 abr. 2022
 *      Author: thoma
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

typedef struct
{
	int edadCliente;
	char nombreCliente[10];
	char apellidoCliente[10];
	char emailCliente[10];
	int nroCuentaCliente;
}Cliente;

int cl_imprimirArrayCliente(Cliente arrayCliente[], int tam);

#endif /* CLIENTE_H_ */

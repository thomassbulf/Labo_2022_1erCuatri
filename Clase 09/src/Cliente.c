/*
 * Cliente.c
 *
 *  Created on: 26 abr. 2022
 *      Author: thoma
 */
#include "Cliente.h"


int	cl_imprimirUnCliente(Cliente cli)
{
	printf("Edad cliente %d, nombre cliente %s, nrocuenta %d", arrayCliente[1].edadCliente, arrayCliente[1].nombreCliente, arrayCliente[1].nroCuentaCliente);
}

int cl_imprimirArrayCliente(Cliente arrayCliente[], int tam);
{
	int retorno = -1;
	if(arrayCliente != NULL && tam > 0)
	{
		for (int i = 0; i < tam; i++)
		{
			cl_imprimirUnCliente(arrayCliente[i]);
		}
		retorno = 0;
	}

	return retorno;
}

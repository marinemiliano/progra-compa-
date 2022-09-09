/*
 * progra.c
 *
 *  Created on: 8 sep. 2022
 *      Author: marin
 */

#include <stdio.h>
#include <stdlib.h>
#include "progra.h"

char opcionesMenu()
{
	char opcion;

	printf("\na-Iniciar "
			"\nb-Procesar"
			"\nc-Finalizar"
			"\nd-Salir"
			"\n\n Ingrese una opcion: ");
	fflush(stdin);
	scanf("%c",&opcion);

	while(opcion!='a' && opcion!='b' && opcion!='c' && opcion!='d')
	{
		printf("**********ERROR**********\n\n"
				"\n a-Iniciar "
				"\nb-Procesar"
				"\nc-Finalizar"
				"nd-Salir"
				"\n Ingrese una opcion: ");
		fflush(stdin);
		scanf("%c",&opcion);
	}


	return opcion;
}


char salirMenu()
{
	char salir;
	printf("\nSeguro que desea salir :(s/n) ");
	fflush(stdin);
	scanf("%c",&salir);
	while(salir!='s' && salir!='n')
	{
		printf("\n***************ERROR**************"
				"\nSeguro que desea salir :(s/n) ");
		fflush(stdin);
		scanf("%c",&salir);
	}
	return salir;
}

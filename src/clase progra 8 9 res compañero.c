/*

 Description : Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "progra.h"

char salirMenu();
char opcionesMenu();

int main(void) {

	setbuf(stdout,NULL);

	char opcionMenu;
	char salir;
	int flag=0;
	int flagTwo=0;


	do
	{
		opcionMenu=opcionesMenu();

		switch (opcionMenu)
		{
			case 'a':
				printf("********* A iniciado**********\n");
				flag=1;
				break;
			case 'b':
					if(flag==0)
					{
						printf("\nNo se puede procesar sin antes haber iniciado.");
					}
					else
					{

						printf("********* A Procesado**********\n");
						flagTwo=1;
					}
				break;
			case 'c':
							if(flag==0)
							{
								printf("\nNo se puede finalizar sin antes haber iniciado.");
							}
							else
							{
								if(flagTwo==0)
								{
									printf("\nNo se puede procesar sin antes haber iniciado.");
								}
								else
								{
									printf("********* A Procesado**********\n");
								}
							}

				break;
			default:

					salir=salirMenu();
					printf("*********A salido del menu**********\n");
				break;
		}
	}while(salir!='s');


	return EXIT_SUCCESS;
}

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

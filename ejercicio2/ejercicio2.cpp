/*
*Programa: Registrar 20 cantante, titulo, duracion, peso de una cancion mostrando las condiciones pedidas
*Fecha: 18-10-2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct registro{
	char nombre[30];
	char titulo[40];
	int duracion;
	int peso;
};

struct registro datos[20];

int main() {
	int i = 0 , seleccion, numero = 0;
	do{		
		printf("MENU \n1. Añadir datos de una nueva cancion \n2. Mostrar nombre de las canciones \n3. Mostrar los nombres de los artistas \n4. Ver datos completos de la cancion \n5. Salir\nIngrese la opcion deseada: ");
		scanf("%d", &seleccion);		
		switch(seleccion){
			case 1: {					
				if(i < 20){
				printf("Registro de la cancion %d\n", numero+1);					
				printf("Ingrese el Cantante: ");
				fflush(stdin);
				gets(datos[numero].nombre);
				printf("Ingrese el titulo de la cancion: ");					
				gets(datos[numero].titulo);
				fflush(stdin);
				printf("Ingrese la duracion en segundos: ");
				scanf("%d", &datos[numero].duracion);
				printf("Ingrese el peso de la cancion en kb: ");
				scanf("%d", &datos[numero].peso);						
				numero++;	
				}else{
					printf("No se puede ingresar mas canciones\n");
				}		
				i++;
				break;
			}
			case 2: {
				if(numero == 0){
					printf("No hay canciones registradas\n");
				}else{
					printf("Nombre de las canciones\n");
					for(int i = 0; i < numero; i++){
						printf("El nombre de la cancion %d es: %s\n", i+1, datos[i].titulo);
					};	
				}					
				break;
			}		
			case 3: {
				
				if(numero == 0){
					printf("No hay canciones registradas\n");
				}else{
					printf("Nombre de los artistas\n");
					for(int i = 0; i < numero; i++){
						printf("El nombre del cantante %d es: %s\n", i+1, datos[i].nombre);
					};	
				}					
				break;
			}	
			case 4: {
				if(numero == 0){
					printf("No hay canciones registradas\n");
				}else{
					printf("Todas las canciones\n");
					for(int i = 0; i < numero; i++){
						printf("Cancion %d\n",i+1);
						printf("Nombre del cantante: %s\n", datos[i].nombre);
						printf("Titulo de la cancion: %s\n", datos[i].titulo);
						printf("Duracion en segundos: %d\n", datos[i].duracion);
						printf("Peso de la cancion en kb: %d\n", datos[i].peso);
					};	
				}					
				break;
			}	
			default: {
				if(seleccion != 5){
					printf("Seleccion no valida, intente de nuevo\n");					
				}
			};
		}			
	}while(seleccion != 5);	
	
}


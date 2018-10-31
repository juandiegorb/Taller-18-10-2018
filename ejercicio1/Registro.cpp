/*
*Programa: Registrar cantante, titulo, duracion, peso de una cancion
*Fecha: 18-10-2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct registro{
	char nombre[30];
	char titulo[30];
	int duracion;
	int peso;
};

struct registro datos;

//Funcion principal
int main() {
	printf("Ingrese el Cantante: ");
	gets(datos.nombre);
	printf("Ingrese el titulo de la cancion: ");
	gets(datos.titulo);
	printf("Ingrese la duracion en segundos: ");
	scanf("%d", &datos.duracion);
	printf("Ingrese el peso de la cancion en kb: ");
	scanf("%d", &datos.peso);	
	
	
	printf("El cantante es: %s\n", datos.nombre);
	printf("El titulo de la cancion es: %s\n", datos.titulo);
	printf("La duracion en segundos es: %d\n", datos.duracion);
	printf("El peso total en kb es: %d\n", datos.peso);
	
	getch();
}


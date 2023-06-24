#ifndef STALUMNOS_H_INCLUDED
#define STALUMNOS_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int matricula;
    char nombre[30];
    char genero;
}stAlumno;

int cargarAlumnos(stAlumno a[], int dimension);
void mostrarStruct(stAlumno a[], int validos);
void mostrarDatosDeAlumno(stAlumno a[],int validos,int numeroMatricula);
int encontrarMenor(stAlumno a[],int validos, int posicion);
void ordenarPorSeleccion (stAlumno a[], int validos);
void mostrarGenero(stAlumno a[], int validos);
int insertarArreglo(stAlumno a[],int validos, stAlumno nuevoAlumno);
int contadorEstudiantes(stAlumno a[], int validos, char genero);
void ordenacionPorInsercion(stAlumno a[],int validos);


#endif // STALUMNOS_H_INCLUDED



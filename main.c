#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stAlumnos.h"



//------------------------------------------------------PROTOTIPADO-----------------------------------------------------




int main()
{
   int validos,opcion, nroMatricula, menor,insertar,cantidad;
   char control='s', genero;
   stAlumno unArregloDeAlumnos[50];




   do
   {
       printf("Bienvenido al sistema. Elija el ejercicio que desea realizar ... \n");
       printf("1-Cargue un arreglo de alumnos \n");
       printf("2-Muestre por pantalla \n");
       printf("3-Funcion que muestre los datos de un alumno . Modularizar \n");
       printf("4- Ordenacion por seleccion. ( por matricula ) \n");
       printf("5-Mostrar por pantalla los datos de un genero determinado (f/m) \n");
       printf("6- Insertar elemento en arreglo ordenado \n");
       printf("7-Ordenacion por insercion \n");
       printf("8-Contar cuantos de un genero determinado hay \n");

       printf("Elija una opcion \n ");
       scanf("%d",&opcion);
       system("cls");
       switch(opcion)
       {

       case 1 :
        {
             validos=cargarAlumnos(unArregloDeAlumnos,50);
             break;
        }
       case 2 :
        {
              mostrarStruct(unArregloDeAlumnos,validos);
              break;
        }

       case 3 :
        {
            printf("Ingrese el numero de matricula que desea buscar :  \n");
            scanf("%d",&nroMatricula);
            mostrarDatosDeAlumno(unArregloDeAlumnos,validos,nroMatricula);

            break;

        }

       case 4 :

        {
           ordenarPorSeleccion(unArregloDeAlumnos,validos);
           mostrarStruct(unArregloDeAlumnos,validos);                   //NO SALE
           break;
        }
       case 5 :
        {
            mostrarGenero(unArregloDeAlumnos,validos);
            break;


        }

       case 6 :
        {
            stAlumno alumnito;

            alumnito.genero='m';
            strcpy(alumnito.nombre,"Juan");
            alumnito.matricula=1;

            validos=insertarArreglo(unArregloDeAlumnos,validos,alumnito);
            mostrarStruct(unArregloDeAlumnos,validos);

            break;
        }

       case 7:
        {
           // ordenacionPorInsercion(unArregloDeAlumnos,validos);
            insertionSort(unArregloDeAlumnos,validos);
            mostrarStruct(unArregloDeAlumnos,validos);
            break;

        }
       case 8 :
        {
            printf("Ingrese el genero : \n");
            fflush(stdin);
            scanf("%c",&genero);
            cantidad=contadorEstudiantes(unArregloDeAlumnos,validos,genero);
            printf("La cantidad es : %d", cantidad);
            break;
        }


       }

       printf("\n Desea volver al menu principal? (s/n) \n");
       fflush(stdin);
       scanf("%c",&control);
       system("cls");
   }
    while(control=='s');



}

//======================================================FUNCIONES============================================================




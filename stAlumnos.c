#include "stAlumnos.h"
int cargarAlumnos(stAlumno a[], int dimension)
{
    char continuar='s';
    int i=0;

    while(i<dimension && continuar=='s')
    {

        printf("Ingrese el numero de la matricula... \n");
        scanf("%d",&a[i].matricula);


        printf("Ingerse el nombre y apellido del alumno ... \n");
        fflush(stdin);
        gets(a[i].nombre);
        //getApellido(a[i].nombre);

        printf("Ingrese el genero del alumno... \n ");
        fflush(stdin);
        scanf("%c",&a[i].genero);



        printf("Desea continuar cargando datos? (s/n) \n");
        fflush(stdin);
        scanf("%c",&continuar);


        i++;

    }
    return i;
}

//-----------------------------------------------------------------------------------------------------------------

void mostrarStruct(stAlumno a[], int validos)
{
    int i=0;

    for(i=0;i<validos;i++)
    {

        mostrarPrints(a[i]);
        /*printf("==================================================\n");
        printf("El numero de matricula es %d \n", a[i].matricula);
        printf("El nombre del alumno es %s \n",a[i].nombre);
        printf("El genero del alumno es %c \n ",a[i].genero);
        printf("==================================================\n");
        */
    }
}

//-------------------------------------------------------------------------------------------------------------------
void mostrarPrints(stAlumno a)
{

    printf("============================================ \n");
    printf("Nombre \t \t \t %s \n ",a.nombre);
    printf("Matricula \t \t %d \n ",a.matricula);
    printf("Genero \t \t %c\n",a.genero);
    printf("============================================ \n");
}



void mostrarDatosDeAlumno(stAlumno a[],int validos,int numeroMatricula)
{
    int i=0,flag=0;

    for(i=0;i<validos && flag ==0;i++)
    {
        if(a[i].matricula==numeroMatricula)
        {
            mostrarPrints(a[i]);
            flag =1;
        }
        else
        {
            flag=0;
        }
    }


}

//----------------------------------------------------------------------------------------------------
int encontrarMenor(stAlumno a[],int validos, int posicion)
{
    int i= posicion;
    int menor=i;

    while(i<validos)
    {
        if(a[i].matricula<a[menor].matricula)
        {
            menor=i;
        }
        i++;
    }
    return menor;

}

//-------------------------------------------------------------------------------------------------


void ordenarPorSeleccion (stAlumno a[], int validos)
{
    stAlumno aux;
    int menor, i=0;

    while(i<validos)
    {
        menor=encontrarMenor(a,validos,i);

        aux=a[i];
        a[i]=a[menor];
        a[menor]=aux;
        i++;
    }

}

//-----------------------------------------------------------------------------------------------------------------------
void mostrarGenero(stAlumno a[], int validos)
{
    char generoBuscado;

    int i=0;
    printf("Seleccione el genero que desea buscar (F/M) ");
    fflush(stdin);
    scanf("%c",&generoBuscado);

    while(i<validos)
    {
        if(a[i].genero == generoBuscado)
        {
            mostrarPrints(a[i]);
        }
        i++;

    }

}
//------------------------------------------------------------------------------------------------------------------------------
int insertarArreglo(stAlumno a[],int validos, stAlumno nuevoAlumno)
{
    int i = validos-1;


    while(i>=0 && nuevoAlumno.matricula<a[i].matricula)
    {
        a[i+1]=a[i];
        i--;
    }

    a[i+1]=nuevoAlumno;

    return validos+1;

}
//-----------------------------------------------------------------------------------------------------------
int insertarNombre(stAlumno a[], int validos,stAlumno nuevoAlumno)
{
    int i =validos-1;
    while(i>=0 && nuevoAlumno.nombre<a[i].nombre)
    {
        a[i+1]=a[i];
        i--;
    }
     a[i+1]=nuevoAlumno;

    return validos+1;
}
void insertionSort (stAlumno a[],int validos){

stAlumno aux;
for(int i = 0; i<validos ; i++){
    aux = a[i];
    insertarArreglo(a,i,aux);
}


}
//------------------------------------------------------------------------------------------------------------------
void ordenacionPorInsercion(stAlumno a[],int validos)
{
    int i=0, j=0;
    stAlumno aux;

    for(i=0;i<validos;i++)
    {
        aux=a[i];
        j=i-1;

        while(j>=0 && strcmp(a[j].nombre,aux.nombre)>0)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=aux;
    }
}


//----------------------------------------------------------------------------------------------------------------------
int contadorEstudiantes(stAlumno a[], int validos, char genero)
{
    int cont=0, i=0;

    while(i<validos)
    {
        if(a[i].genero == genero)
        {
            cont++;
        }
        i++;
    }
    return cont;
}

//--------------------------------------------------------------------------------------------------------





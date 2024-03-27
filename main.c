#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

#define DIM 10
int cargaArregloRandom(int a[], int dim);
int cargaArregloUsuario(int a[], int dim);
void muestraArreglo(int a[], int v);

int main ()
{
    srand(time(NULL));
    int notas [DIM];
    int validosNotas = 0;
    validosNotas = cargaArregloUsuario(notas, DIM);
    printf("\n Listado de notas\n");
    muestraArreglo(notas, validosNotas);

    return 0;
}
int cargaArregloRandom(int a[], int dim)//vacios p/ poder cargar de dif dimension
{
    int i;
    for (i = 0; i < 50; i++){
        a[i] = rand()%10;
    }
    return i;
}
int cargaArregloUsuario(int a[], int dim)
{
    int i = 0; ;
    int dato;
    char opcion;
    do{
        printf("\n Ingrese un numero:\n");
        scanf("%d", &dato);
        a[i] = dato;
        printf("Quiere continuar? Si no, presione ESC");
        opcion = getche();
        i++;
    } while( opcion != 27 && i < dim);
    return i;
}
void muestraArreglo(int a[], int v)
{
    for(int i = 0; i < v; i++){
        if (i % 10 == 0){
            printf("\n");
            }
        printf("%d | ", a[i]);
    }
}

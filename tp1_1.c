#include <stdio.h>

int main()
{
    printf("hola mundo \n");

    int variable = 100;
    int *puntero = &variable;

    printf("1) Contenido del puntero: %d\n", *puntero);

    printf("2) Direccion almacenada por el puntero: %p\n", &puntero);

    printf("3) Direccion de memoria de la variable: %p\n", &variable);

    printf("4) Direccion de memoria del puntero: %p\n", &puntero);

    printf("5) Tamaño de memoria de la variable: %zu bytes\n", variable);

    return 0;
}
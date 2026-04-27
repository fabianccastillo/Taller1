#include <stdio.h>

int cuadradoNumero(int numero)
{
    int cuadrado = numero * numero;

    return cuadrado;
}

void cuadradoVoid(int numero)
{
    int cuadrado = numero * numero;
    printf("El cradrado de un numero es: %d\n", cuadrado);
}

void mostrarVariable(int x)
{
    printf("Valor: %d\n", x);
    printf("Dirección: %p\n", &x);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    printf("Cuadrado: %d\n", cuadradoNumero(num));
    cuadradoVoid(num);


    mostrarVariable(num);


    int a, b;
    printf("\nIngrese dos numeros:\n");
    scanf("%d %d", &a, &b);

    printf("Antes de invertir: a=%d, b=%d\n", a, b);
    invertir(&a, &b);
    printf("Despues de invertir: a=%d, b=%d\n", a, b);

    printf("Ordenando...\n");
    orden(&a, &b);
    printf("Ordenados: a=%d (menor), b=%d (mayor)\n", a, b);

    return 0;
}
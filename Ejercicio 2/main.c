#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    int i;
    float promedio;
    float acumulador = 0;

    i= 0;
    while( i < 5)
    {
        printf("\nIngrese su edad: ");
        scanf("\n %d", &edad);
        printf("\nUsted tiene: %d\n", edad);
        i ++;
        acumulador = acumulador + edad;

    }
    promedio = acumulador / i;
    printf("%.2f", promedio);
    printf("Su promedio es: %.2f\n", promedio);

    return 0;

}

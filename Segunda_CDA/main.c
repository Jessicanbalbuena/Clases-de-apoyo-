#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "math.h"


int main()
{
    int flag =1, opcion;
    float resultadoSuma, resultadoResta, num1, num2;
    do
    {
        printf("1.Ingrese 1er operando (A=X)\n2. Ingresar 2do operando (B=X)\n");
        printf("\nIngrese una opcion del menu: ");
        scanf("%d", &opcion);
        __fpurge(stdin);
        scanf("%d", &opcion);


        switch (opcion)
        {
        case 1:
            ingresarNumero(&num1);

            //ingresarNumero();
            break;

        case 2:
            ingresarNumero(&num2);
            //ingresarNumero();
            break;

        case 3:
            suma();
            resta();
            division();
            printf("Calculando...");
            //ingresarNumero();
            break;

        case 4:
            printf("Resultados");
            break;

        case 5:
            printf("Saliendo..");
            //SALIR
            flag = 0;

        default:
            printf("Ingrese una opcion valida\n");


        }
        __fpurge(stdin);
        printf("\nINgrese ENTER para continuar");
        getchar();
        system("clear");

    }
    while (flag !=0);


    return 0;
}





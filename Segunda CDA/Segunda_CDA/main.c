#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

int main()
{
    int flag, opcion;

    do{
        printf("1.Ingrese 1er operando\n2. Ingresar 2do operando\n");
        printf("\nIngrese una opcion del menu: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            //ingresarNumero();
            break;

        case 2:
            //ingresarNumero();
            break;

        case 3:
            //ingresarNumero();
            break;

        case 4:
            break;

        case 5:
            //SALIR
            flag = 0;

            default:
            printf("Ingrese una opcion valida\n");


        }
        getchar();
        system("clear");

    }
    while (flag !=0);


    return 0;
}




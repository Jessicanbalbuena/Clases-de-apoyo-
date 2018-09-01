#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main()
{

    char seguir='s';
    int opcion=0;
    int primerNumero = 0;
    int segundoNumero = 0;
    int suma = 0;
    int resta = 0;
    int multipli = 0;
    double divi = 0;
    int fac = 0;
    int cero = 0;

    while(seguir=='s')
    {

        system("cls");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones \n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

            switch(opcion)
            {
            case 1:
                printf("ingrese el primer valor \n");
                scanf("%d",&primerNumero);
                break;
            case 2:
                printf("ingrese el segundo valor \n");
                scanf("%d",&segundoNumero);
                break;
            case 3:
                suma = sumar(primerNumero,segundoNumero);
                printf("La suma es: %d \n ", suma);
                system ("pause");
                break;
            case 4:
                resta = restar(primerNumero,segundoNumero);
                printf("La resta es: %d \n ", resta);
                system ("pause");
                break;
            case 5:
                if(0 != segundoNumero){
                    divi= division(primerNumero,segundoNumero);
                    printf("La division es: %lf \n ", divi);
                    system ("pause");
                }else{
                    printf("No se puede dividir entre cero. \n");
                    system ("pause");
                }
                break;
            case 6:
                multipli = multiplicacion(primerNumero,segundoNumero);
                printf("La multiplicacion es: %d \n ", multipli);
                system ("pause");
                break;
            case 7:
                fac = factorial(primerNumero);
                printf("La factorial es: %d \n ", fac);
                system ("pause");
                break;
            case 8:
                suma = sumar(primerNumero,segundoNumero);
                printf("La suma es: %d \n ", suma);

                resta = restar(primerNumero,segundoNumero);
                printf("La resta es: %d \n ", resta);

               if(segundoNumero != 0){
                    divi= division(primerNumero,segundoNumero);
                    printf("La division es: %lf \n ", divi);
                }else{
                    printf("No se puede dividir entre cero. \n");
                }

                multipli = multiplicacion(primerNumero,segundoNumero);
                printf("La multiplicacion es: %d \n ", multipli);

                fac = factorial(primerNumero);
                printf("La factorial es: %d \n ", fac);

                system ("pause");
                break;
            case 9:
                seguir = 'n';
                break;
            default :
                break;
            }
        }
    return 0;

}

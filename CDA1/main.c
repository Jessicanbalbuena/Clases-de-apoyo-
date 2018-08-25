#include <stdio.h>
#include <stdlib.h>

//
int main()
{
    int edad;
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nIngrese su edad: ");
        scanf("\n %d", &edad);
        printf("\nUsted tiene: %d\n", edad);
    }

    return 0;
}

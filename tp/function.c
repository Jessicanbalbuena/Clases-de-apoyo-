#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

int sumar(int numero1, int numero2)
{
	return numero1 + numero2;
}

int restar(int numero1, int numero2)
{
	return numero1 - numero2;
}

int multiplicacion(int numero1, int numero2)
{
	return numero1 * numero2;
}

double division(int numero1, int numero2)
{
	return numero1 / numero2;
}

int factorial(int numero1)
{
    int c, fact = 1;

  for (c = 1; c <= numero1; c++)
    fact = fact * c;

	return fact;
}

#endif // FUNCTION_H_INCLUDED

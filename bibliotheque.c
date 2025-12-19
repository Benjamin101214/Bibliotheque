#include "bibliotheque.h"

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;
int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}

#include <stdio.h>
#include <math.h>

void resoudre_equation(double a, double b, double c)
{
    double delta, x1, x2;

    if (a == 0)
    {
        printf("Ce n'est pas une équation du second degré.\n");
        return;
    }

    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Deux solutions réelles distinctes :\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2*a);
        printf("Une solution réelle double :\n");
        printf("x = %.2f\n", x1);
    }
    else
    {
        printf("Aucune solution réelle (delta < 0).\n");
    }
}



int est_premier(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}



int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

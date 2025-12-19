#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"

int main(void)
{
    int choix;

    printf("===== MENU =====\n");
    printf("1. Puissance et factorielle\n");
    printf("2. Equation du second degre\n");
    printf("3. Nombre premier\n");
    printf("4. Minimum de deux entiers\n");
    printf("Choix : ");
    scanf("%d", &choix);

    if (choix == 1)
    {
        int result = power(2, 3);
        printf("2^3 = %d\n", result);

        result = fact(6);
        printf("6! = %d\n", result);
    }
    else if (choix == 2)
    {
        double a, b, c;
        printf("Entrer a : ");
        scanf("%lf", &a);
        printf("Entrer b : ");
        scanf("%lf", &b);
        printf("Entrer c : ");
        scanf("%lf", &c);

        resoudre_equation(a, b, c);
    }
    else if (choix == 3)
    {
        int n;
        printf("Entrer un entier positif : ");
        scanf("%d", &n);

        if (est_premier(n))
            printf("%d est premier\n", n);
        else
            printf("%d n'est pas premier\n", n);
    }
    else if (choix == 4)
    {
        int x, y;
        printf("Entrer le premier entier : ");
        scanf("%d", &x);
        printf("Entrer le second entier : ");
        scanf("%d", &y);

        printf("Minimum = %d\n", minimum(x, y));
    }
    else
    {
        printf("Choix invalide\n");
    }

    return EXIT_SUCCESS;
}

#include <stdio.h>
int main()
{
    int n, i, tab[50], s = 0, min, max, pos, p,tpos[50],tneg[50],j=0,k=0;
    do
    {
        printf("Donner un entier n: ");
        scanf("%d", &n);
    } while (n > 50);
    for (i = 0; i < n; i++)
    {
        printf("Donner un entier: ");
        scanf("%d", &p);
        tab[i] = p;
        s += tab[i];
        if (i == 0 || tab[i] < min)
        {
            min = tab[i];
            pos = i;
        }
        if (i == 0 || tab[i] > max)
        {
            max = tab[i];
            pos = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d|", tab[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int tmp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = tmp;
    }
    printf("Tableau inverse: ");
    for (i = 0; i < n; i++)
    {
        printf("%d|", tab[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (tab[i] > 0)
        {
            tpos[j] = tab[i];
            j++;
        }
        else if (tab[i] < 0)
        {
            tneg[k] = tab[i];
            k++;
        }
    }
    printf("Tableau des positifs: ");
    for (i = 0; i < j; i++)
    {
        printf("%d|", tpos[i]);
    }
    printf("\nTableau des négatifs: ");
    for (i = 0; i < k; i++)
    {
        printf("%d|", tneg[i]);
    }
    printf("\n");
    printf("La somme est: %d\n", s);
    printf("Le minimum est: %d de position %d\n ", min, pos);
    printf("Le maximum est: %d de position %d\n", max, pos);
    return 0;
}

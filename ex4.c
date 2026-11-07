#include <stdio.h>
int main()
{
    int n, A[50], B[50], i, p, min, max, merge[100];
    do
    {
        printf("Donner un entier n: ");
        scanf("%d", &n);
    } while (n > 50);
    for (i = 0; i < n; i++)
    {
        printf("Donner un entier: ");
        scanf("%d", &p);
        A[i] = p;
        min = A[i];
        if (i == 0 || A[i + 1] < min)
        {
            A[i] = min;
        }
        else if (i == 0 || A[i + 1] > max)
        {
            A[i] = max;
        }
    }
    printf("Tableau: ");
    for (i = 0; i < n; i++)
    {
        printf("%d|", A[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Donner un entier: ");
        scanf("%d", &p);
        B[i] = p;
        min = B[i];
        if (i == 0 || B[i + 1] < min)
        {
            B[i] = min;
        }
        else if (i == 0 || B[i + 1] > max)
        {
            B[i] = max;
        }
    }
    printf("Tableau: ");
    for (i = 0; i < n; i++)
    {
        printf("%d|", B[i]);
    }
    for (i = 0; i < n; i++)
    {
        merge[i] = A[i];
    }
    for (i = 0; i < n; i++)
    {
        merge[i + n] = B[i];
    }
    printf("Merged Tableau: ");
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d|", merge[i]);
    }
    return 0;
}
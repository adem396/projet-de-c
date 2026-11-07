#include<stdio.h>
int main(){
    int n,i,j,t[10][10];
    printf("Enter le dimension de matrix: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Enter the element at position (%d,%d): ",i,j);
            scanf("%d",&t[i][j]);
        }
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    
}
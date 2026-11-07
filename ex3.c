#include<stdio.h>
int main(){
    int n,tab[50],i,val,p;
    do{
        printf("Donner un entier n: ");
        scanf("%d",&n);
    }while(n>50);
    for (i=0;i<n;i++){
        printf("Donner un entier: ");
        scanf("%d",&p);
        tab[i] = p;
    }
    printf("Tableau: ");
    for (i=0;i<n;i++){
        printf("%d|",tab[i]);
    }
    printf("donner un entier pour le chaerche");
    scanf("%d",&val);
    for (i=0;i<n;i++){
        if (tab[i] == val){
            printf("l'entier %d est trouve a la position %d\n",val,i);
            break;
        }
        else if (i == n-1){
            printf("l'entier %d n'est pas trouve\n",val);
        }
    }
    return 0;
}
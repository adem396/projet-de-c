#include<stdio.h>
int main(){
    int i,tab[10];
    for(i=0;i<10;i++){
        tab[i] = i;
        printf("%d|",tab[i]);
    }
    printf("\n");
    return 0;
}
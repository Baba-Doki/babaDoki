#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    /*Notre programme sequentiel fait le parcours d'une matrice 
    carree et calcule, la valeur de cette cellule a la puissance (i+j)*/
    int n,i,j;
    printf("\n\nEntrez la taille de la matrice carree\t:");
    scanf("%d",&n);
    int matrice[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Element %d,%d:\t",i+1,j+1);
            scanf("%d",&matrice[i][j]);
        }
    }
//Voici la partie du calcul qui nous interresse que nous allons paralleliser
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matrice[i][j] = pow(matrice[i][j],i+j);
            printf("%d| ",matrice[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
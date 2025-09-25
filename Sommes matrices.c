#include <stdio.h>

int main(){
    int n, i;
    printf("De quelle taille sont vos matrices ?: ");
    scanf("%d", &n);
    int ta[n][n], tb[n][n], taille = n*n, c = 0, l = 0;
    for(i = 0; i < taille; i++){
        printf("Veuillez entrer l'element de la ligne %d de la colonne %d de la premiere matrice: ", l + 1, c + 1);
        scanf("%d", &ta[c][l]);
        l = l + 1;
        if(l == n) {
            l = 0, c = c + 1;
        }
    }
    c = 0, l = 0;
    for(i = 0; i < taille; i++){
        printf("veuillez entrer l'element de la ligne %d de la colonne %d de la deuxieme matrice: ", l + 1, c + 1);
        scanf("%d", &tb[c][l]);
    	l = l + 1;
        if(l == n) {
            l = 0, c = c + 1;
        }
    }
    c = 0, l = 0;
    printf("calcul de la somme des matrices");
    int tc[n][n];
    for(i = 0; i < taille; i++){
        tc[c][l] = ta[c][l] + tb[c][l]; 
        l = l + 1;
        if(l == n) {
            l = 0, c = c + 1;
        }
    }
    c = 0, l = 0;
    printf("\nLa somme resultant de vos matrices est la suivante: \n");
    for(i = 0; i < taille; i++){
        printf("%d\n", tc[c][l]);
        l = l + 1;
        if(l == n) {
            l = 0, c = c + 1;
        }
    }
    return 0;
}
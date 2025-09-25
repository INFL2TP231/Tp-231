#include <stdio.h>

int main(){
    int n, i, val, trouve = 0;
    printf("De quelle taille est votre tableau ?: ");
    scanf("%d", &n);
    int tab[n];
    for(i = 0;i < n; i++){
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("maintenant nous allons proceder a une recherche dans votre tableau.\n Entrez la valeur a rechercher : ");
    scanf("%d", &val);
    for(i = 0; i < n; i++){
        if(tab[i] == val){
            printf("La valeur recherche se trouve dans a la case %d\n", i + 1);
            trouve = 1;
        }else if(i == n - 1 && trouve == 0){
            printf("La valeur recherche n'est pas dans le tableau\n");
        }
    }
    return 0;
}
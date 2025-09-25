#include <stdio.h>

int main() {
    int n, i;
    printf("De quelle taille est votre tableau ?: ");
    scanf("%d", &n);
    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Voici votre tableau :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\nMaintenant voici votre tableau inverse :\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    return 0;
}
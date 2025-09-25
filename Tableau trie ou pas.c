#include <stdio.h>

int main() {
    int n, i, chx;
    printf("De quelle taille est votre tableau ?: ");
    scanf("%d", &n);
    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("maintenant nous allons tester si votre ableau est trie ou non.\n");
    start:
    printf("Veuillez choisir :\n 1-Trie croissant\n 2-Trie decroissant\n 3-Quitter le programme\n");
    scanf("%d", &chx);
    switch (chx) {
        case 1:
            for (i = 0; i < n - 1; i++) {
                if (tab[i] > tab[i + 1]) {
                    printf("Le tableau n'est pas trie en ordre croissant./n");
                    return 0;
                }
            }
            printf("Le tableau est trie en ordre croissant.\n");
            break;
        case 2:
            for (i = 0; i < n - 1; i++) {
                if (tab[i] < tab[i + 1]) {
                    printf("Le tableau n'est pas trie en ordre decroissant.\n");
                    return 0;
                }
            }
            printf("Le tableau est trie en ordre decroissant.\n");
            break;
        case 3:
            printf("Merci d'avoir utilise ce programme.\n");
            return 0;
        default:
            printf("Veuillez faire un choix valide svp.\n");
            goto start;
    }
    return 0;
}
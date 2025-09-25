#include <stdio.h>

int TrierTableau(int tab[], int n);
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
                    printf("Le tableau n'est pas trie en ordre croissant.\n");
                    TrierTableau(tab, n);
                }
                break;
            }
            printf("Le tableau est trie en ordre croissant.\n");
            break;
        case 2:
            for (i = 0; i < n - 1; i++) {
                if (tab[i] < tab[i + 1]) {
                    printf("Le tableau n'est pas trie en ordre decroissant.\n");
                    TrierTableau(tab, n);
                }
                break;
            }
            printf("Le tableau est trie en ordre decroissant.\n");
            break;
        case 3:
            printf("Merci d'avoir utilise ce programme\n");
            return 0;
        default:
            printf("Veuillez faire un choix valide svp.\n");
            goto start;
    }
    if (n % 2 == 0) {
        int milieu = n / 2;
        printf("La mediane de votre tableau est: %.2f\n", (tab[milieu + 1] + tab[milieu]) / 2);
    }else {
        int milieu = n / 2;
        milieu += 1;
        printf("La mediane de votre tableau est: %d\n", tab[milieu]); 
    }
    return 0;
}
int TrierTableau(int tab[], int n) {
    int i = 0, ValTemp;
    for (i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            printf("Vu que le tableau n'est pas trie nous allons donc le faire.\n");
            for (i = 0; i < n - 1; i++) {
                if (tab[i] > tab[i + 1]) {
                    ValTemp = tab[i];
                    tab[i] = tab[i + 1];
                    tab[i + 1] = ValTemp;
                }
            }
        }
    } 
    printf("Maintenent le tableau est trie nous pouvons continuer.\n");
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (1) {
        printf("Entrez le nombre de données à encoder (ou Ctrl+D pour quitter) : ");
        if (scanf("%d", &n) == EOF) {
            printf("Fin de l'exécution.\n");
            break;
        }

        if (n <= 0) {
            printf("Le nombre d'entiers doit être supérieur à zéro.\n");
            continue;
        }

        int *positifs = NULL;
        int *negatifs = NULL;
        int nbPositifs = 0;
        int nbNegatifs = 0;

        for (int i = 0; i < n; i++) {
            int entier;
            scanf("%d", &entier);

            if (entier >= 0) {
                nbPositifs++;
                positifs = (int *)realloc(positifs, nbPositifs * sizeof(int));
                positifs[nbPositifs - 1] = entier;
            } else {
                nbNegatifs++;
                negatifs = (int *)realloc(negatifs, nbNegatifs * sizeof(int));
                negatifs[nbNegatifs - 1] = entier;
            }
        }

        printf("Entiers positifs :\n");
        for (int i = 0; i < nbPositifs; i++) {
            printf("%d ", positifs[i]);
        }
        printf("\n");

        // Affichage des entiers négatifs
        printf("Entiers négatifs :\n");
        for (int i = 0; i < nbNegatifs; i++) {
            printf("%d ", negatifs[i]);
        }
        printf("\n");

        free(positifs);
        free(negatifs);
    }

    return 0;
}

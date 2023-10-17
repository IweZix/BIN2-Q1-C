#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

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

        int *positifs = (int *)malloc(MAX_SIZE * sizeof(int));
        int *negatifs = (int *)malloc(MAX_SIZE * sizeof(int));
        int *positifs_ptr = positifs;
        int *negatifs_ptr = negatifs;

        for (int i = 0; i < n; i++) {
            int entier;
            scanf("%d", &entier);

            if (entier >= 0) {
                *positifs_ptr = entier;
                positifs_ptr++;
            } else {
                *negatifs_ptr = entier;
                negatifs_ptr++;
            }
        }

        // Affichage des entiers positifs
        printf("Entiers positifs :\n");
        for (int *ptr = positifs; ptr < positifs_ptr; ptr++) {
            printf("%d ", *ptr);
        }
        printf("\n");

        // Affichage des entiers négatifs
        printf("Entiers négatifs :\n");
        for (int *ptr = negatifs; ptr < negatifs_ptr; ptr++) {
            printf("%d ", *ptr);
        }
        printf("\n");

        // Libération de la mémoire allouée
        free(positifs);
        free(negatifs);
    }

    return 0;
}

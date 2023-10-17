#include <stdio.h>

int main(int argc, char **args)
{
    int x = 1;
    int y= 2;
    int t[2] = {3,4};        
    int z = 5;
    int zz = 6;

    printf("x = %d, y= %d, z = %d, zz = %d; t[2] = %d", x, y, z, zz, t[2]);

}

// Problème de ce programme :
// ligne 7 -> on initialise un tableau de taille 2 qui prend 3, 4
// ligne 11 -> on essaye de print la valeur à l'indice 2 du tableau 
// alors qu'il y a que 2 éléments
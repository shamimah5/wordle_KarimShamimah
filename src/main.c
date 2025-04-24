#include <stdio.h>
#include <stdlib.h>
#include "wordle.h"

int main() {
    char mots[MAX_WORDS][MAX_WORD_LEN];
    int nb_mots = charger_mots("ressource/bdd_wordle.txt", mots);

    if (nb_mots == 0) {
        return 1;
    }

    printf("Mots contenant la lettre 'a' :\n");
    int nb_filtres = filtrer_par_lettre(mots, nb_mots, 'a');
    afficher_mots(mots, nb_filtres);

    printf("\nMots ne contenant pas la lettre 'e' :\n");
    nb_filtres = exclure_lettre(mots, nb_filtres, 'e');
    afficher_mots(mots, nb_filtres);

    return 0;
}



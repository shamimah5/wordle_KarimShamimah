#include <stdio.h>
#include <string.h>
#include "wordle.h"

int charger_mots(const char *fichier, char mots[][MAX_WORD_LEN]) {
    FILE *fp = fopen(fichier, "r");
    if (!fp) {
        perror("Erreur d'ouverture du fichier");
        return 0;
    }

    int i = 0;
    while (fgets(mots[i], MAX_WORD_LEN, fp) && i < MAX_WORDS) {
        mots[i][strcspn(mots[i], "\n")] = '\0';
        i++;
    }

    fclose(fp);
    return i;
}

void afficher_mots(char mots[][MAX_WORD_LEN], int nb_mots) {
    for (int i = 0; i < nb_mots; i++) {
        printf("%s\n", mots[i]);
    }
}

int filtrer_par_lettre(char mots[][MAX_WORD_LEN], int nb_mots, char lettre) {
    int j = 0;
    for (int i = 0; i < nb_mots; i++) {
        if (strchr(mots[i], lettre)) {
            strcpy(mots[j++], mots[i]);
        }
    }
    return j;
}

int exclure_lettre(char mots[][MAX_WORD_LEN], int nb_mots, char lettre) {
    int j = 0;
    for (int i = 0; i < nb_mots; i++) {
        if (!strchr(mots[i], lettre)) {
            strcpy(mots[j++], mots[i]);
        }
    }
    return j;
}


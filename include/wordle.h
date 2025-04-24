#ifndef WORDLE_H
#define WORDLE_H

#define MAX_WORDS 10000
#define MAX_WORD_LEN 32

int charger_mots(const char *fichier, char mots[][MAX_WORD_LEN]);
void afficher_mots(char mots[][MAX_WORD_LEN], int nb_mots);
int filtrer_par_lettre(char mots[][MAX_WORD_LEN], int nb_mots, char lettre);
int exclure_lettre(char mots[][MAX_WORD_LEN], int nb_mots, char lettre);

#endif


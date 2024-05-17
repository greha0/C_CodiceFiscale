/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
*/

#ifndef C_CODICEFISCALE_CONTROLS_H
#define C_CODICEFISCALE_CONTROLS_H

int isWord(char str[]);
int isNum(char a);
void deleteReturnKey(char str[]);
void deleteSpace(char str[]);
int numberControl(char str[], int dim);
int monthControl(char str[]);
#endif //C_CODICEFISCALE_CONTROLS_H

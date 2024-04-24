/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
*/

#include <stdio.h>
#include "controls.h"

int main (){

    char surname[30];
    int err=0;

    //richiesta dei dati

    do{
        printf("Insert your surname: ");
        fflush(stdout);

        fgets(surname, 30, stdin); // Prendere il testo

        err=isWord(surname); //Controllo se sono tutte lettere

    }while(err==-1);
}

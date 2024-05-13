/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
 * */

#include <stdlib.h>
#include <stdio.h>
#include "controls.h"

int main (){

    char surname[30];
    char name[30];
    char birth[8];
    int err;

    // Richiesta dei dati

    // COGNOME
    do{
        printf("Insert your surname: ");
        fflush(stdout);

        fgets(surname, 30, stdin); // Prendere il testo
        deleteReturnKey(surname);
        deleteSpace(surname);
        //printf("%s\n", surname);

        err=isWord(surname); // Controllo se sono tutte lettere

    }while(err==-1);

    //NOME
    do{
        printf("Insert your name: ");
        fflush(stdout);

        fgets(name, 30, stdin); // Prendere il testo
        deleteReturnKey(name);
        deleteSpace(name);
        //printf("%s\n", name);

        err=isWord(name); // Controllo se sono tutte lettere

    }while(err==-1);

    //ANNO DI NASCITA
    do{
        printf("Insert your year of birth: ");
        fflush(stdout);

        fgets(birth, 8, stdin); // Prendere il testo
        deleteReturnKey(birth);
        deleteSpace(birth);
        //printf("%s\n", birth);

        err=yearControl(birth);

    }while(err==-1);

}

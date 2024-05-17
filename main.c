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
    char year[8];
    char month[20];
    char day[10];
    char birthplace[50];
    char gender;
    int err;

    // Richiesta dei dati

    // COGNOME
    do{
        printf("Inserisci il tuo cognome: ");
        fflush(stdout);

        fgets(surname, 30, stdin); // Prendere il testo
        deleteReturnKey(surname);
        deleteSpace(surname);
        //printf("%s\n", surname);

        err=isWord(surname); // Controllo se sono tutte lettere

    }while(err==-1);

    //NOME
    do{
        printf("Inserisci il tuo nome: ");
        fflush(stdout);

        fgets(name, 30, stdin); // Prendere il testo
        deleteReturnKey(name);
        deleteSpace(name);
        //printf("%s\n", name);

        err=isWord(name); // Controllo se sono tutte lettere

    }while(err==-1);

    //SESSO
    do{
        printf("Inserisci il tuo genere, (f) femminile o (m) maschile? ");
        scanf("%c", &gender);
        fflush(stdin);
        fflush(stdout);
        //printf("%c\n", gender);

        if((gender == 'm') || (gender == 'f')){
            err=0;
        }else{
            printf("Carattere non valido\n");
            fflush(stdout);

            err= -1;
        }

    }while(err==-1);

    //ANNO DI NASCITA
    do{
        printf("Inserisci il tuo anno di nascita: ");
        fflush(stdout);

        fgets(year, 8, stdin); // Prendere il testo
        deleteReturnKey(year);
        deleteSpace(year);
        //printf("%s\n", birth);

        err=numberControl(year, 4);

    }while(err==-1);

    //MESE DI NASCITA

    do{
        printf("Inserisci il tuo mese di nascita: ");
        fflush(stdout);

        fgets(month, 20, stdin); // Prendere il testo
        deleteReturnKey(month);
        deleteSpace(month);
        //printf("%s\n", month);

        err=isWord(month);

        if(err==0){
            err=monthControl(month);
        }

    }while(err==-1);

    //GIORNO DI NASCITA

    do{
        printf("Inserisci il giorno di nascita: ");
        fflush(stdout);

        fgets(day, 10, stdin); // Prendere il testo
        deleteReturnKey(day);
        deleteSpace(day);
        //printf("%s\n", day);

        err=numberControl(day, 2);

    }while(err==-1);

    //COMUNE DI NASCITA

    do{
        printf("Inserisci CORRETTAMENTE il tuo comune di nascita: ");
        fflush(stdout);

        fgets(birthplace, 50, stdin); // Prendere il testo
        deleteReturnKey(birthplace);
        deleteSpace(birthplace);
        //printf("%s\n", month);

        err=isWord(birthplace);

    }while(err==-1);
}

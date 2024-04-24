/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
*/

#include "controls.h"
#include <stdio.h>

int isLetter(char a){
    if((a>='a' && a<='z')||(a>='A' && a<='Z')){
        return 1; // è una lettera
    }
    return 0; // non è una lettera
}

int isNum (char a){
    if(a>='0' && a<='9'){
        return 1; // è un numero
    }
    return 0; // non è un numero
}

int isWord(char str[]){
    int i;

    for(i=0; str[i]!='\0'; i++){
        if(isNum(str[i])){
            printf("There is a number!\n");
            return -1;
        }
        if(!isLetter(str[i])){
            printf("%c is not allowed\n", str[i]);
            return -1;
        }
    }
    return 0;
}
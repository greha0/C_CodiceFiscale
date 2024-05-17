/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
*/

#include "controls.h"
#include <string.h>
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
            printf("C'è un numero!\n");
            return -1;
        }
        if(!isLetter(str[i])){
            printf("%c non è permesso\n", str[i]);
            return -1;
        }
    }
    return 0;
}

void deleteReturnKey(char str[]){
    unsigned int lenght;

    lenght= strlen(str);

    str[lenght - 1] = '\0';
}

void deleteSpace(char str[]){

    int i, k;

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            for(k=i; str[k]!='\0'; k++){
                str[k]=str[k+1];
            }
        }
    }
}

int numberControl(char str[], int dim){
    unsigned int lenght;

    lenght=strlen(str);

    for(int i=0; i<lenght; i++) {
        if (!isNum(str[i])) {
            printf("C'è una lettera!\n");
            return -1;
        }
    }

    if(lenght>dim){
        printf("Il numero inserito è troppo lungo!\n");
        return -1;
    }

    if(lenght<dim){
        printf("Il numero inserito è troppo corto!\n");
        return -1;
    }

    return 0;
}

int monthControl(char str[]){
    if(str == ){
        printf("Mese inserito correttamente");
    }
    return 0;
}
//
// Created by I3AI3 on 31/05/2024.
//

#include "codicefiscale.h"
#include <ctype.h>

int isConsonant(char c){
    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')){
        return 0;
    }
    return 1;
}

void inizializzaArray(char str[]){
    for(int i=0; str[i]!='\0'; i++){
        str[i]='0';
    }
}


void arrayCons(char str[], char cons[]){
    int i;
    int cont=0;

    for(i=0; str[i]!='\0'; i++){
        if(isConsonant(str[i])){
            cons[cont]=str[i];
            cont++;
        }
    }
}

void arrayVoc(char str[], char vocal[]){
    int i;
    int cont=0;

    for(i=0; str[i]!='\0'; i++){
        if(!isConsonant(str[i])){
            vocal[cont]=str[i];
            cont++;
        }
    }
}




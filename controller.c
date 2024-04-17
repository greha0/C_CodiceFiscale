/*
 * Greta Maria Brugnatti
 * 3AII
 * CODICE FISCALE
 *
 * */

#include "controller.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int takeTheData(int a, char name[]){
    if(a == 1){
        fgets(name, 100, stdin);


        if(strcspn(name, "\n") == 0){
            printf("ERROR\n");
        }
    }
}

#include <stdio.h>

int main(){
    int myArray[8][8];
    
    for(int zeile = 0; zeile < 8; zeile++) {
        for(int spalte = 0; spalte < 8; spalte++) {
            myArray[zeile][spalte] = (zeile+1) * 10 + spalte+1;
        }
    }
    
    //Ausgabe mit Array
    
    printf("Ausgabe über Array\n");
    
    for(int zeile = 0; zeile < 8; zeile++) {
        for(int spalte = 0; spalte < 8; spalte++) {
            printf("%d ", myArray[zeile][spalte]);
        }
        printf("\n");
    }
    
    //Ausgabe über Pointer
    
    int *pointerArray;
    pointerArray = myArray;
    
    printf("\nAusgabe über Pointer\n");
    
    for(int zeile = 0; zeile < 8; zeile++) {
        for(int spalte = 0; spalte < 8; spalte++) {
            printf("%d ", *pointerArray++);
        }
        printf("\n");
    }
}

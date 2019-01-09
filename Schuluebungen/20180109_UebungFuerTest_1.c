#include <stdio.h>

int main() {
    int length = 3;
    int array[length];

    // Werte einlesen
    for(int i = 0; i < length; i++) {
        printf("Eingabe: \n");
        scanf("%d", &array[i]);
    }

    printf("\nAusgabe: ");
    
    // Werte ausgeben
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\nAusgabe umgekehrt: ");
    
    // Werte umgekehrt ausgeben
    for(int i = length; i >= 1; i--) {
        printf("%d ", array[i-1]);
    }
}

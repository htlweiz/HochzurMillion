#include <stdio.h>

void createArray(int *array, int length) {
    srand(time(0));
    
    for(int i = 0; i < length; i++)
    {
        int rng = rand();
        array[i] = rng%100;
    }
}

void showArrayInConsole(int *array, int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

void showArrayReverseInConsole(int *array, int length) {
    for(int i = length; i >= 1; i--) {
        printf("%d ", array[i-1]);
    }
}

int sumArray(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + array[i];
    } return sum;
}

int avgArray(int *array, int length) {
    int sum = 0;
    for(int i = 0; i < length; i++) {
        sum = sum + array[i];
    } return sum/length;
}


int main() {
    int length = 10;
    int numbers[length];

    
    createArray(numbers,length);
    printf("Ausgabe: \n");
    showArrayInConsole(numbers, length);
    printf("\nAusgabe umgekehrt:\n");
    showArrayReverseInConsole(numbers, length);
    printf("\n\nSumme der Zahlen: %d", sumArray(numbers, length));
    printf("\nMittelwert der Zahlen: %d", avgArray(numbers, length));
    
    return 0;
}

#include <stdio.h>
#include <string.h>

void createArray(int Array[], int length) {
    srand(time(0));
    for(int i = 0; i < length; i++) {
        int rng = rand();
        Array[i] = rng%100;
    }
}

void showArrayInConsole(int *Array, int length) {
    for(int i = 0; i < length; i++) {
        printf("%d ", Array[i]);
    }
}

void bubbleSort(int *Array, int position) {
    for() {
        
    }
}



int main()
{
    int length = 10;
    int numbers[length];

    
    createArray(numbers, length);
    printf("Array mit %d zufaelligen Zahlen:\n", length);
    showArrayInConsole(numbers, length);
    bubbleSort(numbers, length);
    printf("\nArray mit %d zufaelligen Zahlen sortiert:\n", length);
    showArrayInConsole(numbers, length);
    
    return 0;
}

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

void bubbleSort(int *Array, int length) {
    int temp = 0;
    int getauscht = 0;
    for(int d = 0;d < length-1; d++) {
        getauscht = 0;
        for(int v = 0; v < length-1-d; v++) {
            if(Array[v] > Array[v+1]) {
                temp = Array[v];
                Array[v] = Array[v+1];
                Array[v+1] = temp;
                getauscht = 1;
            }
        } if(getauscht == 0) {
            break;
        }
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

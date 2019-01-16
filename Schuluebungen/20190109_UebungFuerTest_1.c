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

void differFromAvg(int * array, int length, int average) {
    int result = 0;
    for(int i = 0; i < length; i++) {
        if((array[i]*0.8) > average || (array[i]*1.2) < average) {
            array[i] = average;
        }
        printf("%d ", array[i]);
    }
}

int maxArray(int * array, int length) {
    int max = array[0];
    for (int i = 0; i < length; i++) {
       if (array[i] > max) {
           max = array[i];
       }
   } return max;
}

int minArray(int * array, int length) {
    int min = array[0];
    for (int i = 0; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    } return min;
}

int main() {
    int length = 10;
    int numbers[length];

    
    createArray(numbers,length);
    printf("Array: \n");
    showArrayInConsole(numbers, length);
    printf("\nArray reverse:\n");
    showArrayReverseInConsole(numbers, length);
    printf("\n\nMin: %d", minArray(numbers, length));
    int average = avgArray(numbers, length);
    printf("\nAvg: %d\n", average);
    printf("Max: %d\n", maxArray(numbers, length));
    printf("Sum: %d\n", sumArray(numbers, length));
    printf("\nArray without statistical outliers: \n");
    differFromAvg(numbers, length, average);
    
    return 0;
}

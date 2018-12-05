#include <stdio.h>
#include <string.h>

void createArray(int *Array, int length) {
    //srand(time(0)); for random
    int rng = rand();
    Array[length] = rng;
}

void showArrayInConsole(int *Array, length) {
    printf("Array: %s\nLength: %s\n", Array, length)
}

void switchNumbers(int *Array, int position) {
    
}



int main()
{
    int numbers[];
    int length = 10;
    
    createArray(numbers, length);
    showArrayInConsole(numbers, length);
    
    return 0;
}

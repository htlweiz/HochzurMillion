#include <stdio.h>
#include <string.h>

void createArray(int *Array, int length)
{
    srand(time(0));
    for(int i = 0; i < length; i++)
    {
        int rng = rand();
        Array[i] = rng%100;
    }
}

void showArrayInConsole(int *Array, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", Array[i]);
    }
}

void bubbleSort(int *Array, int length)
{
    int temp = 0;
    int swaped = 0;
    for(int d = 0; d < length-1; d++)
    {
        swaped = 0;
        for(int i = 0; i < length-1-d; i++)
        {
            if(Array[i] > Array[i+1])
            {
                temp = Array[i];
                Array[i] = Array[i+1];
                Array[i+1] = temp;
                swaped = 1;
            }
        }
        
        if(swaped == 0)
        {
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
    
    printf("\n\nMaximalzahl der nötigen Vergleiche wäre (%d-1)*(%d-1) = %d\n", length, length, (length-1)*(length-1));
    printf("Verbesserte Version (pro Durchlauf 1 Vergleich weniger) wäre (%d + %d + %d + ... + 3 + 2 + 1) = %d\n", length-1, length-2, length-3, (length/2)*(1+length));
    
    return 0;
}

#include <stdio.h>
#include <string.h>

void createArray(int *array, int length)
{
    srand(time(0));
    
    for(int i = 0; i < length; i++)
    {
        int rng = rand();
        array[i] = rng%100;
    }
}

void showArrayInConsole(int *array, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

void pankiSwap(int *array, int i)
{
    int temp = 0;
    temp = array[i];
    array[i] = array[i+1];
    array[i+1] = temp;
}    

int bubbleSort(int *array, int length)
{
    int temp = 0;
    int swaped = 0;
    int numSwaps = 0;
    
    for(int d = 0; d < length-1; d++)
    {
        swaped = 0;
        for(int i = 0; i < length-1 - d; i++)
        {
            if(array[i] > array[i+1])
            {
                pankiSwap(array, i);
                swaped = 1;
            }
            numSwaps++;
        }
        
        if(swaped == 0)
        {
            break;
        }
    }
    return numSwaps;
}

int main()
{
    int length = 10;
    int numbers[length];
    int numCompare = 0;
    int gaus = (length/2)*(1+length);
    
    createArray(numbers, length);
    printf("Array mit %d zufaelligen Zahlen:\n", length);
    showArrayInConsole(numbers, length);
    
    numCompare = bubbleSort(numbers, length);
    
    printf("\nArray mit %d zufaelligen Zahlen sortiert:\n", length);
    showArrayInConsole(numbers, length);
    
    printf("\n\nMaximalzahl der nötigen Vergleiche wäre (%d-1)*(%d-1) = %d\n", length, length, (length-1)*(length-1));
    printf("Verbesserte Version (pro Durchlauf 1 Vergleich weniger) wäre (%d + %d + %d + ... + 3 + 2 + 1) = %d\n", length-1, length-2, length-3, gaus);
    printf("Tatsächlich benötigte Vergleiche (Ausstieg mit break, wenn fertig sortiert): %d\n", numCompare);
    
    return 0;
}

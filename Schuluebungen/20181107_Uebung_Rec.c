#include <stdio.h>

int sumNumbers(int value) {
	int sum = 0;
	for(int i = 0; i <= value; value--) {
		sum = sum + value;
	} return sum;
}

int sumNumbersRec(int value) {

    if(value) {
        return value + sumNumbersRec(value-1);
    } else {
		return 0;
	}
}

int sumNumbersArray(int numbers[], int length){
	int sum = 0;
	for(int i = 0; i < length; i++){
		sum = sum + numbers[i];
	} return sum;
}

int sumNumbersArrayRec(int numbers[], int length )
{
	if (length) {
		return numbers[length-1] + sumNumbersArrayRec(numbers, length-1);
	} else {
		return 0;
	}
}

int main(){
	int myArray[] = {1,2,3,4,5};
	int myArray_length = 5;
	int value = 5;
	
	printf("---Integer---\nsumNumbers: %d\n", sumNumbers(value));
	printf("sumNumbersRec: %d\n", sumNumbersRec(value));
	printf("\n---Array---\nsumNumbersArray: %d\n", sumNumbersArray(myArray, myArray_length));
	printf("sumNumbersArrayRec: %d\n", sumNumbersArrayRec(myArray, myArray_length));
}

#include <stdio.h>

int sumNumbers(int value) {
	int sum = 0;
	for(int i = 0; i <= value; value--) {
		sum = sum + value;
	} return sum;
}

int sumNumbersRec(int value, int sum) {

    if(value) {
        sum = value + sumNumbersRec(value -1, sum);
    } return sum;
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
	
	printf("Integer: sumNumbers: %d\n", sumNumbers(value));
	printf("Integer: sumNumbersRec: %d\n", sumNumbersRec(value,0));
	printf("Array: sumNumbersArray: %d\n", sumNumbersArray(myArray, myArray_length));
	printf("Array: sumNumbersArrayRec: %d\n", sumNumbersArrayRec(myArray, myArray_length));
}

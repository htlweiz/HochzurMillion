#include <stdio.h>

int summe(int value) {
	int sum = 0;
	for(int i = 0; i <= value; value--) {
		sum = sum + value;
	} return sum;
}

int summeRec(int value, int sum) {

    if(value) {
        sum = value + summeRec(value -1, sum);
    } return sum;
}

int sumNumbers(int numbers[], int length){
	int sum = 0;
	for(int i = 0; i <= length; i++){
		sum = sum + numbers[i];
	}
	return sum;
}

int sumNumbersRec(int numbers[], int length )
{
    if (length) {
        return (numbers[length] + sumNumbersRec(numbers,length-1));
    } return numbers[0];
}

int main(){
	int myArray[] = {1,2,3,4,5};
	int value = 5;
	
	printf("Summe: %d\n", summe(value));
	printf("Summe Rec: %d\n", summeRec(value,0));
	printf("Array: sumNumbers: %d\n", sumNumbers(myArray, 4));
	printf("Array: sumNumbersRec: %d\n", sumNumbersRec(myArray, 4));
}

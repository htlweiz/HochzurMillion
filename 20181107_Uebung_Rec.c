#include <stdio.h>

int sumNumbers(int numbers[], int length){
	int sum = 0;
	for(int i = 0; i < length; i++){
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
	
	printf("sumNumbers: %d\n", sumNumbersRec(myArray, 4));
	printf("sumNumbersRec: %d\n", sumNumbersRec(myArray, 4));
}

#include <stdio.h>
#include <string.h>

void umdrehen(char * myArray) {
    int i,j,length;
    char temp;
    i = j = temp = 0;
    length = strlen(myArray);
    
	for(i = 0, j = length-1; i <= j; i++, j--){
		temp = myArray[i];
		myArray[i] = myArray[j];
		myArray[j] = temp;
	}
}

int main() {
	char testArray[] = "123456789";
	
	printf("Original:\t%s\n", testArray);
	umdrehen(testArray);
	printf("Umgedreht:\t%s\n", testArray);
	
	return 0;
}

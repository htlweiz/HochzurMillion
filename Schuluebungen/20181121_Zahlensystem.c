#include <stdio.h>
#include <math.h>

int toTen(int value, int basis) {
    int temp = value % 10;
	int digit1 = temp;

	value = value - temp;
	temp = value % 100;
	int digit2 = temp / 10;

	value = value - temp;
	temp = value % 1000;
	int digit3 = temp / 100;
	
	int result = digit3 * pow(basis, 2) + digit2 * pow(basis, 1) + digit1 * pow(basis, 0);
	return result;
}

int fromTen(int value, int basis) {
    return 0;
}

int main() {
	int value = 0;
	int basis = 0;
	
	printf("Startwert: \n");
	scanf("%d",&value);
	printf("Basis: \n");
	scanf("%d",&basis);
	
	printf("Result: %d\n", toTen(value, basis));
}

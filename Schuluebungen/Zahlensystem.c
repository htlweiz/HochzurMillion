#include <stdio.h>
#include <math.h>

int main() {
	int value = 0;
	int basis = 0;
	int temp = 0;
	int digit1 = 0;
	int digit2 = 0;
	int digit3 = 0;
	int result = 0;
	
	printf("Startwert: \n");
	scanf("%d",&value);
	printf("Basis: \n");
	scanf("%d",&basis);
	
	temp = value % 10;
	digit1 = temp;

	value = value - temp;
	temp = value % 100;
	digit2 = temp / 10;

	value = value - temp;
	temp = value % 1000;
	digit3 = temp / 100;
	
	result = digit3 * pow(basis, 2) + digit2 * pow(basis, 1) + digit1 * pow(basis, 0);
	printf("Result: %d\n", result);
}

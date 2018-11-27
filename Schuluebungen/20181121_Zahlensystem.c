#include <stdio.h>
#include <string.h>
/*
string.h:

strcat (char * a, char * b)         ---> hängt string b an string a an          a = a + b

strncat (char * a, char * b, int n) ---> hängt n Zeichen von b an string an     a = a + b0 + b1 + b2

strcpy (char * a, char * b,)        ---> copiert string b auf string auf        a = b

strncpy (char * a, char * b, int n) ---> copiert n Zeichen von b auf a          a = b0 + b1 + b2


strings in C sind 0-terminiert:

char text[] = "hallo";  ---> legt einen String der Länge 6 an (das Ende-Zeichen "\0" wird automatisch angehängt)
     text[0] = 'h';
     text[1] = 'a';
     text[2] = 'l';
     text[3] = 'l';
     text[4] = 'o';
     text[5] = '\0';
*/
#include <math.h>

char getDigit(int value) {
    if(value > 9) {
        return (char) (value - 10 + 'A'); //A hat den ASCII Wert 65
    } else {
        return (char) (value + '0'); //0 hat den ASCII Wert 48
    }
}

int getValue(char digit) {
    if(digit >= 'A') {
        return (int) (digit - 'A' + 10);
    } else {
        return (int) (digit - '0');
    }
}

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

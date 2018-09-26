#include <stdio.h>

int main()
{
    int start = 0;
    int result = 0;
    
    printf("Geben Sie einen Startwert ein: ");
    scanf("%d",&start);
    result = start;
    printf("Wir rechnen einen Turm mit dem Startwert %d\n", start);
    
    for(unsigned int i=1; i<=10; i++){
        int tmpResult = result * i;
        printf("%d * %d = %d\n", result, i, tmpResult);
        result = tmpResult;
    }
    
    for(unsigned int i=1; i<=10; i++){
        int tmpResult = result / i;
        printf("%d / %d = %d\n", result, i, tmpResult);
        result = tmpResult;
    }
    
    if(result == start) {
        printf("Juhu es passt\n");
    } else {
        printf("Geh Fehler suchen!\n");
    }
}

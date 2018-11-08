#include<stdio.h>

int main()
{
    char Array[3][10] = {"Vorname", "Name", "Nachname"};

    for(int i = 0; i < 3; i++)
    {
        printf("%s ", Array + i);
    }
    return 0;
}

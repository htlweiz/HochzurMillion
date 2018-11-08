#include<stdio.h>

int main()
{
    char Array[3][10] = {"Kai", "Markus", "Neuper"};

    for(int i = 0; i < 3; i++)
    {
        printf("%s ", Array + i);
    }
    return 0;
}

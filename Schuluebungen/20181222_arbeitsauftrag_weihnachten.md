bubble sort, minsort und quicksort
dauer in ticks vergleichen sortiert und unsortiert


include <time.h>

clock_t start, finish;

start = clock();
passiert die funktion
finish = clock();

printf("dauer: %d", finish-start)

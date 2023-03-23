#include <stdio.h>
#include <time.h>
#define N 20

int main () {

    int i;
    float vt[N], *punt=vt;

    for(i = 0;i<N; i++)
    {
        *punt=1 + rand()%100;
        printf("\n%.2f", *punt);

        punt++;
    }

    return 0;
}
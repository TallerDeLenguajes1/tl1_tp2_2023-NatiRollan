// codigo a completar
#include <stdio.h>
#include <time.h>
#define N 20

int main () {

    int i;
    float vt[N];
    for(i = 0;i<N; i++)
    {
        vt[i]=1 + rand()%100;
        printf("\n%.2f", vt[i]);
    }

    return 0;
}

#include <stdio.h>
#define N 5

int main(void)
{
    int i,t;
    t=0;
    int Array[N]={0};
    for ( i = 0; i < N; i++ ) {
        Array[i]=i+1;
    }
    for ( i = 0; i < N/2; i++ ) {
        t=Array[i];
        Array[i]=Array[N-i-1];
        Array[N-i-1]=t;
    }
    for ( i = 0; i < N; i++ ) {
        printf( "%d  ",Array[i]);
    }
    return 0;
}
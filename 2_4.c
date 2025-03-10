#include <stdio.h>
#define N 5

int main(void)
{
    int i, j,cout,d_i,d_j;
    int Array[N][N]={0};
    i=0;
    j=0;
    d_i=0;
    d_j=1;
    for(cout=1; cout<N*N+1; cout++)
    {
        Array[i][j]=cout;
        i=i+d_i; 
        j=j+d_j;
        if ((Array[i][j-1]!=0) && (Array[i-1][j]!=0))
        {
            d_i=0; d_j=1;
        }
        if (((i-1<0) || (Array[i-1][j]!=0)) && ((j+1>N-1) || (Array[i][j+1]!=0)))
        {
            d_i=1; d_j=0;
        }
        if (((i+1>N-1) || (Array[i+1][j]!=0)) && ((j+1>N-1) || (Array[i][j+1]!=0)))
        {
            d_i=0; d_j=-1;
        }
        if ((i+1>N-1) && (j-1<0) || ((Array[i][j-1]!=0) && (Array[i+1][j]!=0) && (Array[i-1][j]==0)))
        {
            d_i=-1; d_j=0;
        }
    }
    for ( i = 0; i < N; i++ ) {
        for ( j = 0; j < N; j++ )
        {
            printf( "%d\t",Array[i][j] );
        }
    printf( "\n" );
    }
    return 0;
}
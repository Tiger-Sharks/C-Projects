#include <stdio.h>

int main()
{
    int N, R1, R2, R3, R4, res;

    printf("Enter an Integer:  ");
    scanf("%d", &N);

    R1 = N % 10;
    N = N / 10;
    R2 = N % 10;
    N = N / 10;
    R3 = N % 10;
    N = N / 10;
    R4 = N % 10;
    N = N / 10;
    
    res = R1 * 10000 + R2 * 1000 + R3 * 100 + R4 * 10 + N;
    
    printf("The Reverse of the Number Entered is = %d", res);
    
    return 0;
}
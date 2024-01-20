// file name: test_cases_3.c
// user name: xmsfgp
// problem lvl: easy
// created at: 2024-01-20 19:02:43
#include <stdio.h>

int main()
{
    int t;
    int A, B, C, D, E;
    int i = 1;
    scanf("%d", &t);
    while(i <= t)
    {
        scanf("%d %d", &A, &B);
        scanf("%d %d %d", &C, &D, &E);
        printf("%d %d %d %d %d\n", A, B, C, D, E);
        i = i+1;
    }
}
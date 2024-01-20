// file name: test_cases_4.c
// user name: xmsfgp
// problem lvl: easy
// created at: 2024-01-20 19:12:14
#include <stdio.h>

int main()
{
    int t;
    int A, B;
    char C[30];
    int i = 1;

    scanf("%d", &t);
    while(i <= t)
    {
        scanf("%d %d", &A, &B);
        scanf("%s", C);
        printf("%d %d %s\n", A, B, C);
        i = i +1;
    }
}
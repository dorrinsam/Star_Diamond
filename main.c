#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int r = (n + 1) / 2;
    int i, j;
    if(n % 2 != 0)
    for(i = 1; i <= r; i++){
        for(j = 1; j <= r - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        for(j = 1; j <= 2 * (r - i); j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for(i = 1; i <= r - 1; i++){
        for(j = 1; j <= i; j++)
            printf(" ");
        for(j = 1; j <= n - 2 * i; j++)
            printf("*");
        for(j = 1; j <= 2 * i; j++)
            printf(" ");
        for(j = 1; j <= n - 2 * i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

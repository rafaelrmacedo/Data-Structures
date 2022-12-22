#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define N 1001
#define logic char

void main()
{
    int n, i, j, d;
    logic vet[N];
    printf("Type a number: ");
    scanf("%d", &n);
    printf("\n");

    if (n <= 0 || n >= N)
        printf("Incompatible data");
    else
    {
        for (i = 1; i <= n; i++)
            vet[i] = TRUE;
        d = 1;
        while (d * d <= n)
        {
            for (d++; vet[d] = FALSE; d++)
                ;
            for (j = d * d; j <= n; j += d)
                vet[j] = FALSE;
        }
    }
    for (i = 1, j = 0; i <= n; i++)
    {
        if (vet[j] == TRUE)
        {
            printf("%10d", i);
            j++;
            if (j % 5 == 0)
                printf("\n");
        }
    }
}
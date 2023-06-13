#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][3], a, b, s;
    printf("Qual o valor da matriz?:\n\n");
    for(int a = 0; a<2; a++)
    {
        for(int b = 0; b < 3; b++)
        {
            printf("Posição[%d][%d] = ", a, b);
            scanf("%d", &m[a][b]);
        }
    }
    printf("\nSua matriz é:\n\n");
    for(a = 0; a < 2; a++)
    {
        for(b = 0; b<3; b++)
        {
            printf(" %d ", m[a][b]);
            s+=m[a][b];
        }
        printf("\n");
    }
    printf("\nSomando: %d\n", s);

    return 0;
}

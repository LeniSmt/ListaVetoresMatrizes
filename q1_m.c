#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3], a, b;
    printf("Quais os valores da matriz?:\n");
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b<3; b++)
        {
            printf("Posição[%d][%d] = ", a, b);
            scanf("%d", &m[a][b]);
        }
    }
    printf("\nSua matriz é:\n");
    for (a = 0; a < 3; a++)
    {
        for (b = 0; b<3; b++)
        {
            printf("%d ", m[a][b]);
        }
        printf("\n");
    }

    return 0;
}

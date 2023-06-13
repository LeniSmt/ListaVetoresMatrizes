#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3], a, b;
    
    printf("Qual o valor da matriz?:\n\n");
    for(int a = 0; a<3; a++)
    {
        for(int b = 0; b<3; b++)
        {
            printf("Posição[%d][%d] = ", a, b);
            scanf("%d", &m[a][b]);
        }
    }
    printf("\nSua matriz é:\n\n");
    for(a = 0; a<3; a++)
    {
        for (b = 0; b<3; b++)
        {
            printf(" %d ", m[a][b]);
        }
        printf("\n");
    }
    printf("\nmultiplicando por 2:\n\n");
    for(a = 0; a < 3; a++)
    {
        for(b = 0; b<3; b++)
        {
            printf("%d\t", m[a][b]*2);
        }
        printf("\n");
    }   

    return 0;
}

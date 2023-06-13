#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M[3][3], A, B, soma;
    printf("Qual a sua matriz?:\n");
    for(int A = 0; A<3; A++)
    {
        for(int B = 0; B<3; B++)
        {
            printf("Posição[%d][%d] = ", A, B);
            scanf("%d", &M[A][B]);
        }
    }
    printf("\nSua matriz é:\n\n");
    for(A = 0; A<3; A++)
    {
        for(B = 0; B<3; B++)
        {
            if(A != B)
            {
                printf("%d\t", M[A][B]);
            } 
            else 
            {
                printf(" \t");
            }
        }
        printf("\n");
    }

    return 0;
}

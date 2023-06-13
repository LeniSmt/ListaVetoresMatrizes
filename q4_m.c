/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4], a, b, soma;
    printf("Quais os valores da matriz?:\n");
    for (int a = 0; a<4; a++)
    {
        for (int b = 0; b<4; b++)
        {
            printf("Posição[%d][%d] = ", a, b);
            scanf("%d", &m[a][b]);
        }
    }
    printf("\nSua matriz é:\n\n");
    for (a = 0; a<4; a++)
    {
        for (b = 0; b<4; b++)
        {
            printf(" %d ", m[a][b]);
            soma+=m[a][b];
        }
        printf("\n");
    }
    printf("\n\nDiagonal: ");
    for(a = 0; a<4; a++)
    {
        printf("%d ", m[a][a]);
    }

    return 0;
}

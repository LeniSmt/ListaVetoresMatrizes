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
    int v[10], i;
    
    printf("Diga 10 valores:\n\n");
    for (i = 0; i<10; i++) 
    {
        printf("Número %d: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Os valores ímpares são: ");
    for (i = 0; i<10; i++) 
    {
        if (v[i] %2 !=0) 
        {
            printf("  \n%d", v[i]);
        }
    }
    printf("\n");

    return 0;
}

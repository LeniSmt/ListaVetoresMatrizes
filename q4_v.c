/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int p(int num)
{
    int i;

    if(num<=1) 
    {
        return 0;
    }
    for(i = 2; i<=num/2; i++) 
    {
        if(num % i == 0) 
        {
            return 0;
        }
    }

    return 1;
}

int main() 
{
    int v[10];
    int i;

    
    printf("Digite 10 números:\n\n");
    for (i = 0; i<10; i++) 
    {
        printf("Número %d: ", i+1);
        scanf("%d", &v[i]);
    }

    
    printf("\nOs números primos são: ");
    for (i = 0; i<10; i++) 
    {
        if(p(v[i])) 
        {
            printf("\n%d ", v[i]);
        }
    }
    printf("\n");

    return 0;
}

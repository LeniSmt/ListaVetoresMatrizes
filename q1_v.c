/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, maior;
    
    printf("Digite 10 números:\n");
    for (i = 0; i<10; i++)
    {
        printf("Número %d: ", i+1);
        scanf("%d", &v[i]);
    }
    maior=v[0];
    for(i = 1; i<10; i++) 
    {
        if(v[i]>maior) 
        {
            maior=v[i];
        }
    }
    printf("O maior número dito foi: %d\n", maior);

    return 0;
}

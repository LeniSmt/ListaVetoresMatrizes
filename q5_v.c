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
    int v[8], num, i, posi = -1;
    
    printf("Digite 8 números inteiros:\n\n");
    for(i = 0; i<8; i++) 
    {
        printf("Posição %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nDigite um número entre os oito escolhidos: ");
    scanf("%d", &num);

    for(i = 0; i<8; i++) 
    {
        if(v[i]==num) 
        {
            posi=i;
            break;
        }
    }
    if(posi !=-1) 
    {
        printf("\nO número %d está nessa posição %d.", num, posi);
    } 
    else 
    {
        printf("\nO número %d não está na lista.", num);
    }

    return 0;
}

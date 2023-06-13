#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10], i, ma, me;
    
    printf("Digite 10 números:\n\n");
    for (i = 0; i<10; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    ma=v[0];
    me=v[0];
    for (i = 1; i<10; i++) 
    {
        if (v[i]>ma) 
        {
            ma=v[i];
        }
        if (v[i]<me) 
        {
            me=v[i];
        }
    }
    printf("\nO maior número lido foi: %d\n", ma);
    printf("\nO menor número lido foi: %d\n", me);
    printf("\nA diferença entre eles dois é: %d\n", ma-me);

    return 0;
}

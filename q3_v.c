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

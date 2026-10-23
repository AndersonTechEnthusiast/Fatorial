#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int fatorial;
    int resultado = 1;
    printf("📌 Fatorial: ");
    scanf("%d",&fatorial);

    while(fatorial >= 1)
    {
        resultado = resultado * fatorial;
        
        if(fatorial == 1)
        {
            printf("%d = %d",fatorial,resultado);
        }
        else
        {
            printf("%d x ",fatorial);
        }
        fatorial = fatorial - 1;
    }
}
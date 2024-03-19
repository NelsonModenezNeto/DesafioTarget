#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    scanf("%d",&i);
    if (fibonnati(i))
        printf("%d pertence a sequencia de Fibonacci.\n", i);
    else
        printf("%d nao pertence a sequencia de Fibonacci.\n", i);

    return 0;
}
int fibonnati(int i){
    int b = 1, a = 0, antigoValor;
    while(b<=i){
        if(b==i){
            return 1;
        }
        antigoValor = b;
        b = a+b;
        a = antigoValor;
    }
    return 0;
}

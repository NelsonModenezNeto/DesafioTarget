#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[1000];
    scanf("%s",&palavra);
    inverter(palavra);
    printf("%s", palavra);
    return 0;
}

void inverter(char palavra[1000]){
    int indI = 0, indF;
    indF = strlen(palavra) - 1;
    while(indI < indF)
    {
        char caracter;
        caracter = palavra[indI];
        palavra[indI] = palavra[indF];
        palavra[indF] = caracter;
        indI++;
        indF--;

    }
    return 0;
}

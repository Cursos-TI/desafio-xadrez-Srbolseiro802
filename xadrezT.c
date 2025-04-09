#include <stdio.h>
int main(){

// movimento das peças de xadrez //

// movimento de 5 casas pra direita da torre //

printf("Movimento pela direita da torre.\n");

for (int i = 0; i < 5; i++)
{
 printf("direita\n");
}
 
// movimento do de 5 casas na diagnoal pra direita do  bispo //

printf("movimento em Diagonal do bispo.\n");
for(int i = 0; i < 5; i++)
{
    printf("cima direita\n");
}
// movimento de 8 casas para esquerda da rainha //

printf("Movimento da rainha\n");

for(int i = 0; i < 8; i++)
{
    printf("esquerda\n");
}

// movimento em L do cavalo //
printf("Movimento em L do cavalo.\n");
for(int i = 0; i < 2; i++)
{
    printf("Baixo.\n");
}
 printf("Esquerda.\n");


return 0;
}
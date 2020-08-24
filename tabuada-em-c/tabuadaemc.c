
#include <stdlib.h>
#include <stdio.h>
int acerto = 0;
int e=1;
int main()
{
   do{


    int tabuada;
    printf("Digite o valor da tabuada que voce quer trabalhar\n");
    scanf("%d",&tabuada);
    int calculartabuada();
calculartabuada(tabuada);
if(tabuada==51)
e=2;
   }
while(e==1);
    return 0;
}

int calculartabuada(tabuada){
    int respostacerta[10],resposta[10];

    if(tabuada>10)
{

     printf("digite o valor entre 10 e 1\n");
     return acerto;
}

     if(tabuada<0)
{

     printf("digite o valor entre 10 e 1 \n");
      return acerto;
}


    for(int contador = 0 ;contador<=10;contador ++){
        printf("%dx%d=",tabuada,contador);
        scanf("%d",&resposta[contador]);


        respostacerta[contador]= tabuada*contador;


        if(resposta[contador]==respostacerta[contador])
        {
         printf("voce acertou !!!\n");
         acerto++;
        }
        else
        printf("voce errou\n");

        printf("acertos=%d \n",acerto);


    }
    printf("digite o numero 51 para interromper o código \n");
    return acerto;
}

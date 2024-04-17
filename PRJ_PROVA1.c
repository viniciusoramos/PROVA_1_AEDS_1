/* PROVA 1 AEDS 1 
ALUNO: VINICIUS OLIVEIRA RAMOS */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));
int portaPremiada = rand() % 3 + 1;
int portaescolhida, portavazia;
char trocarporta;
printf("%d", portaPremiada); // Numero da porta sorteada para facilitar teste
printf("\n\nBEM VINDO AO JOGO MONTY HALL!\n");
printf("ESCOLHA UMA PORTA DE 1 A 3: ");
scanf("%d", &portaescolhida);

//Opçoes possiveis para verficar porta vazia

if(portaescolhida == 1 && portaPremiada == 2){
    portavazia = 3;
    printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 1 && portaPremiada == 1){
    portavazia = 2;
    printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 1 && portaPremiada == 3){
    portavazia = 2;
        printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 2 && portaPremiada == 1){
    portavazia = 3;
        printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 2 && portaPremiada == 2){
    portavazia = 1;
    printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 2 && portaPremiada == 3){
    portavazia = 1;
        printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 3 && portaPremiada == 1){
    portavazia = 2;
        printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 3 && portaPremiada == 3){
    portavazia = 1;
    printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}
else if(portaescolhida == 3 && portaPremiada == 2){
    portavazia = 1;
        printf("\nFoi aberta a porta %d ela esta vazia", portavazia);
}

// Menu para trocar de porta

printf("\nVOCE DESEJA TROCAR A PORTA ESCOLHIDA?");
printf("\nDigite:\nSIM = s\nNAO = n\n");
fflush (stdout);
scanf(" %c",&trocarporta);

//Opçoes para troca de porta

switch(trocarporta)
{
case 's':
    if(portaescolhida == 1 && portavazia == 2){
        portaescolhida = 3;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    else if(portaescolhida == 1 && portavazia == 3){
        portaescolhida = 2;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    else if(portaescolhida == 2 && portavazia == 1){
        portaescolhida = 3;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    else if(portaescolhida == 2 && portavazia == 3){
        portaescolhida = 1;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    else if(portaescolhida == 3 && portavazia == 2){
        portaescolhida = 1;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    else if(portaescolhida == 3 && portavazia == 1){
        portaescolhida = 2;
        printf("\nNova porta escolhida: %d", portaescolhida);
    }
    break;

default:
    printf("\nVOCE MANTEVE SUA ESCOLHA.");
    break;
}
//Verificação para mostrar se o jogador venceu.

if(portaescolhida == portaPremiada){
    printf("\nVOCE GANHOU!! A PORTA PREMIADA ERA: %d", portaPremiada);
}
else {
    printf("\nVOCE PERDEU! A PORTA PREMIADA ERA: %d", portaPremiada);
}

return 0;
}

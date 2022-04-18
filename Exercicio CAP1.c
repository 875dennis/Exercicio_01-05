#define ex5
#include "stdio.h"
#include <locale.h>


#ifdef ex1
/*1 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.
    */
void main()
{
setlocale(LC_ALL,"");

int numero,menorMultiplo,resultado;

printf("Digite um número: ");
scanf("%d",&numero);

printf("\nDigite o menor multiplo: ");
scanf("%d",&menorMultiplo);

resultado=menorMultiplo;

    do{
    menorMultiplo=menorMultiplo+1;
    }while(menorMultiplo%numero!=0);

printf("O Menor multiplo de %d maior que %d é: %d",numero,resultado,menorMultiplo);

}
#endif

#ifdef ex2

/*2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/

void main()
{
    setlocale(LC_ALL,"");

    short a;
    long b;
    int c;
    float d;
    double e;
    char f;

    printf("Digite um numero short: ");
    scanf("%hd",&a);
    printf("Digite um numero long: ");
    scanf("%ld",&b);
    printf("Digite um numero int: ");
    scanf("%d",&c);
    printf("Digite um numero float: ");
    scanf("%f",&d);
    printf("Digite um numero double: ");
    scanf("%f",&e);
    printf("Digite um numero char: ");
    scanf("%d",&f);


    printf("\n        10        20        30        40        50        60\n");
    printf("12345678901234567890123456789012345678901234567890123456789012345\n");
    printf("%9hd%19ld%19d\n",a,b,c);
    printf("%19.1f%21.01e%18c\n",d,e,f);


}
#endif // ex2

#ifdef ex3

/*3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.
*/

void main()
{
    setlocale(LC_ALL,"");

    int segundos,horas,resto,minutos,seg;

    printf("Digite um tempo em segundos: ");
    scanf("%d",&segundos);

    horas=segundos/3600;
    resto=segundos%3600;
    minutos=resto/60;
    seg=resto%60;

    printf("%d segundo convertido em horas é: %.2dh %dmin %ds.", segundos,horas,minutos,seg);

}
#endif

#ifdef ex4

/*4 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.
*/

void main()
{
    setlocale(LC_ALL,"");

    int num1,num2;

    printf("Digite doi numeros\n");
    scanf("%d%d",&num1,&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("Primeira variável: %d. Segunda variável: %d",num1,num2);

}
#endif // ex4

#ifdef ex5
/*
5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a relação de notas necessárias.
*/
void main()
{
    setlocale(LC_ALL,"");

    int saque,notaCem,notaCinq,notaVinte,notaDez,notaCinco,notaDois,notaUm;

    printf("Valor para saque: R$");
    scanf("%d",&saque);

    notaCem=saque/100;
    saque=saque-(notaCem*100);

    notaCinq=saque/50;
    saque=saque-(notaCinq*50);

    notaVinte=saque/20;
    saque=saque-(notaVinte*20);

    notaDez=saque/10;
    saque=saque-(notaDez*10);

    notaCinco=saque/5;
    saque=saque-(notaCinco*5);

    notaDois=saque/2;
    saque=saque-(notaDois*2);

    notaUm=saque/1;
    saque=saque-(notaUm*1);

    printf("\n\nSaque de notas de R$100: %d\n",notaCem);
    printf("Saque de notas de R$50: %d\n",notaCinq);
    printf("Saque de notas de R$20: %d\n",notaVinte);
    printf("Saque de notas de R$10: %d\n",notaDez);
    printf("Saque de notas de R$5: %d\n",notaCinco);
    printf("Saque de notas de R$2: %d\n",notaDois);
    printf("Saque de notas de R$1: %d\n",notaUm);
}

#endif // ex5

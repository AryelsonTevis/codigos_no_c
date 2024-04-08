/*Elabore um programa que solicite um número inteiro. Como resultado, mostre uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo ou se ele é o número zero.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int number;

    setlocale(LC_ALL,"");
    printf("Digite um numero inteiro: ");
    scanf("%d",&number);


    if(number == 0){
        printf("\nNumero foi zero");
    }
    else if (number % 2 ==0){
        if (number > 0){
            printf("\nO numero ditado � par e positivo");
        }else{
            printf("\nO numero ditado � par e negativo");
        }
    }
    else {
        if (number > 0){
            printf("\nO numero ditado � inpar e positivo");
        }else{
            printf("\nO numero ditado � inpar e negativo");
        }
    }



    return 0;
}

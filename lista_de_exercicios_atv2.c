//Elabore um programa que solicite 2 números, ‘n1’ e ‘n2’. A seguir, verifique se ‘n1’ é múltiplo de ‘n2’ ou se ‘n2’ é múltiplo de ‘n1’. Se forem múltiplos, mostre como resultado qual é múltiplo de qual e se não forem, informe que não são.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int num1, num2;

    setlocale(LC_ALL,"");
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);



    if (num1 % num2 == 0){
        printf("O numero %d e multiplo de %d",num1,num2);
    }
    else if(num2 % num1 == 0){
        printf("O numero %d e multiplo de %d",num2,num1);
    }
    else{
        printf("Os numeros digitados nao sao multiplos");

    }



    return 0;
}

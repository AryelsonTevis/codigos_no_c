//Elabore um programa que solicite 3 valores ‘a’, ‘b’ e ‘c’. A seguir, encontre o maior dos 3 valores. Mostre esse valor informando que ele é o maior dos três.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main()
{
    int num1, num2,num3;
    setlocale(LC_ALL,"");
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d",&num2);
    printf("\nDigite o terceira numero: ");
    scanf("%d",&num3);

    if (num1 >num2 && num1>num3){
        printf("\nO maior numerodigitado foi o numero : %d", num1);
    }
    else if (num2 >num1 && num2>num3){
        printf("\nO maior numerodigitado foi o numero : %d", num2);
    }
    else if (num3 >num1 && num3>num2){
        printf("\nO maior numerodigitado foi o numero : %d", num3);
    } else {printf("Nao tem um numero maior");}

    return 0;
}

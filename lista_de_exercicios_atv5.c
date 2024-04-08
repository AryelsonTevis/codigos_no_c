/*Uma determinada empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. 

Para estar em condições, um dos seguintes requisitos deve ser satisfeito (um dos três):

 - Ter no mínimo 65 anos de idade.
 - Ter trabalhado no mínimo 30 anos.
 - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.

Com base nas informações acima, elabore um programa que leia: o número do empregado (código), o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int age,workage,cod;

    setlocale(LC_ALL,"");
    printf("Digite o codigo do trabalhador: ");
    scanf("%d",&cod);
    printf("\nDigite o ano de nascimento do trabalhador: ");
    scanf("%d",&age);
    printf("\nDigite o ano de ingresso do trabalhador: ");
    scanf("%d",&workage);

    if (2024 - age == 65 || 2024-workage == 30 || (2024 - age == 60 && 2024 -workage == 25)){
        printf("\nRequer aposentatoria.");
    }
    else {
        printf("\nN�o requer aposentatoria.");

    }

    return 0;
}

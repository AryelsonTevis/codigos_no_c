/*Elabore um programa que solicite a altura e o sexo de uma pessoa (‘1’ para feminino e ‘2’ para masculino). Em seguida, calcule o peso ideal para esta pessoa, utilizando as seguintes fórmulas:

- Para homens (72.7*altura) - 58

- Para mulheres (62.1*altura) - 44.7
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int sex;
    float alt,peso,ide;

    setlocale(LC_ALL,"");
    printf("Digite seu sexo\n1-feminino 2-masculino: ");
    scanf("%d",&sex);

    if (sex >= 1 && sex<=2){
        printf("\nDigite sua altura em metros: ");
        scanf("%f",&alt);
        printf("\nDigite seu peso:");
        scanf("%f",&peso);
        if(sex ==1){
            ide=(62.1 * alt) - 44.7;
            printf("\nSeu pesso ideal �: %.2f",ide);
        } else{
            ide=(72.7 * alt) - 58;
            printf("\nSeu pesso ideal �: %.2f",ide);
        }
    } else {
        printf("Sexo invalido");
    }




    return 0;
}

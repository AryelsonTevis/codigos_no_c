/*Considere o cardápio de uma lancheria como o seguinte:

Produto	Código	Preço
Cachorro quente	100	R$ 3,00
Bauru simples	101	R$ 3,90
Bauru com ovo	102	R$ 4,40
Hambúrger	103	R$ 7,60
Cheeseburguer	104	R$ 6,90
Refrigerante	105	R$ 4,50

Com base neste cardápio, elabore um programa que solicite o código de um item e a quantidade. Verifique se o código é válido e, caso seja, calcule o valor a ser pago por aquele pedido. Se não for válido, informe o usuário.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int cod, quant;
    float result;

    setlocale(LC_ALL,"");
    printf("Digite o codigo do lanche: ");
    scanf("%d",&cod);

    if(cod >= 100 && cod <= 105){
        printf("Digite a quantidade desejada: ");
        scanf("%d",&quant);

        if(cod == 100){
            result=3*quant;
            printf("%d cachorro quente",quant);
            printf("Voc� pagara: %.2f ",result);
        } else if(cod == 101){
            result=3.9*quant;
            printf("%d bauru simples",quant);
            printf("Voc� pagara: %.2f ",result);
        } else if(cod == 102){
            result=4.4*quant;
            printf("%d bauru com ovo",quant);
            printf("Voc� pagara: %.2f ",result);
        } else if(cod == 103){
            result=7.6*quant;
            printf("%d hamb�rguer",quant);
            printf("Voc� pagara: %.2f ",result);
        } else if(cod == 104){
            result=6.9*quant;
            printf("%d cheeseburger",quant);
            printf("Voc� pagara: %.2f ",result);
        } else if(cod == 105){
            result=4.5*quant;
            printf("%d refrigerante",quant);
            printf("Voc� pagara: %.2f ",result);
        }
    }else{
        printf("codigo invalido");
    }


    return 0;
}

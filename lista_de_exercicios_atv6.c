/*A taxa de juros para um determinado banco financiar a compra de um carro depende do valor da entrada em relação ao valor total do carro. Por exemplo: 

Se for dada uma entrada de até 20% do valor do veículo a taxa de juro mensal para o financiamento fica em 0,99%. Se for dado um valor maior de entrada, a taxa cai para 0,88% mensais.

*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    float valorTotal = 0, entrada = 0, taxaJuros = 0, valorFinanciado = 0, prestacao = 0;
    int numParcelas = 0;

    setlocale(LC_ALL, "");
    printf("Digite o valor total do carro: ");
    scanf("%f", &valorTotal);

    printf("Digite o valor da entrada: ");
    scanf("%f", &entrada);

    printf("Digite o n�mero de parcelas desejadas: ");
    scanf("%d", &numParcelas);

    if (entrada <= 0.2 * valorTotal) {
        taxaJuros = 0.99 / 100;
    } else {
        taxaJuros = 0.88 / 100;
    }

    valorFinanciado = valorTotal - entrada;

    prestacao = (valorFinanciado * taxaJuros) / (1 - pow(1 + taxaJuros, -numParcelas));

    printf("O valor da presta��o �: R$%.2f\n", prestacao);

    return 0;
}

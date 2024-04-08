/*Elabore um programa que solicite a idade de um nadador e classifique-o em uma das seguintes categorias:
 
Faixa de idade	Categoria
5 - 7 anos	Infantil A
8-10 anos	Infantil B
11-13 anos	Juvenil A
14-17 anos	Juvenil B
maiores de 18 anos	Adulto
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int age;

    setlocale(LC_ALL,"");
    printf("Digite a idade do nadador ");
    scanf("%d",&age);




    if (age>=5 && age<=7){
        printf("O nadador esta na categoria Infantil A");
    }
    else if(age>=8 && age<=10){
        printf("O nadador esta na categoria Infantil B");
    }
    else if(age>=11 && age<=13){
        printf("O nadador esta na categoria Juvenil A");
    }
    else if(age>=14 && age<=17){
        printf("O nadador esta na categoria Juvenil B");
    }
    else if(age>=18){
        printf("O nadador esta na categoria Adulto");
    }
    else {
        printf("Ele nao se enquadra em nenhuuma categoria");
    }



    return 0;
}

#include <stdio.h>

int main() {
    //definição das variáveis
    float num1, num2, resultado;
    int operador;
    //escolhendo o primeiro numero para a operação
    printf("Digite o Primeiro Número: ");
    scanf("%f", &num1);
    //escolhendo o segundo numero para a operação
    printf("Digite o Segundo número: ");
    scanf("%f", &num2);
    //selecionando um operador matemático simples
    printf("Selecione o operador: \n");
    printf("1 - Adição\n");
    printf("2 - Subtração \n");
    printf("3 - Multiplicação \n");
    printf("4 - Divisão \n");
    scanf("%d", &operador);
    //definindo o resultado com base na escolha do operador
    switch (operador) {
    case 1:
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);//resultado da soma
        break;
        case 2:
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);//resultado da subtração
        break;
        case 3:
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);//resultado da multiplicação
        break;
        case 4:
        if (num2 != 0){
        resultado = num1 / num2;
        printf("Resultado: %.2f\n", resultado);//resultado da divisão
        }else{
            printf("Divisão por zero não permitida.\n");
        }
        break;
        default:
            printf("Operador Inválido.\n");
        break;
    }

    return 0;
}
# C-Simple-Calculator

Este repositório contém uma calculadora simples implementada em C que realiza operações matemáticas básicas.

## Objetivo

O objetivo deste projeto é fornecer uma calculadora interativa para realizar operações de adição, subtração, multiplicação e divisão.

## O Que o Código Faz

O código implementa uma calculadora simples que permite ao usuário inserir dois números e escolher uma operação matemática para realizar. O programa então exibe o resultado da operação.

### Funcionalidades Principais

-   **Entrada de Números:** O programa solicita que o usuário insira dois números.
-   **Seleção de Operador:** O programa exibe um menu com as opções de operadores matemáticos e solicita que o usuário escolha um.
-   **Cálculo do Resultado:** O programa realiza a operação matemática escolhida com os números inseridos.
-   **Exibição do Resultado:** O programa exibe o resultado da operação com duas casas decimais.
-   **Tratamento de Erro:** O programa verifica se o usuário está tentando dividir por zero e exibe uma mensagem de erro caso positivo.

## Como Utilizar

1.  **Compilação:**
    
    ```bash
    gcc calculadora.c -o calculadora
    ```
    
    Substitua `calculadora.c` pelo nome do seu arquivo C.
    
2.  **Execução:**
    
    ```bash
    ./calculadora
    ```
    
3.  **Utilizando a Calculadora:**
    
    -   O programa solicitará que você insira o primeiro número.
    -   Em seguida, solicitará que você insira o segundo número.
    -   O programa exibirá um menu com as opções de operadores matemáticos.
    -   Digite o número correspondente ao operador desejado.
    -   O programa exibirá o resultado da operação.

## Ferramentas Utilizadas

-   **Linguagem de Programação:** C
-   **Compilador:** GCC (GNU Compiler Collection)
-   **Ambiente de Desenvolvimento:** Qualquer editor de texto ou IDE que suporte C.

## Estrutura do Código

-   `num1`, `num2`, `resultado`: Variáveis do tipo `float` para armazenar os números e o resultado da operação.
-   `operador`: Variável do tipo `int` para armazenar o operador matemático escolhido pelo usuário.
-   `printf()`: Função para exibir mensagens no console.
-   `scanf()`: Função para ler a entrada do usuário.
-   `switch`: Estrutura de controle para realizar a operação matemática escolhida.
-   `if`: Estrutura de controle para verificar se o usuário está tentando dividir por zero.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests para melhorias ou correções de bugs.

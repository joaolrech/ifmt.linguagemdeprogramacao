#include <stdio.h>
#include <stdlib.h>

//1. Faça um programa que imprima o seu nome.

void q01()
{
    printf("João Luís Rech \n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.

void q02()
{
    printf("%d \n", 30 * 27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.

void q03()
{
    printf("%.2f \n", (5 + 8 + 12) / 3.0);
}

//4. Faça um programa que leia e imprima um número inteiro.

void q04()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    printf("Você digitiu o número %d \n", x);
}

//5. Faça um programa que leia dois números reais e os imprima.

void q05()
{
    float x, y;

    printf("Digite dois números reais. \n");
    scanf("%f", &x);
    scanf("%f", &y);

    printf("Você digitiu os números %.2f e %.2f \n", x, y);
}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

void q06()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    printf("Antecessor: %d", x --);
    printf("Sucessor: %d", x ++);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

void q07()
{
    char nome[99], endereco[99], telefone[99];

    printf("Digite seu nome, seu endereço e seu telefone. \n");
    scanf(" %99[^\n]", nome);
    scanf(" %99[^\n]", endereco);
    scanf(" %99[^\n]", telefone);

    printf("Nome: %s \n", nome);
    printf("Endereço: %s \n", endereco);
    printf("Telefone: %s \n", telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

void q08()
{
    int x, y;

    printf("Digite dois números inteiros. \n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Subtração de %d por %d: %d \n", x, y, x - y);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

void q09()
{
    float x;

    printf("Digite um número real. \n");
    scanf("%f", &x);

    printf("1/4 do número digitado: %.2f \n", x / 4);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q10()
{
    float n1, n2, n3, m;

    printf("Digite três números. \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    m = (n1 = n2 = n3) / 3;

    printf("Média aritmética: %.2f \n", m);
}

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

void q11()
{
    float x, y;

    printf("Digite dois números reais. \n");
    scanf("%f", &x);
    scanf("%f", &y);

    printf("Adição: %.2f \n", x + y);
    printf("Subtração: %.2f \n", x - y);
    printf("Multiplicação: %.2f \n", x * y);
    printf("Divisão: %.2f \n", x / y);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

void q12()
{
    float x;

    printf("Digite um número real. \n");
    scanf("%f", &x);

    printf("%.2f ao quadrado: %.2f \n", x, x * x);
}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

void q13()
{
    float x;

    printf("Digite o saldo da conta. \n");
    scanf("%f", &x);

    printf("Saldo reajustado: %.2f \n", x * 1.02);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).

void q14()
{
    float x, y;

    printf("Digite a base e a altura do retângulo. \n");
    scanf("%f", &x);
    scanf("%f", &y);

    printf("Perímetro: %.2f \n", x * 2 + y * 2);
    printf("Área: %.2f \n", x * y);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main()
{
    q14();

    return 0;
}
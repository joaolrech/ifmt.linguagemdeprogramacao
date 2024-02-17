#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.

void q01()
{
    int x, y, soma;

    printf("Digite dois números inteiros. \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = x + y;

    if(soma > 10)
    {
        printf("Soma dos números digitados: %d \n", soma);
    }
    else
    {
        printf("A soma dos números digitados é menor que 10. \n");
    }
}

//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20,
//   este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20,
//   este deverá ser apresentado subtraindo-se 5.

void q02()
{
    int x, y, soma;

    printf("Digite dois números inteiros. \n");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = x + y;

    if(soma > 20)
    {
        printf("%d \n", soma + 8);
    }
    else
    {
        printf("%d \n", soma - 5);
    }
}

//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".

void q03()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    if(x % 3 == 0)
    {
        printf("%d múltiplo de 3. \n", x);
    }
    else
    {
        printf("%d não é múltiplo de 3. \n", x);
    }
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.

void q04()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    if(x % 5 == 0)
    {
        printf("%d é divisível por 5. \n", x);
    }
    else
    {
        printf("%d não é divisível por 5. \n", x);
    }
}

//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.

void q05()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    if((x % 3 == 0) && (x % 7 == 0))
    {
        printf("%d é divisível por 3 e por 7. \n", x);
    }
    else
    {
        printf("%d não é divisível por 3 e por 7. \n", x);
    }
}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//   estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//   bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//   valor da prestação e informar se o empréstimo pode ou não ser concedido.

void q06()
{
    float salario, prestacao;

    printf("Digite seu salário e o valor da prestação desejada. \n");
    scanf("%f", &salario);
    scanf("%f", &prestacao);

    if(prestacao > (salario * 0.3))
    {
        printf("O empréstimo não pode ser concedido. \n");
    }
    else
    {
        printf("O empréstimo pode ser concedido. \n");
    }
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//   entre 20 e 50 ou não.

void q07()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    if((x >= 20) && (x <= 50))
    {
        printf("%d está entre 20 e 50. \n", x);
    }
    else
    {
        printf("%d não está entre 20 e 50. \n", x);
    }
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//   "Maior do que 20", "Igual a 20"ou "Menor do que 20".

void q08()
{
    int x;

    printf("Digite um número inteiro. \n");
    scanf("%d", &x);

    if(x > 20)
    {
        printf("O número digitado é maior do que 20. \n");
    }
    else if(x < 20)
    {
        printf("O número digitado é menor do que 20. \n");
    }
    else
    {
        printf("O número digitado é igual a 20. \n");
    }
}

//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//   atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//   ano de nascimento informado é válido.

void q09()
{
    int nascimento, idade, anoatual;

    printf("Digite o ano em que você nasceu e o ano em que estamos. \n");
    scanf("%d", &nascimento);
    scanf("%d", &anoatual);

    idade = anoatual - nascimento;

    if(idade > 150 || idade < 0)
    {
        printf("Ano de nascimento inválido.");
    }
    else
    {
        printf("Idade: %d \n", idade);
    }
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem crescente.

void q10()
{
    int a, b, c;

    printf("Digite 3 números inteiros. \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a <= b && b <= c)
        printf("%d, %d, %d \n", a, b, c);
    else if(a <= c && c <= b)
        printf("%d, %d, %d \n", a, c, b);
    else if(b <= a && a <= c)
        printf("%d, %d, %d \n", b, a, c);
    else if(b <= c && c <= a)
        printf("%d, %d, %d \n", b, c, a);
    else if(c <= a && a <= b)
        printf("%d, %d, %d \n", c, a, b);
    else if(c <= b && b <= a)
        printf("%d, %d, %d \n", c, b, a);
}

//11. Faça um programa que leia 3 números e imprima o maior deles.

void q11()
{
    int a, b, c;

    printf("Digite 3 números inteiros. \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c)
    	printf("Maior número: %d \n", a);
    else if(b > a && b > c)
    	printf("Maior número: %d \n", b);
    else if(c > a && c > b)
    	printf("Maior número: %d \n", c);
    else
    	printf("Números iguais foram digitados. \n");
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//   • Se é maior de idade
//   • Se é menor de idade
//   • Se é maior de 65 anos

void q12()
{
    int idade;

    printf("Digite sua idade. \n");
    scanf("%d", &idade);

    if(idade < 18)
    {
        printf("Você é menor de idade. \n");
    }
    else if(idade >= 18 && idade < 65)
    {
        printf("Você é maior de idade. \n");
    }
    else if (idade >= 65)
    {
        printf("Você é idoso. \n");
    }
}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//    prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens:
//    "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).

void q13()
{
    char nome[99];
    float p1, p2, m;

    printf("Digite o nome, a nota da prova 1 e a nota da prova 2. \n");
    scanf(" %99[^\n]", nome);
    scanf("%f", &p1);
    scanf("%f", &p2);

    m = (p1 + p2) / 2;

    printf("Nome: %s \n", nome);
    printf("Média: %.2f \n", m);

    if(m >= 7)
        printf("Aprovado. \n");
    else if(m < 3)
        printf("Reprovado. \n");
    else
        printf("Prova final. \n");
}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//    desconto do INSS segundo a tabela seguir:
//    Salário Faixa de Desconto
//    Menor ou igual à R$600,00 Isento
//    Maior que R$600,00 e menor ou igual a R$1200,00 20%
//    Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//    Maior que R$2000,00 30%

void q14()
{
    float salario;

    printf("Digite seu salário. \n");
    scanf("%f", &salario);

    if(salario <= 600)
        printf("Isento. \n");
    else if(salario > 600 && salario <= 1200)
        printf("Desconto: R$%.2f \n", salario * 0.2);
    else if(salario > 1200 && salario <= 2000)
        printf("Desconto: R$%.2f \n", salario * 0.25);
    else
        printf("Desconto: R$%.2f \n", salario * 0.3);
}

//15. Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor
//    da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.

void q15()
{
    float valor;

    printf("Digite o valor de compra produto. \n");
    scanf("%f", &valor);

    if(valor < 20)
        printf("Valor de venda: R$%.2f \n", valor * 1.45);
    else
        printf("Valor de venda: R$%.2f \n", valor * 1.3);
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//    mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//    Categoria Idade
//    Infantil A 5 - 7 anos
//    Infantil B 8 - 10 anos
//    Juvenil A 11 - 13 anos
//    Juvenil B 14 - 17 anos
//    Sênior maiores de 18 anos

void q16()
{
    int i;

    printf("Digite a idade do nadador. \n");
    scanf("%d", &i);

    if(i >= 5 && i <= 7)
    	printf("Categoria infantil A. \n");
    else if(i >= 8 && i <= 10)
    	printf("Categoria infantil B. \n");
    else if(i >= 11 && i <= 13)
    	printf("Categoria juvenil A. \n");
    else if(i >= 14 && i <= 17)
    	printf("Categoria juvenil B. \n");
    else if(i >= 18)
    	printf("Categoria sênior. \n");
    else
    	printf("O nadador não possui a idade mínima de 5 anos. \n");
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer
//    pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a tabela a seguir.
//    Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//    Idade Valor
//    Até 10 anos R$30,00
//    Acima de 10 até 29 anos R$60,00
//    Acima de 29 até 45 anos R$120,00
//    Acima de 45 até 59 anos R$150,00
//    Acima de 59 até 65 anos R$250,00
//    Maior que 65 anos R$400,00

void q17()
{
    char nome[99];
    int idade;

    printf("Digite seu nome e sua idade. \n");
    scanf(" %99[^\n]", nome);
    scanf("%d", &idade);

    printf("Nome: %s \n", nome);

    if(idade <= 10)
        printf("Valor: R$30.00 \n");
    else if(idade > 10 && idade <= 29)
        printf("Valor: R$60.00 \n");
    else if( idade > 29 && idade <= 45)
        printf("Valor: R$120.00 \n");
    else if( idade > 45 && idade <= 59)
        printf("Valor: R$150.00 \n");
    else if( idade > 59 && idade <= 65)
        printf("Valor: R$250.00 \n");
    else
        printf("Valor: R$400.00 \n");
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente.
//    Caso o usuário digite um número fora desse intervalo, deverá aparecer uma mensagem informando que
//    não existe mês com este número. Utilize o switch para este problema.

void q18()
{
    int x;

    printf("Digite um número inteiro entre 1 e 12. \n");
    scanf("%d", &x);

    switch(x)
    {
        case 1:
            printf("Janeiro. \n");
            break;
        case 2:
            printf("Fevereiro. \n");
            break;
        case 3:
            printf("Março. \n");
            break;
        case 4:
            printf("Abril. \n");
            break;
        case 5:
            printf("Maio. \n");
            break;
        case 6:
            printf("Junho. \n");
            break;
        case 7:
            printf("Julho. \n");
            break;
        case 8:
            printf("Agosto. \n");
            break;
        case 9:
            printf("Setembro. \n");
            break;
        case 10:
            printf("Outubro. \n");
            break;
        case 11:
            printf("Novembro. \n");
            break;
        case 12:
            printf("Dezembro. \n");
            break;
        default:
            printf("Não existe mês com este número. \n");
    }
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado
//    Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe
//    se uma equipe foi classificada, de acordo com a seguinte especificação:
//    • Ler os pontos obtidos por cada jogador da equipe;
//    • Mostrar esses valores em ordem decrescente;
//    • Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".

void q19()
{
	
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano.
//    Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
//    O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//    Saldo Médio Percentual
//    de 0 a 500 nenhum crédito
//    de 501 a 1000 30% do valor do saldo médio
//    de 1001 a 3000 40% do valor do saldo médio
//    acima de 3001 50% do valor do saldo médio

void q20()
{
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado,
//    o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir.
//    Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//    • Nome do livro:
//    • Tipo de usuário:
//    • Total de dias:

void q21()
{
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de
//    combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.

void q22()
{
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do
//    usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//    Prato Sobremesa Bebida
//    Vegetariano 180cal Abacaxi 75cal Chá 20cal
//    Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//    Frango 250cal Mousse diet 170cal Suco de melão 100cal
//    Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal

void q23()
{

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dos motoristas o DUT.
//    Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da
//    placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe o mês em que o emplacamento deve ser renovado.

void q24()
{
    char placa[7];

    printf("Digite a placa do veículo. \n");
    scanf(" %s", placa);

    printf("%s \n", placa);

    switch(placa[6])
    {
        case '1':
            printf("O emplacamento deve ser renovado em janeiro. \n");
            break;
        case '2':
            printf("O emplacamento deve ser renovado em fevereiro. \n");
            break;
        case '3':
            printf("O emplacamento deve ser renovado em março. \n");
            break;
        case '4':
            printf("O emplacamento deve ser renovado em abril. \n");
            break;
        case '5':
            printf("O emplacamento deve ser renovado em maio. \n");
            break;
        case '6':
            printf("O emplacamento deve ser renovado em junho. \n");
            break;
        case '7':
            printf("O emplacamento deve ser renovado em julho. \n");
            break;
        case '8':
            printf("O emplacamento deve ser renovado em agosto. \n");
            break;
        case '9':
            printf("O emplacamento deve ser renovado em setembro. \n");
            break;
        case '0':
            printf("O emplacamento deve ser renovado em outubro. \n");
            break;
    }
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais
//    para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos.
//    Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que
//    possa imprimir intimações de acordo com o índice e a tabela a seguir:
//    Índice Indústrias que receberão intimação
//    0,3 1º gurpo
//    0,4 1º e 2º grupos
//    0,5 1º, 2º e 3º grupos

void q25()
{
	
}

int main()
{
    int questao;

    printf("Digite a questão a ser executada: \n");
    scanf("%d", &questao);

    switch(questao)
    {
        case 1:
            q01();
            break;
        case 2:
            q02();
            break;
        case 3:
            q03();
            break;			
        case 4:
            q04();
            break;
        case 5:
            q05();
            break;
        case 6:
            q06();
            break;
        case 7:
            q07();
            break;
        case 8:
    	    q08();
    	    break;
        case 9:
    	    q09();
    	    break;
        case 10:
    	    q10();
    	    break;
        case 11:
    	    q11();
    	    break;
        case 12:
    	    q12();
    	    break;
        case 13:
    	    q13();
    	    break;
        case 14:
    	    q14();
    	    break;
        case 15:
    	    q15();
    	    break;
        case 16:
    	    q16();
    	    break;
        case 17:
    	    q17();
    	    break;
        case 18:
    	    q18();
    	    break;
        case 19:
    	    q19();
    	    break;
        case 20:
    	    q20();
    	    break;
        case 21:
    	    q21();
    	    break;
        case 22:
    	    q22();
    	    break;
        case 23:
    	    q23();
    	    break;
        case 24:
    	    q24();
    	    break;
        case 25:
    	    q25();
    	    break;
        default:
    	    printf("Opção inválida. \n");
    }
    return 0;
}
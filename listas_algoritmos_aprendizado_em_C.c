#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*
==============================================================================

>>> Compila��o de algoritmos desenvolvida por Guilherme Encarna��o e Silva
>>> https://github.com/guizmo-silva
>>> gui21silva@gmail.com

==============================================================================
*/

//PROT�TIPOS DAS FUN��ES DA LISTA 4

//01
float esfera1(float r1);  //O n�mero ao lado do nome da fun��o corresponde ao exerc�cio que ela pertence na lista.

//02
int verifica2(int v2);

//03
float divisao3(float a3, float b3);

//04
float ReajSalNovo4(float sal4);

//05
int ParImpar5(int valor5);

//06
float ReajSalNovo6(float sal6);
float salario6, novoSalario6;

//07
float MediaFibonacci7(float termos7);
int x7=0;

//08
int Delta8(int aDelta8, int bDelta8, int cDelta8);

//09
int Fatorial9(int num9);

//10
int TipoTriangulo10(int aTri10, int bTri10, int ctri10);

//11
int Categoria11(int idade11);

//12
float Media12(char tipo12, float n1_12, float n2_12, float n3_12);

int main(){
setlocale(LC_ALL, "Portuguese"); //Seta a linguagem para portugu�s

int selecao;

printf("\t\t\t*** BEM-VINDO A COMPILA��O DAS LISTAS DE ALGORITMO DO 1o CICLO DE ADS***\n");
printf("\t\t\t\t*** Listas do 2o semestre de 2017 ***\n\n");
printf("*** Vers�o 1.0 ***\n\n");

printf("> Esta lista tem como foco o aprendizado e pr�tica de algoritmos de programa��o,\ne n�o da linguagem C especificamente.\n");
printf("\n> Os enunciados completos dos problemas est�o comentados antes de cada bloco de c�digo.\n");
printf("\n> A sintaxe deste c�digo foi feita para rodar no compilador Code::Blocks.\n"
       "Por isso podem haver \"anormalidades\" quanto a sintaxe oficial da linguagem C.\n");

menu_principal:
    printf("\n=============================================\n");
    printf("\n>> Escolha a lista desejada:\n\n");
    printf("1 - Lista 01.\n");
    printf("2 - Lista 02.\n");
    printf("3 - Lista 03.\n");
    printf("4 - Lista 04.\n");
    printf("5 - LICENSAS.\n");
    printf("6 - SAIR\n\n");

printf("DIGITE: ");
scanf("%d", &selecao);

switch(selecao)
    {
        case 1:
        {
            menu_lista1:
            system("cls");
            int selecao_lista1;

            printf("\n=============================================\n");
            printf("\n>>> VOC� EST� NA LISTA 01\n\n");
            printf("\n>> Escolha o exerc�cio desejado:\n\n");
            printf("1  - Diferen�a do maior pelo menor.\n");
            printf("2  - Receba 3 n�meros e some os quadrados deles.\n");
            printf("3  - Exibir um n�mero e seu m�dulo.\n");
            printf("4  - C�lculo de sal�rio (Simples).\n");
            printf("5  - Calculadora de rendimento de juros.\n");
            printf("6  - Ler dois n�meros e efetuar a adi��o.\n");
            printf("7  - Calculadora de idade.\n");
            printf("8  - Calcular o produto entre dois n�meros.\n");
            printf("9  - Custo de um ve�culo.\n");
            printf("10 - C�lculo dos produtos dos quadrados.\n");
            printf("11 - Divis�o de dois n�meros. (Segundo pelo primeiro)\n");
            printf("12 - Reajuste de sal�rio.\n");
            printf("13 - Calculadora de m�dia escolar anual.\n");
            printf("14 - Produto de tr�s n�meros.\n");
            printf("15 - Receber dois n�meros e efetuar c�lculos.\n");
            printf("16 - Equa��o de segundo grau.\n");
            printf("17 - Determinar o tipo de tri�ngulo.\n");
            printf("18 - Equa��o de segundo grau completa.\n");
            printf("19 - Peso ideal para homem e mulher.\n");
            printf("20 - Tabela de pesos e alturas.\n");
            printf("21 - VOLTAR.\n");
            printf("22 - SAIR.\n\n");

            printf("DIGITE: ");
            scanf("%d", &selecao_lista1);

            switch(selecao_lista1)
            {

                case 1:
                {
                    /*Leia dois valores num�ricos e exiba a diferen�a do maior pelo menor.
                    Se os n�meros forem iguais informe ao usu�rio.*/
                    system("cls");

                    printf("***********************************************\n");
                    printf("***      DIFEREN�A DO MAIOR PELO MENOR      ***\n");
                    printf("***********************************************\n\n");
                    int a1,b1; //O n�mero ap�s o nome da vari�vel � referente ao exerc�cio, inclu� para n�o causar conflito

                    printf("Digite dois numeros quaisquer.\n");
                    scanf("%d %d", &a1, &b1);

                    if(b1==a1)
                    {
                        printf("\nOs n�meros s�o iguais.\n");
                    } else if(b1>a1)
                        {
                            printf("A diferenca do maior pelo menor �: %d", b1-a1);
                        } else
                            {
                                printf("A diferenca do maior pelo menor e': %d\n", a1-b1);
                            }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 2:
                {
                    /* Receba 3 n�meros onde o primeiro deve ser maior do que zero e menor que 20.
                    O segundo deve ser negativo e o terceiro representa um n�mero qualquer.
                    Calcule a soma de cada n�mero elevado ao quadrado.
                    Se a soma resultar um valor inferior a 1000 solicite novos dados.*/
                    system("cls");

                    printf("*****************************************************\n");
                    printf("***      RECEBA 3 NUMEROS E SOME OS QUADRADOS     ***\n");
                    printf("*****************************************************\n\n");

                    float a2,b2,c2,d2; //O n�mero ap�s o nome da vari�vel � referente ao exerc�cio, inclu� para n�o causar conflito
                    do
                    {
                        do
                        {
                            printf("Digite um numero maior que zero e menor que 20.\n");
                            scanf("%f", &a2);

                            if((a2<0) || (a2>20))
                            {
                                printf("\nNumero invalido!\n");
                            }
                        } while((a2<0)||(a2>20));

                        do
                        {
                            printf("Digite um numero negativo.\n");
                            scanf("%f", &b2);

                            if(b2>=0)
                            {
                                printf("\nNumero invalido!\n");
                            }
                        }while(b2>=0);

                        printf("Digite um numero qualquer.\n");
                        scanf("%f", &c2);
                        d2 = pow(a2,2) + pow(b2,2) + pow(c2,2);

                        if(d2>1000)
                        {
                            printf("O resultado e': %.0f", d2);
                        } else
                            printf("O resultado e' menor que 1000.\n\n");
                    } while(d2<1000);



                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 3:
                {
                    /* Efetue a leitura de um valor inteiro qualquer e exiba o n�mero lido e o seu m�dulo. O m�dulo
                    de um n�mero positivo � o pr�prio n�mero e o m�dulo de um n�mero negativo � obtido
                    multiplicando-o por menos 1. */
                    system("cls");


                    printf("***********************************************\n");
                    printf("***      EXIBIR UM NUMERO E SEU MODULO      ***\n");
                    printf("***********************************************\n\n");
                    int a3;

                    printf("Digite um numero inteiro qualquer.\n");
                    scanf("%d", &a3);

                    if(a3>=0)
                            printf("\nO numero digitado e seu modulo s�o: %d, %d\n", a3, a3);
                        else
                            printf("\nO numero digitado e seu modulo s�o: %d, %d\n", a3, a3*-1);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 4:
                {
                    /* Fa�a um programa que receba via teclado o sal�rio-base de um funcion�rio, calcule e mostre
                    o sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o sal�rio-
                    base e paga imposto de 7% sobre o sal�rio-base. */
                    system("cls");

                    printf("************************************\n");
                    printf("***      CALCULO DE SALARIO      ***\n");
                    printf("************************************\n\n");
                    float a4;

                    do
                    {
                        printf("\nInsira o valor do salario.\n");
                        scanf("%f", &a4);
                            if(a4<=0)
                            {
                                printf("\nValor invalido, digite novamente.\n");
                            }
                    } while(a4<=0);

                    printf("\nO valor final do salario e': R$%.2f\n", (a4*1.05)-(a4*0.07));

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 5:
                {
                    /* Fa�a um programa que receba via teclado:
                    o valor de um dep�sito, o valor da taxa de juros e o per�odo.
                    Calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/
                    system("cls");

                    printf("****************************************************\n");
                    printf("***      CALCULADORA DE RENDIMENTO DE JUROS      ***\n");
                    printf("****************************************************\n\n");
                    float deposito5, juros5, tempo5;

                    do
                    {
                        printf("Digite o valor do deposito5: ");
                        scanf("%f", &deposito5);

                            if(deposito5<=0)
                            {
                                printf("\nValor invalido. Digite novamente.\n\n");
                            }
                    } while(deposito5<=0);

                    do
                    {
                        printf("\nInsira o valor da taxa de juros: ");
                        scanf("%f", &juros5);

                            if(juros5<=0)
                            {
                                printf("\nValor invalido. Digite novamente.\n\n");
                            }
                    } while(juros5<=0);

                    do
                    {
                        printf("\nDigite o tempo de investimento: ");
                        scanf("%f", &tempo5);

                            if(tempo5<=0)
                            {
                                printf("\nValor invalido. Digite novamente.\n\n");
                            }
                    } while(tempo5<=0);

                    printf("\nO rendimento sera de: %.2f", deposito5*((juros5/100)*tempo5));
                    printf("\nO valor total do investimento sera de: %.2f", deposito5*(1+(juros5/100)*tempo5));

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 6:
                {
                    /* Leia dois valores num�ricos e efetue a adi��o. Caso o resultado seja maior ou igual a 10 deve
                    ser acrescido de mais 5; caso contr�rio, este resultado deve ser diminu�do em 7. Apresente
                    o resultado ap�s a avalia��o da condi��o. */
                    system("cls");

                    printf("**************************************\n");
                    printf("***   LER DOIS VALORES NUMERICOS   ***\n");
                    printf("**************************************\n\n");
                    int a6,b6;

                    printf("Insira dois numeros quaisquer.\n");
                    scanf("%d %d", &a6, &b6);

                    if(a6+b6>=10)
                        printf("O resultado e': %d", a6+b6+5);
                        else
                            printf("O resultado e': %d", a6+b6-7);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 7:
                {
                    /* Fa�a um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e
                    mostre:
                    a) A idade dessa pessoa
                    b) Quantos anos essa pessoa ter� em 2020.  */
                    system("cls");

                    printf("**************************************\n");
                    printf("***      CALCULADORA DE IDADE      ***\n");
                    printf("**************************************\n\n");
                    int a7,b7;

                    do
                    {
                        printf("Digite o ano de seu nascimento.\n");
                        scanf("%d", &a7);

                        printf("\nDigite o ano atual.\n");
                        scanf("%d", &b7);

                        if(b7<=a7)
                            printf("\nAno invalido. Digite novamente.\n");
                            else
                            {
                                printf("\nSua idade e': %d", b7-a7);
                                printf("\nEm 2020 voce tera %d anos.\n", 2020-a7);
                            }
                        } while(b7<=a7);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 8:
                {
                    /* Receba dois n�meros quaisquer, onde o primeiro deve ser maior que zero e o segundo menor
                    ou igual a zero. Calcule e mostre na tela o produto entre eles. */
                    system("cls");

                    printf("****************************************************\n");
                    printf("***      CALCULAR O PRODUTO ENTRE 2 NUMEROS      ***\n");
                    printf("****************************************************\n\n");
                    int a8,b8;

                    do
                    {
                        printf("Digite um numero maior que zero.\n");
                        scanf("%d", &a8);

                        if(a8<0)
                            printf("\nSeu numero nao e' maior ou igual a zero. Digite novamente.\n\n");

                    } while(a8<0);

                    do
                    {
                        printf("\nDigite um numero menor ou igual a zero.\n");
                        scanf("%d", &b8);

                        if(b8>0)
                            printf("\nSeu numero n�o e' menor ou igual a zero. Digite novamente.\n");
                            else
                                printf("\nO produto dos numeros inseridos e': %d\n\n", a8*b8);
                    } while(b8>0);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 9:
                {
                    /* O custo ao consumidor de um carro novo e a soma do pre�o da f�brica com o percentual de
                    lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica. Fa�a um programa que
                    receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual
                    de impostos. Calcule e mostre:
                    a) O valor correspondente ao lucro do distribuidor
                    b) O valor correspondente aos impostos
                    c) O pre�o final do ve�culo */
                    system("cls");

                    printf("*****************************************\n");
                    printf("***        CUSTO DE UM VEICULO        ***\n");
                    printf("*****************************************\n\n");
                    float preco9, lucro9, impostos9;

                    do
                    {
                        printf("\nDigite o pre�o de f�brica do ve�culo.\n");
                        scanf("%f", &preco9);

                        if(preco9<=0)
                            printf("\nN�mero inv�lido, digite novamente.\n");
                    } while(preco9<=0);

                    do
                    {
                        printf("\nInsira o percentual de lucro\n");
                        scanf("%f", &lucro9);

                        if(lucro9<=0)
                            printf("\nNumero inv�lido, digite novamente.\n");
                    } while(lucro9<=0);

                    do
                    {
                        printf("\nInsira o percentual de impostos\n");
                        scanf("%f", &impostos9);

                        if(impostos9<=0)
                            printf("\nNumero inv�lido, digite novamente.\n");
                    } while(impostos9<=0);

                    printf("\nO lucro do distribuidor sera' de: %.2f \n", preco9*(lucro9/100));
                    printf("\nOs impostos serao de: %.2f \n", preco9*(impostos9/100));
                    printf("\nO preco final do ve�culo sera' de: %.2f \n", preco9*(1+(lucro9/100)+(impostos9/100)));

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 10:
                {
                    /* Receba tr�s n�meros, onde o primeiro e o segundo devem ser maiores ou iguais a 100 e o
                    terceiro � qualquer. Calcule e exiba o produto dos seus quadrados. */
                    system("cls");

                    printf("**************************************************\n");
                    printf("***      CALCULO DO PRODUTO DOS QUADRADOS      ***\n");
                    printf("**************************************************\n\n");
                    int a10,b10,c10;

                    do
                    {
                        printf("\nInsira um n�mero maior ou igual a 100.\n");
                        scanf("%d", &a10);

                        if(a10<100)
                            printf("\nN�mero diferente ou menor que 100. Digite novamente.\n");
                    } while(a10<100);

                    do
                    {
                        printf("\nInsira um n�mero maior ou igual a 100.\n");
                        scanf("%d", &b10);

                        if(b10<100)
                                printf("\nN�mero diferente ou menor que 100. Digite novamente.\n");
                    } while(b10<100);

                    printf("\nDigite um n�mero qualquer.\n");
                    scanf("%d", &c10);

                    printf("\nO produto dos quadrados dos numeros e': %d\n", pow(a10,2)*pow(b10,2)*pow(c10,2));


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 11:
                {
                    /* Receba dois n�meros quaisquer, calcule e mostre na tela o resultado da divis�o do segundo
                    pelo primeiro.*/
                    system("cls");

                    printf("*****************************************\n");
                    printf("***          DIVISAO SIMPLES          ***\n");
                    printf("*****************************************\n\n");
                    float a11,b11;

                    do
                    {
                        printf("Insira um numero diferente de zero.\n");
                        scanf("%f", &a11);

                        if(a11==0)
                            printf("\nNumero invalido.\n");
                            else
                                printf("\nInsira outro numero.\n");
                                scanf("%f", &b11);
                                printf("O resultado da divisao do segundo numero pelo primeiro e': %.2f\n\n", b11/a11);
                    }while(a11==0);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 12:
                {
                    /* Elabore um programa que efetue o c�lculo do reajuste de sal�rio de um funcion�rio.
                    Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor
                    que 800 reais. Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste
                    ser� de 10 %; caso seja maior que 1000, o reajuste deve ser de 5%.Ao final do programa
                    deve apresentar o valor antigo e o novo sal�rio. */
                    system("cls");

                    printf("*****************************************\n");
                    printf("***        REAJUSTE DE SALARIO        ***\n");
                    printf("*****************************************\n\n");
                    float salario12;

                    do
                    {
                        printf("Insira o valor do sal�rio do funcionario.\n");
                        scanf("%f", &salario12);

                        if(salario12<=0)
                                printf("\nValor invalido. Digite novamente.\n");
                    } while(salario12<=0);

                    if(salario12<800)
                    {
                        printf("\nSal�rio atual: %.2f\n", salario12);
                        printf("Novo sal�rio com reajuste: %.2f\n", salario12*1.15);
                    } else if(salario12>=800&&salario12<=1000)
                        {
                            printf("\nSal�rio atual: %.2f\n", salario12);
                            printf("Novo sal�rio com reajuste: %.2f\n", salario12*1.10);
                        } else
                            {
                                printf("\nSal�rio atual: %.2f\n", salario12);
                                printf("Novo sal�rio com reajuste: %.2f\n", salario12*1.05);
                            }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 13:
                {
                    /* Leia quatro valores referentes �s notas escolares de um aluno e exiba uma mensagem
                    dizendo que ele foi aprovado se a m�dia for maior ou igual a 5. Caso contr�rio informe que
                    ele est� reprovado. Apresente junto � mensagem o valor da m�dia obtida pelo aluno
                    independente de ter sido aprovado ou n�o. As notas dever�o ser maiores ou iguais a zero e
                    menores ou iguais a dez. */
                    system("cls");

                    printf("*******************************************************\n");
                    printf("***        CALCULADORA DE MEDIA ESCOLAR ANUAL       ***\n");
                    printf("*******************************************************\n\n");

                    float a13,b13,c13,d13,e13;

                    do
                    {
                        printf("\nInsira a primeira nota do aluno.\n");
                        scanf("%f", &a13);

                        if(a13<0||a13>10)
                            printf("\nNumero invalido, digite novamente.\n");

                    } while(a13<0||a13>10);

                    do
                    {
                        printf("\nInsira a segunda nota do aluno.\n");
                        scanf("%f", &b13);

                        if(b13<0||b13>10)
                            printf("\nNumero invalido, digite novamente.\n");
                    } while(b13<0||b13>10);

                    do
                    {
                        printf("\nInsira a terceira nota do aluno.\n");
                        scanf("%f", &c13);

                        if(c13<0||c13>10)
                            printf("\nNumero invalido, digite novamente.\n");

                    } while(c13<0||c13>10);

                    do
                    {
                        printf("\nInsira a quarta nota do aluno.\n");
                        scanf("%f", &d13);

                        if(d13<0||d13>10)
                            printf("\nNumero invalido, digite novamente.\n");
                    } while(d13<0||d13>10);

                    e13=(a13+b13+c13+d13)/4;

                    if(e13<5)
                        printf("\n\nO aluno esta REPROVADO.\nMedia atingida: %.2f\n\n", e13);
                        else
                            printf("O aluno esta APROVADO.\nMedia atingida: %.2f\n\n", e13);



                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 14:
                {
                    /* Receba dois n�meros, o primeiro deve ser maior que 100, o segundo deve ser menor que 50
                    e o terceiro deve ser a soma dos dois anteriores. Calcule e exiba o produto entre eles. */
                    system("cls");

                    printf("*****************************************\n");
                    printf("***        PRODUTO EM 3 NUMERoS       ***\n");
                    printf("*****************************************\n\n");
                    int a14,b14,c14;

                    do
                    {
                        printf("\nDigite um numero maior que 100.\n");
                        scanf("%d", &a14);

                        if(a14<=100)
                            printf("\nNumero invalido. Digite novamente.\n");
                    } while(a14<=100);

                    do
                    {
                        printf("\nDigite um numero menor que 50.\n");
                        scanf("%d", &b14);

                        if(b14>=50)
                            printf("\nNumero invalido. Digite novamente.\n");
                    } while(b14>=50);

                    printf("\nO terceiro numero sera a soma dos dois anteriores: %d", c14=a14+b14);
                    printf("\nO produto entre os 3 numeros e': %d\n\n", a14*b14*c14);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 15:
                {
                    /* Receba dois n�meros, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser
                    maior ou igual a zero, o terceiro deve ser a soma dos dois primeiros e o quarto � o produto
                    dos tr�s n�meros anteriores. Calcule e exiba a soma dos quadrados de cada um dos quatro
                    n�meros. Caso o resultado seja menor que 50000, solicite novos dados.  */
                    system("cls");

                    printf("*****************************************\n");
                    printf("***          RECEBA 3 NUMEROS         ***\n");
                    printf("*****************************************\n\n");
                    int a15,b15,c15,d15,e15;

                    do
                    {
                        do
                        {
                            printf("\nDigite um numero entre 10 e 25.\n");
                            scanf("%d", &a15);

                                if(a15<10||a15>25)
                                {
                                    printf("\nNumero invalido.\n");
                                }
                        }while(a15<10||a15>25);

                        do
                        {
                            printf("\nDigite um numero maior ou igual a zero.\n");
                            scanf("%d", &b15);

                                if(b15<0)
                                {
                                    printf("\nNumero invalido.\n");
                                }
                        }while(b15<0);

                        printf("\nO terceiro numero e' a soma dos dois primeiros: %d\n", c15=a15+b15);
                        printf("\nO quarto numero e' o produto dos 3 anteriores: %d\n", d15=a15*b15*c15);

                        printf("\nA soma dos quadrados de todos os numeros e': %d\n", e15=pow(a15,2)+pow(b15,2)+pow(c15,2)+pow(d15,2));

                        if(e15<50000)
                        {
                            printf("\nNumero menor do que 50.000.\nEntre com os dados novamente.\n");
                        }
                    } while(e15<50000);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 16:
                {
                    /* Receba tr�s n�meros que garantam a exist�ncia de uma equa��o do segundo grau. Se
                    existirem ra�zes reais exiba-as. Caso n�o existam ra�zes informe ao usu�rio.
                    Observa��es:
                    a) Condi��o de exist�ncia de uma equa��o do segundo grau: o coeficiente que acompanha
                    o x2 dever� ser um n�mero diferente de zero.
                    b) Delta maior que zero: a equa��o possui duas ra�zes reais e distintas.
                    c) Delta igual � zero: a equa��o possui duas ra�zes iguais.
                    d) Delta menor que zero: a equa��o n�o apresenta ra�zes reais. */
                    system("cls");

                    printf("*****************************************\n");
                    printf("***      EQUACAO DE SEGUNDO GRAU      ***\n");
                    printf("*****************************************\n\n");

                    int a16, b16, c16, d16, x1_16, x2_16;

                    do
                    {
                        printf("Insira o valor de a16.\n");
                        scanf("%d", &a16);

                        if(a16==0)
                        {
                            printf("\nValor invalido. Digite novamente.\n");
                        }
                    } while(a16==0);

                    do
                    {
                        printf("\nInsira o valor de b16.\n");
                        scanf("%d", &b16);

                        if(b16==0)
                        {
                            printf("\nValor invalido. Digite novamente.\n");
                        }
                    } while(b16==0);

                    do
                    {
                        printf("\nInsira o valor de c16.\n");
                        scanf("%d", &c16);

                        if(c16==0)
                        {
                            printf("\nValor invalido. Digite novamente.\n");
                        }
                    } while(c16==0);

                    d16 = (b16*b16)-4*a16*c16;
                    printf("\nO valor de Delta e': %d \n", d16);

                    if(d16<0)
                    {
                        printf("\nO valor de Delta e' negativo ou 0. Nao existem raizes.\n\n");
                    } else
                        {
                            printf("\nA raiz positiva e': %d\n", x1_16=(-b16),+sqrt(d16)/2*a16);
                            printf("\nA raiz negativa e': %d\n", x2_16=(-b16),-sqrt(d16)/2*a16);
                        }


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 17:
                {
                    /* Receba tr�s n�meros que representam os lados de um tri�ngulo e garantam a exist�ncia de
                    um tri�ngulo. Informe ao usu�rio se o tri�ngulo � is�sceles, eq�il�tero ou escaleno.
                    Observa��es:
                    a) Garantir que cada lado � menor que a soma dos outros dois lados.
                    b) O tri�ngulo � eq�il�tero quando todos os lados s�o iguais.
                    c) O tri�ngulo � is�sceles quando apenas dois lados s�o iguais.
                    d) O tri�ngulo � escaleno quando todos os lados s�o diferentes.  */
                    system("cls");

                    printf("********************************************************\n");
                    printf("***      DETERMINAR QUAL E' O TIPO DE TRIANGULO      ***\n");
                    printf("********************************************************\n\n");
                    int a17,b17,c17;

                    do
                    {
                        printf("\nInsira o tamanho do primeiro lado do triangulo.\n");
                        scanf("%d", &a17);
                            if(a17<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(a17<=0);

                    do
                    {
                        printf("\nInsira o tamanho do segundo lado do triangulo.\n");
                        scanf("%d", &b17);
                            if(b17<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(b17<=0);

                    do
                    {
                        printf("\nInsira o tamanho do terceiro lado do triangulo.\n");
                        scanf("%d", &c17);
                            if(c17<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(c17<=0);

                    if((b17-c17)>a17)
                    {
                        printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
                    }else if((a17-c17)>b17)
                        {
                            printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
                        } else if((a17-b17)>c17)
                            {
                                  printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
                            } else if(a17==b17&&b17==c17&&c17==a17)
                                {
                                    printf("\nSeu triangulo e' EQUILATERO.\n");
                                } else if(a17==b17||b17==c17||c17==a17)
                                    {
                                        printf("\nSeu triangulo e' ISOSCELES.\n");
                                    } else
                                        {
                                            printf("\nSeu triangulo e' ESCALENO.\n");
                                        }



                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 18:
                {
                    /*Receba tr�s n�meros que garantam a exist�ncia de uma equa��o completa do segundo grau.
                    Se existirem ra�zes reais exiba-as e informe ao usu�rio se s�o iguais ou diferentes. Caso n�o
                    existam ra�zes tamb�m informe ao usu�rio e solicite novos dados. Considerar as observa��es
                    do ex.17.*/
                    system("cls");

                    printf("*****************************************\n");
                    printf("***      EQUACAO DE SEGUNDO GRAU      ***\n");
                    printf("*****************************************\n\n");
                    int a18, b18, c18, d18, x1_18, x2_18;
                    do
                    {
                        do
                        {
                            printf("Insira o valor de a18.\n");
                            scanf("%d", &a18);
                            if(a18==0)
                        {
                            printf("\nValor invalido. Digite novamente.\n");
                        }
                        }while(a18==0);

                        do
                        {
                            printf("\nInsira o valor de b18.\n");
                            scanf("%d", &b18);
                            if(b18==0)
                            {
                                printf("\nValor invalido. Digite novamente.\n");
                            }
                        }while(b18==0);

                        do
                        {
                            printf("\nInsira o valor de c18.\n");
                            scanf("%d", &c18);
                            if(c18==0)
                            {
                                printf("\nValor invalido. Digite novamente.\n");
                            }
                        }while(c18==0);

                        d18 = (b18*b18)-4*a18*c18;
                        printf("\nO valor de Delta e': %d \n", d18);
                        if(d18<0)
                        {
                            printf("\nO valor de Delta e' negativo ou 0. Entre com os dados novamente.\n\n");
                        }
                    }while(d18<0);

                    x1_18=(-b18),-sqrt(d18)/2*a18;
                    x2_18=(-b18),+sqrt(d18)/2*a18;

                        if(x1_18 == x2_18)
                        {
                            printf("\nAs raizes sao iguais. %d, %d", x1_18, x2_18);
                        } else
                            {
                                printf("\nAs raizes sao diferentes. %d, %d\n\n", x1_18, x2_18);
                            }


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 19:
                {
                    /* Fa�a um programa que receba a altura e o sexo de uma pessoa e que calcule e mostre o seu
                    peso ideal, utilizando as seguintes f�rmulas:
                    Para homens (72 * h) � 58
                    Para mulheres (62,1* h) � 44.7 */
                    system("cls");

                    printf("************************************************\n");
                    printf("***      PESO IDEAL PARA HOMEM E MULHER      ***\n");
                    printf("************************************************\n\n");

                    float altura19;
                    char sexo19;

                    do
                    {
                        printf("\nDigite a altura.\n");
                        scanf("%f", &altura19);
                            if(altura19<=0)
                            {
                                printf("\nAltura invalida. Digite novamente.\n");
                            }
                    }while(altura19<=0);

                    do
                    {
                        printf("\nInforme o sexo.\n");
                        scanf("%c", &sexo19);
                        getchar();
                            if(sexo19!="M"||sexo19!="F"||sexo19!="m"||sexo19!="f")
                            {
                                printf("Informacao invalida. Digite novamente.");
                            }
                    }while(sexo19=="M"||sexo19=="F"||sexo19=="m"||sexo19=="f");

                    if(sexo19=="M"||sexo19=="m")
                    {
                        printf("O seu peso ideal e': %.2f", (72*altura19)-58);
                    } else
                        {
                            printf("O seu peso ideal e': %.2f", (62.1*altura19)-44.7);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 20:
                {
                    /* Fa�a um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a
                    seguir e mostre qual a classifica��o dessa pessoa. */
                    system("cls");

                    printf("*******************************************\n");
                    printf("***      TABELA DE PESOS E ALTURAS      ***\n");
                    printf("*******************************************\n\n");

                    printf("**************************************************************************\n");
                    printf("********************                        PESO                         *\n");
                    printf("**************************************************************************\n");
                    printf("*      ALTURA      *   Ate' 60kg  *   Entre 60kg e 90kg  *  Acima de 90  *\n");
                    printf("**************************************************************************\n");
                    printf("* Menores que 1,20 *       A      *          D           *      G        *\n");
                    printf("**************************************************************************\n");
                    printf("*  De 1,20 a 1,70  *       B      *          E           *      H        *\n");
                    printf("**************************************************************************\n");
                    printf("* Maiores que 1,70 *       C      *          F           *      I        *\n");
                    printf("**************************************************************************\n\n");

                    float altura20, peso20;
                    do
                    {
                        printf("Insira sua altura.\n");
                        scanf("%f", &altura20);
                            if(altura20<=0)
                            {
                                printf("Numero invalido. Digite novamente.\n\n");
                            }
                    } while(altura20<=0);

                    do
                    {
                        printf("Insira seu peso.\n");
                        scanf("%f", &peso20);
                            if(peso20<=0)
                            {
                                printf("Numero invalido. Digite novamente.\n\n");
                            }
                    }while(peso20<=0);

                    if(altura20<1.20)
                    {
                        if(peso20<60)
                        {
                            printf("Sua faixa e' A.\n");
                        } else if(peso20<90)
                            {
                                printf("Sua faixa e' D.\n");
                            } else
                            {
                                printf("Sua faixa e' G.\n");
                            }
                    } else if(altura20<1.70)
                        {
                            if(peso20<60)
                            {
                                printf("Sua faixa e' B.\n");
                            } else if(peso20<90)
                                {
                                    printf("Sua faixa e' E.\n");
                                } else
                                    {
                                        printf("Sua faixa e' H.\n");
                                    }
                        } else if(peso20<60)
                            {
                                printf("Sua faixa e' C.\n");
                            } else if(peso20<90)
                                {
                                    printf("Sua faixa e' F.\n");
                                } else
                                    {
                                        printf("Sua faixa e' I.\n");
                                    }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista1;
                    break;
                }

                //#################################################################################################

                case 21:
                {

                    goto menu_principal;
                    break;
                }
                case 22:
                {
                    goto sair;
                    break;
                }

                default:
                {
                    printf ("\nO �tem escolhido n�o existe. Escolha novamente.\n\n\n");
                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();
                    goto menu_lista1;
                    break;
                }
            }
        }

        case 2:
        {

            menu_lista2:
            system("cls");
            int selecao_lista2;

            printf("\n=============================================\n");
            printf("\n>>> VOC� EST� NA LISTA 02\n\n");
            printf("\n>> Escolha o exerc�cio desejado:\n\n");
            printf("1  - Gerar sequ�ncias de n�meros delimitada pelo usu�rio.\n");
            printf("2  - Verificar a quantidade de n�meros positivos digitados.\n");
            printf("3  - Calcular somat�ria de determinada quantidade de idades.\n");
            printf("4  - Exibir determinada quantidade de n�meros pares negativos.\n");
            printf("5  - Exibir n�meros digitados que s�o divis�veis por 2 e 3.\n");
            printf("6  - Calcular o produto de determinada quantidade de n�meros digitados.\n");
            printf("7  - Calcular determinada quantidade de pesos digitados.\n");
            printf("8  - Exibir a somat�ria de determinados n�meros naturais digitados.\n");
            printf("9  - Exibir quantos n�meros negativos digitados s�o > -23 e < -16.\n");
            printf("10 - Calcular a m�dia de determinados n�meros pares multiplos de 5\n");
            printf("11 - Exibir a quantidade de termos positivos e a m�dia deles.\n");
            printf("12 - Ler n�meros at� que seja digitado 0.\n");
            printf("13 - Exibir o maior n�mero digitado.\n");
            printf("14 - Exibir somat�ria de sal�rios.\n");
            printf("15 - Calcular a m�dia de pesos numa determinada faixa.\n");
            printf("16 - Calcular m�dia de n�meros �mpares digitados e dos pares < 20.\n");
            printf("17 - Calcular n�meros positivos divis�veis por 3.\n");
            printf("18 - Gerar sequ�ncia de Fibonacci delimitada pelo usu�rio.\n");
            printf("19 - Calcular o fatorial de um determinado n�mero.\n");
            printf("20 - VOLTAR.\n");
            printf("21 - SAIR.\n\n");

            printf("DIGITE: ");
            scanf("%d", &selecao_lista2);

            switch(selecao_lista2)
            {

                case 1:
                {
                    /*Gere e exiba cada uma das seq��ncias abaixo com uma quantidade k de termos determinados pelo usu�rio.
                    i. 3, 6, 9, 12, 15,...
                    ii. 1/4, 1/8, 1/12, 1/16, 1/20,...
                    iii. 1/8, 3/16, 5/24, 7/32, 9/40, 11/48,...
                    iv. 2/3, 4/6, 6/9, 8/12,...
                    v. 2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
                    vi.  4/8, 1, 36/24, 2, 100/40, 144/48,... */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***      2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...      ***\n");
                    printf("*********************************************************\n\n");
                    int k1, cont1 = 0, a1 = 0, b1 = 0, c1;

                    printf("Digite um numero maior que zero, que limite a sequencia numerica.\n");
                    do
                    {
                        scanf("%d", &k1);
                            if(k1<=0)
                            {
                                printf("\nNumero invalido, digite novamente.\n");
                            }
                    } while(k1<=0);

                    while(cont1!=k1)
                    {
                        a1 = a1+2;
                        b1 = b1+5;
                        printf("%d/%d ", a1, b1);
                        cont1 = cont1+1;
                    }

                    printf("\n\n*********************************************************\n");
                    printf("***            4/8, 1, 36/24, 2 100/40, 3,...         ***\n");
                    printf("*********************************************************\n\n");

                    k1 = 0;
                    cont1 = 0;
                    a1 = 0;
                    b1 = 0;
                    c1 = 0;

                    printf("Digite um numero maior que zero, que limite a sequencia numerica.\n");
                    do
                    {
                        scanf("%d", &k1);
                            if(k1<=0)
                            {
                                printf("\nNumero invalido, digite novamente.\n");
                            }
                    } while(k1<=0);
                    printf("\n");

                    for(cont1=0; cont1<k1; cont1++)
                    {
                        a1=a1+2;
                        b1=b1+8;
                        c1=pow(a1,2);

                        if(c1%b1==0)
                        {
                            printf("%d, ", c1/b1);
                        } else
                            {
                                printf("%d/%d, ", c1, b1);
                            }
                    }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 2:
                {
                    /*Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada
                    pelo usu�rio. A vari�vel Num armazena cada uma dos K n�meros digitados e dever� ser alimentada
                    pelo usu�rio. Verifique e exiba a quantidade de n�meros positivos digitada.  */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 3:
                {
                    /* Receba a quantidade de idades de K indiv�duos.
                    K representa essa quantidade e deve ser digitada pelo usu�rio.
                    A vari�vel Idade armazena cada uma das K idades digitadas.
                    Calcule e mostre a somat�ria dessas idades. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***                  SOMA DAS IDADES                  ***\n");
                    printf("*********************************************************\n\n");
                    int k3=0, idade3, cont3=0,idadeTotal3=0;

                    printf("Digite a quantidade de individuos.\n");
                    do
                    {
                        scanf("%d", &k3);
                            if(k3<=0)
                            {
                                printf("\nNumero invalido, diigite novamente.\n");
                            }
                    } while(k3<=0);

                    while(cont3<k3)
                    {
                        printf("\nDigite a idade3:" );
                        do
                        {
                            scanf("%d", &idade3);
                                if(idade3<=0)
                                {
                                    printf("\nIdade invalida, digite novamente.\n");
                                }
                        }while(idade3<=0);

                        idadeTotal3=idadeTotal3+idade3;
                        cont3=cont3+1;
                    }
                    printf("A soma das idades e': %d\n", idadeTotal3);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 4:
                {
                    /*Receba K n�meros. Exiba a quantidade de n�meros pares negativos e quantas vezes o n�mero zero
                    foi digitado.
                    Obs1: K representa a quantidade de n�meros digitados pelo usu�rio.
                    Obs2: A vari�vel Num representa cada n�mero digitado pelo usu�rio.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 5:
                {
                    /* Receba K n�meros positivos.
                    Cada n�mero recebido dever� ser armazenado na vari�vel Num
                    e a vari�vel K representa a quantidade de n�meros solicitada pelo usu�rio.
                    Exiba a quantidade de n�meros divis�veis por 2 e 3 ao mesmo tempo. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***           Numeros divisiveis por 2 e 3            ***\n");
                    printf("*********************************************************\n\n");
                    int k5, num5, div5=0, cont5=0;

                    printf("Digite a quantidade de numeros positivos.\n");
                    do
                    {
                        scanf("%d", &k5);
                            if(k5<=0)
                            {
                                printf("\nNumero invalido, diigite novamente.\n");
                            }
                    } while(k5<=0);

                    while(cont5!=k5)
                    {
                        printf("\nDigite um numero inteiro.\n");
                        scanf("%i", &num5);
                            if(num5%2==0&&num5%3==0)
                            {
                                div5=div5+1;
                            }
                            cont5=cont5+1;
                    }
                    printf("\nA quantidade de numeros divisiveis por 2 e 3 e': %d\n", div5);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 6:
                {
                    /*Receba via teclado um n�mero X, onde este n�mero representa a quantidade de termos que
                    o usu�rio deseja. H representa cada um desses n�meros, calcule o produto dos X n�meros.
                    OBS: H deve ser maior ou igual a 15. */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 7:
                {
                    /*Receba a quantidade de pesos de N pessoas. N representa essa quantidade e deve ser digitada
                    pelo usu�rio. A vari�vel Peso armazena cada um do K pesos digitados.
                    Calcule e mostre a m�dia dos pesos digitados.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 8:
                {
                    /*Mostre na tela a soma e o produto dos K primeiros naturais.  OBS: K representa a quantidade
                    de n�meros naturais solicitado via teclado pelo usu�rio. Os n�meros naturais dever�o
                    ser gerados pelo programador. 0, 1, 2, 3, 4, 5, 6,....*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 9:
                {
                    /*Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada
                    pelo usu�rio. A vari�vel Num armazena cada uma dos K n�meros digitados e dever� ser alimentada
                    pelo usu�rio. Verifique e exiba a quantidade de n�meros negativos superiores ou igual
                    a -23 e inferiores a -16.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 10:
                {
                    /*Calcule e mostre a m�dia dos K primeiros pares e m�ltiplos de cinco.
                    OBS: K representa a quantidade solicitada de n�meros pares via teclado pelo usu�rio.
                    Os n�meros pares dever�o ser gerados pelo programador: 2, 4, 6, 8, 10...*/
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***            NUMEROS PARES E MULTIPLOS DE 5         ***\n");
                    printf("*********************************************************\n\n");

                    int k10=0, contpar10=0, mult5_10=0, cont10=0, media10=0, par10=0;

                    printf("Digite a quantidade de numeros pares a serem gerados.\n");
                    do
                    {
                        scanf("%d", &k10);
                            if(k10<=0)
                            {
                                printf("\nNumero invalido, digite novamente.\n");
                            }
                    } while(k10<=0);

                    for(cont10=0; cont10<k10; cont10++)
                    {
                        par10=par10+2;
                        printf("%d, ", par10);

                        if(par10%10==0)
                        {
                            contpar10=contpar10+1;
                            mult5_10=mult5_10+par10;
                        }

                    }

                    media10 = mult5_10/contpar10;
                    printf("\n\nA media dos numeros pares e multiplos de 5 e': %d\n\n", media10);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 11:
                {
                    /*Receba K n�meros inteiros quaisquer, K representa a quantidade de termos solicitada pelo
                    usu�rio e cada termo pode ser representado pela vari�vel N. Exiba a quantidade de n�meros
                    positivos recebidos e a m�dia dos n�meros �mpares.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 12:
                {
                    /* Leia um n�mero inteiro representado pela vari�vel N at� que N seja igual a zero.
                    Exiba uma mensagem informando se o n�mero � par ou �mpar. */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 13:
                {
                    /* Receba K n�meros quaisquer, K representa a quantidade de termos solicitada pelo usu�rio
                    e cada termo pode ser representado pela vari�vel N. Exiba o  maior n�mero digitado.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 14:
                {
                    /* Receba a quantidade de sal�rios de K indiv�duos. K representa essa quantidade e deve ser
                    digitada pelo usu�rio. A vari�vel Sal�rio armazena cada uma dos K sal�rios digitados.
                    Calcule e mostre a somat�ria dos sal�rios superiores a 3 sal�rios m�nimos e inferior
                    ou igual a 7 sal�rios m�nimos. Exiba tamb�m o maior e o menor sal�rio encontrado.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 15:
                {
                    /*Receba a quantidade de pesos de N pessoas.
                    N representa essa quantidade e deve ser digitada pelo usu�rio.
                    A vari�vel Peso armazena cada um do K pesos digitados.
                    Calcule e mostre a m�dia dos pesos superiores ou iguais a 70 quilos e inferiores ou iguais a 85,5
                    e a quantidade de pessoas que apresentam pesos superiores a 75 quilos.
                    Exiba tamb�m o menor e o maior peso encontrado. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***                  MEDIA DOS PESOS                  ***\n");
                    printf("*********************************************************\n\n");

                    int n15 = 0, cont15 = 0, contpeso15 = 0;
                    float peso15 = 0, pesomedia15 = 0, maiorpeso15 = 0, menorpeso15 = 0, peso75_15 = 0, media15 = 0;

                    printf("Digite a quantidade pessoas.\n");
                    do
                    {
                        scanf("%d", &n15);
                            if(n15<=0)
                            {
                                printf("\nNumero invalido, digite novamente.\n");
                            }
                    } while(n15<=0);

                    printf("\nDigite os pesos das pessoas.\n");
                    scanf("%f", &peso15);

                    maiorpeso15=peso15;
                    menorpeso15=peso15;

                    if(peso15>75)
                        {
                            peso75_15=peso75_15+1;
                        }

                    if(peso15>=70&&peso15<=85.5)
                        {
                            pesomedia15=pesomedia15+peso15;
                            contpeso15 =contpeso15 +1;

                        }

                    for(cont15=0; cont15<n15-1; cont15++)
                    {
                        scanf("%f", &peso15);


                        if(peso15>75)
                        {
                            peso75_15=peso75_15+1;
                        }

                        if(peso15>=70&&peso15<=85.5)
                        {
                            pesomedia15=pesomedia15+peso15;
                            contpeso15 =contpeso15 +1;
                        }

                        if(peso15>=maiorpeso15)
                        {
                            maiorpeso15=peso15;
                        } else if(peso15<=menorpeso15)
                            {
                            menorpeso15=peso15;
                            }
                    }

                    media15=pesomedia15/contpeso15;

                    printf("\nA media15 de peso das pessoas entre 70 e 85,5 e' de: %.2f\n", media15);
                    printf("\nA quantidade de pessoas com peso maior que 75 e' de: %.0f\n", peso75_15);
                    printf("\nO maior peso encontrado foi de: %.1f", maiorpeso15);
                    printf("\nO menor peso encontrado foi de: %.1f", menorpeso15);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 16:
                {
                    /* Receba a quantidade K de n�meros positivos. K representa essa quantidade e deve ser digitada
                    pelo usu�rio. A vari�vel Num armazena cada uma dos K n�meros digitados. Calcule e mostre a
                    quantidade de n�meros �mpares e a m�dia dos n�meros pares superiores a 20.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 17:
                {
                    /*Receba a quantidade K de n�meros quaisquer. K representa essa quantidade e deve ser digitada
                    pelo usu�rio. A vari�vel Num armazena cada uma dos K n�meros digitados. Calcule e mostre a
                    quantidade de n�meros positivos divis�veis por 3, a m�dia dos n�meros negativos.
                    Exiba tamb�m o maior n�mero encontrado e quantas vezes ele apareceu.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 18:
                {
                    /*Gere a seguinte sequ�ncia abaixo para K termos.
                    K representa a quantidade de n�meros que o usu�rio gostaria quer fosse exibida dessa sequ�ncia.
                    Mostre tamb�m a somat�ria apenas dos n�meros divis�veis por 3 dessa sequ�ncia. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***           1, 1, 2, 3, 5, 8, 13, 21...            ***\n");
                    printf("*********************************************************\n\n");

                    int k18=0,cont18=0, num1_18=0, num2_18=1, num3_18=0, somamulti3_18=0;

                    printf("Digite a quantidade de numeros a serem gerados.\n");
                        do
                        {
                        scanf("%d", &k18);
                            if(k18<=0)
                            {
                            printf("\nNumero invalido, digite novamente.\n");
                            }
                        } while(k18<=0);

                    printf("A sequencia desejada e': ");
                    printf("%d, ", num2_18);

                    for(cont18=0;cont18<k18-1;cont18++)
                        {
                        num3_18=num1_18+num2_18;
                        printf("%d, ", num3_18);
                        num1_18=num2_18;
                        num2_18=num3_18;
                            if(num3_18%3==0)
                            {
                            somamulti3_18=somamulti3_18+num3_18;
                            }
                        }
                    printf("\n\nA soma dos numeros gerados multiplos de 3 e': %d\n\n", somamulti3_18);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 19:
                {
                    /*Solicite ao usu�rio um n�mero maior ou igual a zero e inteiro representado pela vari�vel Num.
                    Calcular o fatorial desse n�mero. OBS: O Fatorial de zero e de um � um. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***                      FATORIAL                     ***\n");
                    printf("*********************************************************\n\n");

                    int num19, fatorial19;

                    printf("Digite um numero maior ou igual a 0 que voce deseje calcular o fatorial.\n");
                    scanf("%d", &num19);

                            if (num19==0&&num19==1)
                            {
                                printf("O fatorial e': 1\n\n");
                            } else for(fatorial19=1;num19>1;num19=num19-1)
                                    {
                                    fatorial19=fatorial19*num19;
                                    }
                    printf("O fatorial obtido e': %d\n\n", fatorial19);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista2;
                    break;
                }

                //#################################################################################################

                case 20:
                {

                    goto menu_principal;
                    break;
                }

                case 21:
                {
                    goto sair;
                    break;
                }

                default:
                {
                    printf ("\nO �tem escolhido n�o existe. Escolha novamente.\n\n\n");
                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();
                    goto menu_lista2;
                    break;
                }
            }
        }
        case 3:
        {
            menu_lista3:
            system("cls");
            int selecao_lista3;

            printf("\n=============================================\n");
            printf("\n>>> VOC� EST� NA LISTA 03\n\n");
            printf("\n>> Escolha o exerc�cio desejado:\n\n");
            printf("1  - Ler e mostrar 15 elementos de um vetor.\n");
            printf("2  - Receber 12 n�meros positivos num vetor.\n");
            printf("3  - Armazenar 10 n�meros num vetor. Mostrar o menor.\n");
            printf("4  - Armazenar 10 n�meros num vetor. Mostrar o menor par.\n");
            printf("5  - Armazenar no vetor A 10 n�meros positivos. Montar vetor B com o negativos.\n");
            printf("6  - Inverter valores em 2 vetores.\n");
            printf("7  - Receber 3 vetores e construir o quarto com os 3 primeiros.\n");
            printf("8  - Receber nota de 10 alunos num vetor. Calcular m�dia e aprovados.\n");
            printf("9  - Receber o peso de 15 pessoas.\n");
            printf("10 - Receber o sal�rio de 13 pessoas. Mostrar maiores e menores sal�rios.\n");
            printf("11 - Receber 10 elementos. Somar os �mpares. Montar vetor com a posi��o deles.\n");
            printf("12 - Ler determinada quantidade de elementos nos vetores A e B. Separar as posi��es par e �mpar.\n");
            printf("13 - VOLTAR.\n");
            printf("14 - SAIR.\n\n");

            printf("DIGITE: ");
            scanf("%d", &selecao_lista3);

            switch(selecao_lista3)
            {
                case 1:
                {
                    /*Leia quinze elementos de um vetor. Ap�s a alimenta��o mostre todos os elementos armazenados no vetor. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***         LEIA QUINZE ELEMENTOS DE UM VETOR         ***\n");
                    printf("*********************************************************\n\n");

                    int vetor15_1[15], x_1;

                    for(x_1=0;x_1<15;x_1++)
                        {
                            printf("\nDigite um numero para ser armazenado no vetor.\n");
                            scanf("%d", &vetor15_1[x_1]);
                        }

                    printf("Os elementos armazenados sao:\n");

                    for(x_1=0;x_1<15;x_1++)
                        {
                            if(x_1<13)
                        printf("%d, ", vetor15_1[x_1]);
                        else if(x_1<14)
                            printf("%d e ", vetor15_1[x_1]);
                        else if(x_1<15)
                            printf("%d./n", vetor15_1[x_1]);
                        }


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 2:
                {
                    /*Receba doze n�meros positivos e armazene no vetor A.
                    Ap�s a alimenta��o de todos os n�meros mostre apenas os n�meros maiores que 121 que est�o armazenados no vetor. */
                    system("cls");

                    printf("*********************************************************\n");
                    printf("***       RECEBA 12 NUMEROS POSITIVOS NO VETOR        ***\n");
                    printf("*********************************************************\n\n");

                    int a2[12],x_2, maior121_2=0;

                    for(x_2=0;x_2<12;x_2++)
                        {
                            do
                            {
                                printf("\nDigite um numero positivo.\n");
                                scanf("%d", &a2[x_2]);
                                if(a2[x_2]<0)
                                {
                                    printf("Numero invalido. Digite novamente.\n");
                                }
                            }while(a2[x_2]<0);
                        }

                    printf("Os numeros armazenados maiores que 121 sao:\n");
                    for(x_2=0;x_2<12;x_2++)
                    {
                        if(a2[x_2]>121)
                        {
                            printf("%d, ", a2[x_2]);
                            maior121_2=maior121_2+1;
                        }
                    }
                    if(maior121_2==0)
                            {
                                printf("Nao ha numeros maiores que 121.\n");
                            }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 3:
                {
                    /*Armazene num vetor dez n�meros positivos.
                    Exiba o conte�do do vetor.
                    Mostre o menor n�mero, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor. */
                    system("cls");

                    printf("******************************************************************\n");
                    printf("***       ARMAZENE 10 NUMEROS NO VETOR E MOSTRE O MENOR        ***\n");
                    printf("******************************************************************\n\n");

                    int vetor10_3[10],x_3,menor3=0,pos3=0, contmenor3=0;

                    for(x_3=0;x_3<10;x_3++)
                        {
                            printf("\nDigite um numero positivo qualquer.\n");
                            do
                            {
                                scanf("%d", &vetor10_3[x_3]);
                                    if(vetor10_3[x_3]<0)
                                        printf("\nNumero invalido. Digite novamente.\n");
                            }while(vetor10_3[x_3]<0);

                            if(x_3==0||vetor10_3[x_3]<menor3)
                            {
                                menor3=vetor10_3[x_3];

                            }
                        }
                        printf("\nO menor3 numero encontrado foi: %d\n", menor3);

                        for(x_3=0;x_3<10;x_3++)
                            {
                                if(vetor10_3[x_3]==menor3)
                                {
                                    printf("A posicao do menor numero e': %d\n", x_3);
                                    contmenor3=contmenor3+1;
                                }
                            }
                    printf("O menor numero aparece %d vezes.\n", contmenor3);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 4:
                {
                    /*Armazene num vetor no m�ximo dez n�meros quaisquer.
                    Exiba o conte�do do vetor.
                    Mostre o menor n�mero par, quantas vezes ele foi digitado e em que posi��es ele apareceu dentro do vetor. */
                    system("cls");

                    printf("**********************************************************************\n");
                    printf("***       ARMAZENE 10 NUMEROS NO VETOR E MOSTRE O MENOR PAR        ***\n");
                    printf("**********************************************************************\n\n");

                    int menorpar,contpar=0,contmenorpar=0,pospar=0,x,vetorPos[10],y=0, quantidade;

                    printf("Digite a quantidade de numeros que deseja armazenar. (Maximo de 10)\n");
                        do
                        {
                            scanf("%d", &quantidade);
                            if(quantidade>10 || quantidade<0)
                                printf("Numero invalido. Digite novamente um numero entre 1 e 10.\n");
                        } while(quantidade>10||quantidade<0);

                    int vetor10[quantidade];
                    for(x=0;x<quantidade;x++)
                    {
                        printf("\nDigite um numero qualquer.\n");
                        scanf("%d", &vetor10[x]);
                            if(vetor10[x]%2==0)
                                {
                                    contpar++;

                                    if(contpar==1 || vetor10[x]<menorpar)

                                    menorpar=vetor10[x];
                                }
                    }

                    printf("\nOs numeros armazenados sao:\n");

                    for(x=0;x<quantidade;x++)
                    {
                        if(x<quantidade-2)
                        printf("%d, ", vetor10[x]);
                        else if(x<quantidade-1)
                        printf("%d e ", vetor10[x]);
                        else if(x<quantidade)
                        printf("%d.", vetor10[x]);

                        if(vetor10[x]==menorpar)
                        {
                            contmenorpar=contmenorpar+1;
                            vetorPos[y]=x;
                            y++;
                        }

                    }

                    printf("\n\nO menor numero par encontrado no vetor e': %d\n", menorpar);

                        if(contmenorpar>1)
                        printf("\nO menor numero par aparece %d vezes no vetor.\n", contmenorpar);
                            else
                                printf("\nO menor numero par aparece %d vez no vetor.\n", contmenorpar);

                    printf("\nAs posicoes em que ele aparece sao:\n");

                    for(x=0;x<y;x++)
                    {
                        if(x<y-2)
                        printf("%d, ", vetorPos[x]);
                        else if(x<y-1)
                        printf("%d e ", vetorPos[x]);
                        else
                        printf("%d.", vetorPos[x]);}

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }
                //#################################################################################################

                case 5:
                {
                    /*Armazene no vetor A 10 elementos positivos.
                    Construa o vetor B do mesmo tipo e dimens�o.
                    Cada elemento do vetor B deve ser o valor negativo do elemento correspondente do vetor A.
                    Desta forma, se em A [1] estiver armazenado o elemento 8 deve estar em B [1] o valor �8,
                    e assim por diante. Apresentar o conte�do dos dois vetores.*/
                    system("cls");

                    printf("********************************************************************************************\n");
                    printf("***       ARMAZENE 10 NUMEROS NO VETOR A E OS MESMOS VALORES NEGATIVOS NO VETOR B        ***\n");
                    printf("********************************************************************************************\n\n");

                    int a5[10], b5[10],x_5;

                    for(x_5=0;x_5<10;x_5++)
                    {
                        printf("\nDigite um numero positivo qualquer.\n");
                            do
                            {
                                scanf("%d", &a5[x_5]);
                                    if(a5[x_5]<0)
                                        printf("\nNumero invalido. Digite novamente.\n");
                            }while(a5[x_5]<0);
                        b5[x_5]=a5[x_5]*-1;
                    }

                    printf("\nOs numeros armazenados no vetor a5 sao:\n");
                    for(x_5=0;x_5<10;x_5++)
                        {
                            if(x_5<8)
                            printf("%d, ", a5[x_5]);
                            else if(x_5<9)
                                printf("%d e ", a5[x_5]);
                            else
                                printf("%d.\n", a5[x_5]);
                        }

                    printf("\nOs numeros armazenados no vetor b5 sao:\n");
                    for(x_5=0;x_5<10;x_5++)
                        {
                            if(x_5<8)
                            printf("%d, ", b5[x_5]);
                            else if(x_5<9)
                                printf("%d e ", b5[x_5]);
                            else
                                printf("%d.\n", b5[x_5]);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 6:
                {
                    /*O usu�rio poder� digitar a quantidade de n�meros que ele deseja armazenar no vetor A
                    desde que esse valor seja superior a 4 e inferior ou igual a 20.
                    Construa o vetor B da mesma dimens�o e com os mesmos elementos do vetor A.
                    Observando que o primeiro elemento de A passa a ser o �ltimo de B, o segundo elemento de A
                    passa a ser o pen�ltimo de B e a assim por diante. Exibir o conte�do dos dois vetores.*/
                    system("cls");

                    printf("************************************************************************************************************\n");
                    printf("***       LER 3 VETORES, CONSTRUIR O QUARTO COM BASE NOS PRIMEIROS E MOSTRAR OS NUMEROS NEGATIVOS        ***\n");
                    printf("************************************************************************************************************\n\n");

                    int limiteA6, x_6, y_6;

                    printf("Insira o tamanho do vetor A, entre 5 e 20.\n");
                        do
                        {
                            scanf("%d", &limiteA6);
                                if(limiteA6<=4 || limiteA6>20)
                                    printf("Numero invalido, digite novamente.\n");
                        }while(limiteA6<=4 || limiteA6>20);

                    int vetorA[limiteA6];
                    int vetorB[limiteA6];

                    printf("Insira os numeros que serao armazenados no vetor A.\n");

                        for(x_6=0;x_6<limiteA6;x_6++)
                        {
                            scanf("%d", &vetorA[x_6]);
                        }

                        for(x_6=0, y_6=limiteA6-1;x_6<limiteA6;x_6++,y_6--)
                        {
                            vetorB[y_6]=vetorA[x_6];
                        }

                    printf("Os numeros armazenados no vetor A sao:\n");

                        for(x_6=0;x_6<limiteA6;x_6++)
                        {
                            if(x_6<limiteA6-2)
                            printf("%d, ", vetorA[x_6]);
                            else if(x_6<limiteA6-1)
                            printf("%d e ", vetorA[x_6]);
                            else if(x_6<limiteA6)
                            printf("%d.\n", vetorA[x_6]);
                        }

                    printf("Os numeros armazenados no vetor B sao:\n");

                        for(x_6=0;x_6<limiteA6;x_6++)
                        {
                            if(x_6<limiteA6-2)
                            printf("%d, ", vetorB[x_6]);
                            else if(x_6<limiteA6-1)
                            printf("%d e ", vetorB[x_6]);
                            else if(x_6<limiteA6)
                            printf("%d.\n", vetorB[x_6]);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 7:
                {
                    /*Leia tr�s vetores (A, B e C) de uma dimens�o com 5 elementos cada.
                    Construa o vetor D, sendo este a jun��o dos tr�s outros vetores.
                    Armazene no vetor D o primeiro elemento do vetor A depois do B e do C e assim sucessivamente.
                    Apresentar o conte�do de todos os vetores. Exiba quantas vezes apareceram n�meros negativos no vetor D.*/
                    system("cls");

                    printf("************************************************************************************************************\n");
                    printf("***       LER 3 VETORES, CONSTRUIR O QUARTO COM BASE NOS PRIMEIROS E MOSTRAR OS NUMEROS NEGATIVOS        ***\n");
                    printf("************************************************************************************************************\n\n");

                    int vetorA7[5];
                    int vetorB7[5];
                    int vetorC7[5];
                    int vetorD7[15];
                    int contnegativo7=0;
                    int x_7=0;
                    int y_7=0;

                    printf("Digite 5 numeros quaisquer, positivos ou negativos, para serem armazenados no vetor A.\n");
                    for(x_7=0;x_7<5;x_7++)
                        {
                            scanf("%d", &vetorA7[x_7]);
                        }
                    printf("Digite 5 numeros quaisquer, positivos ou negativos, para serem armazenados no vetor B.\n");
                    for(x_7=0;x_7<5;x_7++)
                        {
                            scanf("%d", &vetorB7[x_7]);
                        }

                    printf("Digite 5 numeros quaisquer, positivos ou negativos, para serem armazenados no vetor C.\n");
                    for(x_7=0;x_7<5;x_7++)
                        {
                            scanf("%d", &vetorC7[x_7]);
                        }

                    for(x_7=0;x_7<5;x_7++)
                        {
                            vetorD7[y_7]=vetorA7[x_7];
                            vetorD7[y_7+1]=vetorB7[x_7];
                            vetorD7[y_7+2]=vetorC7[x_7];
                            y_7=y_7+3;// Esse Y n�o acumula o valor de "y_7+2". O programa entende quando vc muda a posi��o ou o valor da vari�vel.

                            if(vetorA7[x_7]<0 || vetorB7[x_7]<0 || vetorC7[x_7]<0)
                                contnegativo7=contnegativo7+1;
                        }

                    printf("\n\nOs numeros armazenados no vetor A foram:\n");

                    for(x_7=0;x_7<5;x_7++)
                        {
                            if(x_7<3)
                            printf("%d, ", vetorA7[x_7]);
                            else if (x_7<4)
                                printf("%d e ", vetorA7[x_7]);
                                else
                                printf("%d.", vetorA7[x_7]);
                        }

                    printf("\nOs numeros armazenados no vetor B foram:\n");

                        for(x_7=0;x_7<5;x_7++)
                            {
                                if(x_7<3)
                                printf("%d, ", vetorB7[x_7]);
                                    else if (x_7<4)
                                    printf("%d e ", vetorB7[x_7]);
                                    else
                                    printf("%d.", vetorB7[x_7]);
                            }

                    printf("\nOs numeros armazenados no vetor C foram:\n");

                        for(x_7=0;x_7<5;x_7++)
                            {
                                if(x_7<3)
                                printf("%d, ", vetorC7[x_7]);
                                    else if (x_7<4)
                                    printf("%d e ", vetorC7[x_7]);
                                    else
                                    printf("%d.", vetorC7[x_7]);

                            }

                    printf("\nOs numeros armazenados no vetor D foram:\n");

                            for(x_7=0;x_7<15;x_7++)
                            {
                                if(x_7<13)
                                printf("%d, ", vetorD7[x_7]);
                                    else if (x_7<14)
                                    printf("%d e ", vetorD7[x_7]);
                                    else
                                    printf("%d.", vetorD7[x_7]);
                            }

                    printf("\nExistem %d numeros negativos no vetor D.\n", contnegativo7);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 8:
                {
                    /*Receba a nota de dez alunos e armazene essas notas em um vetor. Calcule e mostre:
                    a)	A m�dia da classe;
                    b)	A quantidade de alunos aprovados, isto �, com nota >=7;
                    c)	A quantidade de alunos reprovados, isto �, com nota <7*/
                    system("cls");

                    printf("***********************************************************************\n");
                    printf("***       RECEBER A NOTA DE DEZ ALUNOS E ARMAZENAR NUM VETOR        ***\n");
                    printf("***********************************************************************\n\n");

                    int aprovados=0, reprovados=0, x=0;
                    float notasAlunos[10], totalClasse=0;
                    printf("Insira a nota dos 10 alunos.\n");
                        for(x=0;x<10;x++)
                        {
                            do
                            {
                                scanf("%f", &notasAlunos[x]);
                                    if(notasAlunos[x]<0||notasAlunos[x]>10)
                                        printf("\nNota invalida. Digite novamente.\n");
                            }while(notasAlunos[x]<0||notasAlunos[x]>10);

                            totalClasse=totalClasse+notasAlunos[x];

                            if(notasAlunos[x]>=7)
                            aprovados=aprovados+1;
                            else if(notasAlunos[x]<7)
                            reprovados=reprovados+1;
                        }


                    printf("\nA media da classe e': %.2f", totalClasse/10);
                    printf("\nNumero de alunos aprovados: %d", aprovados);
                    printf("\nNumero de alunos reprovados: %d\n", reprovados);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 9:
                {
                    /*Receba o peso e nome de um grupo contendo no m�ximo de 15 pessoas.
                    Armazene esses dados em dois vetores, o primeiro contendo os pesos e o >>segundo contendo os nomes.<<N�O PRECISA
                    Calcule e mostre:
                    a) Quantas pessoas apresentaram peso superior ao menor peso.
                    >>Armazene os nomes das pessoas que satisfazem essa condi��o.<< N�O PRECISA
                    Mostre o conte�do desse vetor no programa principal.

                    b) Armazene num outro vetor os pesos superiores a 55 quilos e menores ou igual a 80 quilos das pessoas.
                    Mostre o conte�do desse vetor. */
                    system("cls");

                    printf("*******************************************************\n");
                    printf("***            ARMAZENAR PESOS EM VETORES           ***\n");
                    printf("*******************************************************\n\n");

                    int x_9=0, y_9=0, acimaMenor9=0, contPeso55_9=0;
                    int pesos9[15], menorPeso9=0;

                    printf("Insira os pesos das 15 pessoas.\n");
                        for(x_9=0;x_9<15;x_9++)
                        {
                            do
                            {
                                scanf("%d", &pesos9[x_9]);
                                if(pesos9[x_9]<=0)
                                        printf("\nPeso invalido. Digite novamente.\n");
                            } while(pesos9[x_9]<=0);

                            if(x_9==0 || pesos9[x_9]<menorPeso9)
                                menorPeso9=pesos9[x_9];

                            if(pesos9[x_9]>menorPeso9)
                                acimaMenor9++;

                            if(pesos9[x_9]>55&&pesos9[x_9]<=80)
                                contPeso55_9++;
                        }

                    int peso55[contPeso55_9];

                        for(x_9=0,y_9=0;x_9<15;x_9++,y_9++)
                        {
                            if(pesos9[x_9]>55 && pesos9[x_9]<=80)
                                peso55[x_9]=pesos9[x_9];
                        }

                    printf("\nPesos no vetor A:\n");
                        for(x_9=0;x_9<15;x_9++)
                        {
                            if(x_9<13)
                            printf("%d, ", pesos9[x_9]);
                            else if(x_9<14)
                            printf("%d e ", pesos9[x_9]);
                            else
                            printf("%d.\n\n ", pesos9[x_9]);
                        }



                    printf("\nMenor peso entre as 15 pessoas: %d\n\n", menorPeso9);
                    printf("Quantidade de pessoas que apresentam peso superior ao menor peso: %d\n\n", acimaMenor9);

                    printf("Pesos superiores a 55 e menores ou iguais a 80 quilos:\n");
                        for(x_9=0;x_9<contPeso55_9;x_9++)
                        {
                            if(x_9<contPeso55_9-2)
                            printf("%d, ", peso55[x_9]);
                            else if(x_9<contPeso55_9-1)
                            printf("%d e ", peso55[x_9]);
                            else
                            printf("%d.\n\n ", peso55[x_9]);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 10:
                {
                    /*Receba o sal�rio e o nome de um grupo contendo no m�ximo 13 pessoas.
                    Armazene esses dados em dois vetores, o primeiro contendo os sal�rios e o segundo contendo os nomes.
                    Calcule e mostre:
                    a)	>>Armazene em um vetor os nomes de todas as pessoas que apresentam a maior sal�rio.<< N�O PRECISA
                    b)	>>Armazene num outro vetor os nomes de todas as pessoas que apresentam a menor sal�rio encontrado.<< N�O PRECISA
                    Mostre o conte�do de todos os vetores. */
                    system("cls");

                    printf("******************************************************************\n");
                    printf("***       ARMAZENAR MENOR E MAIOR SALARIOS EM 2 VETORES        ***\n");
                    printf("******************************************************************\n\n");

                    int limite10, x_10, contMaiSal10=0, contMenSal10=0;
                    float maiorSalario10=0, menorSalario10=0;

                    printf("Insira um numero de 1 a 13 para delimitar o numero de salarios:\n");

                        do
                        {
                            scanf("%d", &limite10);
                                if(limite10<1||limite10>13)
                                    printf("Numero invalido. Digite novamente.\n");
                        }while(limite10<1||limite10>13);

                    float salarios[limite10];

                    if(limite10==1)
                    printf("Insira o %d salario:\n", limite10);
                    else
                        printf("Insira os %d salarios:\n", limite10);

                        for(x_10=0;x_10<limite10;x_10++)
                        {
                            scanf("%f", &salarios[x_10]);
                                if(x_10==0 || salarios[x_10]<menorSalario10)
                                    menorSalario10=salarios[x_10];


                                if(x_10==0 || salarios[x_10]>maiorSalario10)
                                    maiorSalario10=salarios[x_10];

                        }

                        for(x_10=0;x_10<limite10;x_10++)
                        {
                            if(salarios[x_10]==menorSalario10)
                                contMenSal10++;

                            if(salarios[x_10]==maiorSalario10)
                               contMaiSal10++;
                        }

                    printf("Salarios inseridos:\n");
                        for(x_10=0;x_10<limite10;x_10++)
                        {
                            if(x_10<limite10-2)
                            printf("%.2f, ", salarios[x_10]);
                            else if(x_10<limite10-1)
                            printf("%.2f e ", salarios[x_10]);
                            else
                            printf("%.2f.\n\n", salarios[x_10]);
                        }

                    printf("Menor salario encontrado: %.2f\n\n", menorSalario10);
                    printf("Maior Salario encontrado: %.2f\n\n", maiorSalario10);
                    printf("Quantidade menor salario: %d\n\n", contMenSal10);
                    printf("Quantidade maior salario: %d\n\n", contMaiSal10);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 11:
                {
                    /* Efetue a leitura de dez elementos para o vetor A.
                    No final, apresente a somat�ria de todos os elementos do vetor A que sejam �mpares.
                    Armazene no vetor B a posi��o em que est�o armazenados os n�meros �mpares. Mostre o conte�do dos dois vetores. */
                    system("cls");

                    printf("********************************************************\n");
                    printf("***       LER 10 ELEMENTOS E SOMAR OS IMPARES        ***\n");
                    printf("********************************************************\n\n");

                    int a11[10],x=0, y=0, somaImpar=0, contImpar=0;

                    printf("Insira 10 numeros para serem armazenados no vetor A.\n");
                        for(x=0;x<10;x++)
                        {
                            scanf("%d", &a11[x]);
                            if(a11[x]%2!=0)
                            {
                                somaImpar=somaImpar+a11[x];
                                contImpar=contImpar+1;
                            }
                        }

                    int B[contImpar];

                        for(x=0;x<10;x++)
                        {
                            if(a11[x]%2!=0)
                            {
                                B[y]=x;
                                y++;
                            }
                        }

                    printf("\nOs numeros armazenados no vetor A sao:\n");
                        for(x=0;x<10;x++)
                        {
                            if(x<8)
                            printf("%d, ", a11[x]);
                                else if (x<9)
                                printf("%d e ", a11[x]);
                                else if (x<10)
                                printf("%d.\n", a11[x]);
                        }

                    printf("\nA soma dos numeros impares no vetor A e': %d\n", somaImpar);

                    printf("\nAs posicoes dos numeros impares armazenadas no vetor B sao:\n");
                        for(x=0;x<contImpar;x++)
                        {
                            if(x<contImpar-2)
                            printf("%d, ", B[x]);
                                else if(x<contImpar-1)
                                printf("%d e ", B[x]);
                                else
                                printf("%d.\n\n", B[x]);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 12:
                {
                    /*Leia k elementos (valores inteiros) para os vetores A e B de uma dimens�o do tipo vetor.
                    Construir vetores C e D. O vetor C deve ser formado pelos elementos de �ndice �mpar dos vetores A e B,
                    e O vetor D deve ser formado pelos elementos de �ndice par dos vetores A e B. Apresente os conte�dos de todos os vetores. */
                    system("cls");

                    printf("*******************************************************************************************\n");
                    printf("***       CONTRUIR OS VETORES A E B, E DEPOIS ARMAZENAR PARES E IMPARES EM C E D        ***\n");
                    printf("*******************************************************************************************\n\n");

                    int limite, x, y, contPar=0, contImpar=0;

                    printf("Digite o tamanho dos vetores A e B.\n");
                    scanf("%d", &limite);

                    int vetorA[limite], vetorB[limite];

                    printf("Insira os numeros que serao armazenados nos vetores A e B:\n");
                        for(x=0; x<limite; x++)
                        {
                            printf("A: ");
                            scanf("%d", &vetorA[x]);

                            printf("B: ");
                            scanf("%d", &vetorB[x]);

                                if(vetorA[x]%2==0)
                                    contPar=contPar+1;
                                    else
                                    contImpar=contImpar+1;

                                if(vetorB[x]%2==0)
                                    contPar=contPar+1;
                                    else
                                    contImpar=contImpar+1;
                        }


                    int vetorC[contImpar], vetorD[contPar];

                        for(x=0,y=0;x<limite;x++,y++)
                        {
                            if(vetorA[x]%2==0)
                                vetorD[y]=vetorA[x];
                                else
                                vetorC[y]=vetorA[x];

                            if(vetorB[x]%2==0)
                                vetorD[y]=vetorB[x];
                                else
                                vetorC[y]=vetorB[x];
                        }

                    printf("Os numeros armazenados no vetor A foram:\n");
                        for(x=0;x<limite;x++)
                        {
                            if(x<limite-2)
                                printf("%d, ", vetorA[x]);
                                else if(x<limite-1)
                                printf("%d e ", vetorA[x]);
                                else
                                printf("%d. \n", vetorA[x]);
                        }

                    printf("Os numeros armazenados no vetor B foram:\n");
                        for(x=0;x<limite;x++)
                        {
                            if(x<limite-2)
                                printf("%d, ", vetorB[x]);
                                else if(x<limite-1)
                                printf("%d e ", vetorB[x]);
                                else
                                printf("%d. \n", vetorB[x]);
                        }

                    printf("Os numeros armazenados no vetor C foram:\n");
                        for(x=0;x<contImpar;x++)
                        {
                            if(x<contImpar-2)
                                printf("%d, ", vetorC[x]);
                                else if(x<contImpar-1)
                                printf("%d e ", vetorC[x]);
                                else
                                printf("%d. \n", vetorC[x]);
                        }

                    printf("Os numeros armazenados no vetor D foram:\n");
                        for(x=0;x<contPar;x++)
                        {
                            if(x<contPar-2)
                                printf("%d, ", vetorD[x]);
                                else if(x<contPar-1)
                                printf("%d e ", vetorD[x]);
                                else
                                printf("%d.\n\n", vetorD[x]);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista3;
                    break;
                }

                //#################################################################################################

                case 13:
                {

                    goto menu_principal;
                    break;
                }

                //#################################################################################################

                case 14:
                {
                    goto sair;
                    break;
                }

                default:
                {
                    printf ("\nO �tem escolhido n�o existe. Escolha novamente.\n\n\n");
                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();
                    goto menu_lista3;
                    break;
                }
            }
        }

        case 4:
        {
            menu_lista4:
            system("cls");
            int selecao_lista4;

            printf("\n=============================================\n");
            printf("\n>>> VOC� EST� NA LISTA 04\n\n");
            printf("\n>> Escolha o exerc�cio desejado:\n\n");
            printf("1  - Fun��o que calcula o volume de uma esfera.\n");
            printf("2  - Fun��o que identifica se o valor � positivo ou negativo.\n");
            printf("3  - Fun��o que divide 2 n�meros.\n");
            printf("4  - Fun��o que faz c�lculo de reajuste de sal�rio.\n");
            printf("5  - Fun��o que identifica se um n�mero � par ou �mpar.\n");
            printf("6  - Fun��o que faz c�lculo de reajuste de sal�rio (2).\n");
            printf("7  - Fun��o que mostra determinado n�mero de termos da sequ�ncia Fibonacci.\n");
            printf("8  - Fun��o que calcula equa��o de segundo grau.\n");
            printf("9  - Fun��o que calcula o fatorial de um n�mero.\n");
            printf("10 - Fun��o que determina o tipo de tri�ngulo inserido.\n");
            printf("11 - Fun��o que categoriza um usu�rio pela idade inserida.\n");
            printf("12 - Fun��o de calculo de m�dia ponderada e m�dia harm�nica.\n");
            printf("13 - Fun��o que recebe n�mero positivo e mostra a tabuada do 1 at� esse n�mero.\n");
            printf("14 - Fun��o que calcula e mostra o conceito da m�dia de determinados alunos.\n");
            printf("15 - Fun��o que calcula o peso ideal para homem e mulheres.\n");
            printf("16 - Fun��o com 4 vetores.\n");
            printf("17 - VOLTAR.\n");
            printf("18 - SAIR.\n\n");

            printf("DIGITE: ");
            scanf("%d", &selecao_lista4);

            switch(selecao_lista4)
            {
                case 1:
                {
                    /*Crie a fun��o Esfera que receba da fun��o main o valor do raio e
                    calcule o volume da esfera o seu volume (v = 4/3*Pi*R 3 ). Exiba o
                    resultado obtido no interior da fun��o main.*/
                    system("cls");
                    printf("****************************************************************\n");
                    printf("***         CALCULAR VOLUME DE UMA ESFERA COM FUNCAO         ***\n");
                    printf("****************************************************************\n\n");

                    float raio1, volume1;

                    printf("Digite o valor do raio da esfera:\n");
                    scanf("%f", &raio1);

                    volume1=esfera1(raio1);

                    printf("O volume da esfera e': %.2f\n\n", volume1);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 2:
                {
                    /* Crie a fun��o Verifica que receba da fun��o main um valor do tipo
                    inteiro e verifica se o valor � positivo ou negativo. Exiba na fun��o main
                    o n�mero digitado e informe se o n�mero � positivo ou negativo ou
                    zero. */
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***         VERIFICAR SE UM VALOR E' POSITIVO, NEGATIVO OU ZERO         ***\n");
                    printf("***************************************************************************\n\n");

                    int valor2, resultado2;

                    printf("Insira um numero inteiro para ser verificado:\n");
                    scanf("%d", &valor2);

                    resultado2=verifica2(valor2);

                    printf("\nO numero digitado foi %d.\n", valor2);

                        if(resultado2==0)
                            printf("\nO numero digitado e' zero.\n\n");
                            else if(resultado2==1)
                            printf("\nO numero digitado e' negativo.\n\n");
                            else if(resultado2==2)
                            printf("\nO numero digitado e' positivo.\n\n");

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 3:
                {
                    /*Crie a fun��o Divis�o que receba da fun��o main dois n�meros que
                    possibilitem o c�lculo da divis�o do primeiro pelo segundo. Exiba na
                    fun��o main os n�meros e o resultado obtido na fun��o Divis�o.*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***         EFETUAR UMA DIVISAO DO PRIMEIRO PELO SEGUNDO NUMERO         ***\n");
                    printf("***************************************************************************\n\n");

                    float valorA3, valorB3, resultado3;

                    printf("Insira o primeiro valor:\n");
                    scanf("%f", &valorA3);

                    printf("Insira o valor pelo qual este numero sera' dividido:\n");

                        do
                        {
                            scanf("%f", &valorB3);
                            if(valorB3==0)
                            printf("Numero invalido. Digite novamente.\n");
                        }while(valorB3==0);


                    resultado3=divisao3(valorA3,valorB3);

                    printf("O resultado da divisao e': %.2f\n\n", resultado3);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 4:
                {
                    /*Crie a fun��o ReajSalNovo que receba da fun��o main o valor do sal�rio e efetue o c�lculo do reajuste de sal�rio cada funcion�rio.
                    Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
                    Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %;
                    caso seja maior que 1000, o reajuste deve ser de 5%. Exiba na fun��o main o sal�rio antigo e novo sal�rio obtido na fun��o.  */
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                         REAJUSTE DE SALARIOS                        ***\n");
                    printf("***************************************************************************\n\n");

                    float salario4, novoSalario4;
                    int x;

                    printf("Insira o salario a ser reajustado:\n");
                    scanf("%f", &salario4);

                    novoSalario4=ReajSalNovo4(salario4);

                    printf("\n\nO salario antigo era: %.2f\n", salario4);
                    printf("Salario reajustado: %.2f\n\n", novoSalario4);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 5:
                {
                    /*Crie a fun��o ParImpar5 que receba da fun��o main um valor do tipo inteiro
                    e maior que zero que verifique se o n�mero � para ou �mpar.
                    Exiba na fun��o main o n�mero e o resultado obtido na fun��o ParImpar5.*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***         FUNCAO QUE DETERMINA SE O NUMERO E' PAR OU IMPAR            ***\n");
                    printf("***************************************************************************\n\n");

                    int num5;

                    printf("Digite um numero para ser verificado:\n");
                        do
                        {
                            scanf("%d", &num5);
                            if(num5==0)
                                printf("Numero invalido. Digite novamente.\n");
                        }while(num5==0);

                    ParImpar5(num5);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 6:
                {
                    /*Crie a fun��o ReajSalNovo que receba da fun��o main o valor do sal�rio e efetue o c�lculo do reajuste de sal�rio cada funcion�rio.
                    Considere que o funcion�rio deve receber um reajuste de 15% caso seu sal�rio seja menor que 800 reais.
                    Se o sal�rio for maior ou igual a 800 e menor ou igual a 1000, seu reajuste ser� de 10 %; caso seja maior que 1000,
                    o reajuste deve ser de 5%. Exiba na fun��o main o sal�rio antigo e novo sal�rio obtido na fun��o de K n�meros definido pelo usu�rio.
                    Essa quantidade K dever� ser maior que zero e menor ou igual a 10.   */
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                         REAJUSTE DE SALARIOS 2                      ***\n");
                    printf("***************************************************************************\n\n");

                    int x6,k6;

                    printf("Insira a quantidade de salarios que serao reajustados (Maximo de 10):\n");
                        do
                        {
                            scanf("%d", &k6);
                                if(k6<=0||k6>10)
                                    printf("Numero invalido, digite novamente.\n");
                        }while(k6<=0||k6>10);

                        for(x6=0;x6<k6;x6++)
                        {
                            if(x6==0)
                            {
                                printf(">> Insira 1o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==1)
                            {
                                printf(">> Insira 2o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==2)
                            {
                                printf(">> Insira 3o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==3)
                            {
                                printf(">> Insira 4o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==4)
                            {
                                printf(">> Insira 5o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==5)
                            {
                                printf(">> Insira 6o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==6)
                            {
                                printf(">> Insira 7o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==7)
                            {
                                printf(">> Insira 8o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==8)
                            {
                                printf(">> Insira 9o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }else if(x6==9)
                            {
                                printf(">> Insira 10o salario a ser reajustado:\n");
                                scanf("%f", &salario6);
                            }

                            ReajSalNovo6(salario6);
                        }

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 7:
                {
                    /*Crie a fun��o M�diaFibonacci que receba da fun��o main um valor do tipo inteiro e maior que zero que
                    represente a quantidade de termos da seq��ncia e calcule a m�dia dos termos da seq��ncia.
                    Exiba na fun��o main o resultado obtido na fun��o M�diaFibonacci.
                    Seq��ncia de Fibonacci:
                     0  1  1  2   3   5   8  13  21....  */
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                             MEDIA FIBONACCI                         ***\n");
                    printf("***************************************************************************\n\n");

                    int termosFibonacci7;

                    printf("Insira a quantidade de termos que deseja gerar na sequencia de Fibonacci:\n");
                        do
                        {
                            scanf("%d", &termosFibonacci7);
                                if(termosFibonacci7<=0)
                                    printf("Numero invalido, digite novamente.\n");
                        }while(termosFibonacci7<=0);

                    MediaFibonacci7(termosFibonacci7);

                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 8:
                {
                    /* Crie a fun��o Delta que receba da fun��o main tr�s n�meros reais que garantem a exist�ncia de uma equa��o do segundo grau.
                    Verifique e exiba dentro da fun��o main se h� ra�zes reais e os seus respectivos valores. Caso contr�rio informe ao usu�rio.
                    Observa��es:

                    a. Condi��o de exist�ncia de uma equa��o do segundo grau: o coeficiente que acompanha o x2 dever� ser um n�mero diferente de zero.
                    b. Delta maior que zero: a equa��o possui duas ra�zes reais e distintas.
                    c. Delta igual � zero: a equa��o possui duas ra�zes iguais.
                    d. Delta menor que zero: a equa��o n�o apresenta ra�zes reais. */
                    system("cls");
                    printf("************************************************\n");
                    printf("***      FUNCAO EQUACAO DE SEGUNDO GRAU      ***\n");
                    printf("************************************************\n\n");

                    int a8, b8, c8;

                    printf("Insira o valor de A.\n");
                        do
                        {
                            scanf("%d", &a8);
                            if(a8==0)
                                printf("\nValor invalido. Digite novamente.\n");
                        }while(a8==0);

                    printf("\nInsira o valor de B.\n");
                        do
                        {
                            scanf("%d", &b8);
                            if(b8==0)
                                printf("\nValor invalido. Digite novamente.\n");
                        }while(b8==0);

                    printf("\nInsira o valor de C.\n");
                        do
                        {
                            scanf("%d", &c8);
                            if(c8==0)
                                printf("\nValor invalido. Digite novamente.\n");
                        }while(c8==0);

                    Delta8(a8, b8, c8);




                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 9:
                {
                    /*Crie a fun��o Fatorial que receba da fun��o main um n�mero inteiro maior ou igual a zero
                    e calcule o fatorial desse n�mero. Exiba na fun��o main o n�mero e o seu respectivo
                    fatorial obtido na fun��o Fatorial.*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                             FUNCAO FATORIAL                         ***\n");
                    printf("***************************************************************************\n\n");

                    int fat9;

                    printf("Digite um numero maior ou igual a 0 que voce deseje calcular o fatorial.\n");

                        do
                        {
                            scanf("%d", &fat9);
                            if(fat9<0)
                                printf("Numero invalido. Digite novamente.\n");
                        }while(fat9<0);


                    Fatorial9(fat9);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 10:
                {
                    /*Crie a fun��o TipoTriangulo que receba da fun��o main tr�s n�meros reais e verifique no interior da fun��o o tipo do tri�ngulo baseado nas condi��es abaixo.
                    Exiba na fun��o main os n�meros que representam os lados dor tri�ngulo e o seu tipo obtido atrav�s da fun��o TipoTriangulo.
                    Observa��es: a. Garantir que cada lado � menor que a soma dos outros dois lados.
                    b. O tri�ngulo � eq�il�tero quando todos os lados s�o iguais.
                    c. O tri�ngulo � is�sceles quando apenas dois lados s�o iguais.
                    d. O tri�ngulo � escaleno quando todos os lados s�o diferentes.*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                            FUNCAO TRIANGULO                         ***\n");
                    printf("***************************************************************************\n\n");

                    int a10,b10,c10;

                    do
                    {
                        printf("\nInsira o tamanho do primeiro lado do triangulo.\n");
                        scanf("%d", &a10);
                            if(a10<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(a10<=0);

                    do
                    {
                        printf("\nInsira o tamanho do segundo lado do triangulo.\n");
                        scanf("%d", &b10);
                            if(b10<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(b10<=0);

                    do
                    {
                        printf("\nInsira o tamanho do terceiro lado do triangulo.\n");
                        scanf("%d", &c10);
                            if(c10<=0)
                            {
                                printf("\nNumero invalido. Digite novamente.\n");
                            }
                    } while(c10<=0);

                    TipoTriangulo10(a10, b10, c10);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 11:
                {
                    /* Crie a fun��o Categoria que receba da fun��o main um valor do tipo inteiro e maior que zero que representa a idade e que verifique a categoria  baseada na  tabela abaixo.
                    Exiba na fun��o main o n�mero e a categoria de um grupo de K n�meros definido pelo usu�rio. Essa quantidade K dever� ser maior ou igual a 3 e menor ou igual a 10.

                    Idade Categoria
                    5 a 7 anos Infantil A
                    8 a 10 anos Infantil B
                    11-13 anos Juvenil A
                    14-17 anos Juvenil B
                    Maiores de 18 anos (inclusive) Adulto*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                           CATEGORIAS DE IDADE                       ***\n");
                    printf("***************************************************************************\n\n");

                    int k11, id11, x11;

                    printf("Insira a quantidade de idades que deseja classificar (3 a 10):\n");
                        do
                        {
                            scanf("%d", &k11);
                            if(k11<3||k11>10)
                            {
                                printf("Numero invalido. Digite novamente.\n");
                            }
                        }while(k11<3||k11>10);

                        for(x11=0;x11<k11;x11++)
                        {
                            printf("Insira a idade que deseja classificar:\n");
                            scanf("%d", &id11);
                            Categoria11(id11);
                        }



                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 12:
                {
                    /*Crie a fun��o Media que receba tr�s notas e uma letra de um aluno .
                    Se a letra for A o procedimento calcula a m�dia aritm�tica das notas do
                    aluno, se for P, a sua m�dia ponderada (pesos: 5, 3 e 2) e se for H, a
                    sua m�dia harm�nica. Exiba na fun��o main a m�dia calculada na
                    fun��o Media.*/
                    system("cls");
                    printf("***************************************************************************\n");
                    printf("***                           CALCULO DE MEDIAS                         ***\n");
                    printf("***************************************************************************\n\n");

                    float nota1_12, nota2_12, nota3_12;
                    char tipoNota12;

                    printf("Insira a letra que representa o tipo de media que devera ser calculado.");
                    printf("A = Media Aritmetica");
                    printf("P = Media Ponderada");
                    printf("H = Media Harmonica\n");
                        do
                        {
                            scanf("%c", tipoNota12);
                            if(tipoNota12!="A"||tipoNota12!="a"||tipoNota12!="P"||tipoNota12!="p"||tipoNota12!="H"||tipoNota12!="h")
                            printf("Tipo de media invalido. Digite novamente.");
                        }while (tipoNota12!="A"||tipoNota12!="a"||tipoNota12!="P"||tipoNota12!="p"||tipoNota12!="H"||tipoNota12!="h");

                    printf("\n\nInsira a primeira nota do aluno:\n");
                        do
                        {
                            scanf("%f", nota1_12);
                            if(nota1_12<0||nota1_12>10)
                                printf("Nota invalida. Digite novamente.");
                        }while(nota1_12<0||nota1_12>10);

                    printf("\n\nInsira a segunda nota do aluno:\n");
                        do
                        {
                            scanf("%f", nota2_12);
                            if(nota2_12<0||nota2_12>10)
                                printf("Nota invalida. Digite novamente.");
                        }while(nota2_12<0||nota2_12>10);

                    printf("\n\nInsira a terceira nota do aluno:\n");
                        do
                        {
                            scanf("%f", nota3_12);
                            if(nota3_12<0||nota3_12>10)
                                printf("Nota invalida. Digite novamente.");
                        }while(nota3_12<0||nota3_12>10);

                    Media12(tipoNota12,nota1_12,nota2_12,nota3_12);


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 13:
                {
                    /*Crie a fun��o NumeroPositivo que garanta  o recebimento no seu interior de um n�mero maior que zero.
                    Calcule e escreva dentro da fun��o main a tabuada de 1 at� N. Mostre a tabuada na forma:
                    1 x N = N
                    2 x N = 2N  */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 14:
                {
                    /*Crie a fun��o M�dia que garanta o recebimento no seu interior de quatro n�meros maiores ou iguais
                    a zero e menores ou iguais a 10 que representam as m�dias de um aluno. Calcule a m�dia aritm�tica
                    e exiba o conceito do aluno baseado na tabela abaixo e o seu nome recebido no interior da fun��o main.
                    A quantidade de alunos � definida pelo usu�rio e � no m�nimo 3 e no m�ximo 50 alunos. */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 15:
                {
                    /*Crie a fun��o Peso Ideal que por par�metro da fun��o main, a altura (alt) e o sexo de uma pessoa
                    e retorna o seu peso ideal.O  recebimento da altura que dever� ser maior que zero e do sexo que s�
                    poder� ser m ou f ser� feito no interior da fun��o main. Para homens, calcular o peso ideal usando
                    a f�rmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
                    A quantidade de indiv�duos ser� definida pelo usu�rio e dever� ser maior que 3 e menor ou igual a 12. */
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 16:
                {
                    /*Receba tr�s vetores (A, B e C) que s�o vari�veis globais na fun��o Cadastro.Cada vetor
                    dever� receber 5 elementos.O vetor D que tamb�m � uma vari�vel global � resultado da jun��o
                    dos tr�s vetores.O primeiro elemento do vetor D ser� o primeiro elemento do vetor A , o segundo
                    elemento do vetor D  ser� o primeiro elemento do vetor B, terceiro elemento do vetor D  ser
                    o primeiro do vetor C e assim sucessivamente.Crie a fun��o Maiorn�mero que dever� verificar
                    no vetor D qual foi o maior n�mero digitado e exibi-lo na fun��o main juntamente
                    com o conte�do do vetor D.*/
                    system("cls");


                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_lista4;
                    break;
                }

                //#################################################################################################

                case 17:
                {
                    goto menu_principal;
                    break;
                }

                //#################################################################################################

                case 18:
                {
                    goto sair;
                    break;
                }

                default:
                {
                    printf ("\nO �tem escolhido n�o existe. Escolha novamente.\n\n\n");
                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();
                    goto menu_lista4;
                    break;
                }
            }
        }
        case 5:
        {
            system("cls");
            printf("\t>>> LICEN�A CREATIVE COMMONS\n\n");
            printf("Este trabalho est� licenciado sob uma Licen�a Creative Commons Atribui��o-CompartilhaIgual 4.0 Internacional.\n"
                    "Para ver uma c�pia desta licen�a, visite http://creativecommons.org/licenses/by-sa/4.0/.");

            printf("\n\n\n\t>>> LICEN�A MIT\n\n");

            printf("Copyright 2018 GUILHERME ENCARNA��O E SILVA\n\n"
                    "Permission is hereby granted, free of charge, to any person obtaining a copy of this software\n"
                    "and associated documentation files (the \"Software\"), to deal in the Software without restriction,\n"
                    "including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,\n"
                    "and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,\n"
                    "subject to the following conditions:\n"
                    "The above copyright notice and this permission notice shall be included in all copies or substantial\n"
                    "portions of the Software.\n\n"
                    "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT\n"
                    "LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.\n"
                    "IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,\n"
                    "WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE\n"
                    "SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.");



                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();

                    goto menu_principal;
                    break;
        }
        case 6:
        {
            sair:
            system("cls");
            printf ("\n>>> Obrigado por utilizar a lista!\n");
            printf ("\n>>> AT� LOGO!\n\n");
            break;
        }
        default:
                {
                    printf ("\nO �tem escolhido n�o existe. Escolha novamente.\n\n\n");
                    printf("\n\n(Pressione ENTER para voltar ao menu).\n");
                    getchar();
                    getchar();
                    goto menu_principal;
                    break;
                }
    }
}


//FUN��ES DA LISTA 04
//01
float esfera1(float r1)
{
float v, pi=3.14;

v=(4*pi*pow(r1,3))/3;

return(v);
}

//02
int verifica2(int v2)
{
    if(v2==0)
        return(0);
        else if(v2<0)
        return(1);
        else
        return(2);

}

//03
float divisao3(float a3, float b3)
{
    float c3;

    c3=(a3/b3);

    return(c3);
}

//04
float ReajSalNovo4(float sal4)
{
float salarioNovo4;

if(sal4<800)
    salarioNovo4=sal4*1.15;
    else if(sal4>=800&&sal4<=1000)
        salarioNovo4=sal4*1.10;
    else
        salarioNovo4=sal4*1.05;

return(salarioNovo4);
}

//05
int ParImpar5(int valor5)
{
    if(valor5%2==0)
    printf("\n\nO numero e' par.\n");
    else
    printf("\n\nO numero e' impar.\n");
}

//06
float ReajSalNovo6(float sal6)
{
float salarioNovo6;

    if(sal6<800)
        salarioNovo6=sal6*1.15;
        else if(sal6>=800&&sal6<=1000)
            salarioNovo6=sal6*1.10;
        else
            salarioNovo6=sal6*1.05;

printf("\nO salario antigo era: %.2f\n", salario6);
printf("Salario reajustado: %.2f\n\n", salarioNovo6);
}

//07
float MediaFibonacci7(float termos7)
{
int anteriorN7=1, atualN7=1, proximoN7=0;
float soma7=0, media7=0;

printf("\n\nA sequencia gerada foi:\n");

    for(x7=1;x7<=termos7;x7++)
    {
        if(x7==1)
        printf("0, ");
        else if(x7==2 || x7==3)
            printf("1, ");
            else
            {
                proximoN7=anteriorN7+atualN7;
                printf("%d, ", proximoN7);
                anteriorN7=atualN7;
                atualN7=proximoN7;

                soma7=soma7+proximoN7;
            }
    }


    media7=(soma7/termos7);
    printf("\n\nA media dessa sequencia e': %.2f", media7);
}

//08
int Delta8(int A, int B, int C)
{

int D, X1, X2;

    D = pow(B,2)-(4*A*C);

    printf("\nO valor de Delta e': %d \n", D);

    if(D<0)
        printf("\nO valor de Delta e' negativo. Nao existem raizes.\n\n");
    else
        {
            X1=((B*-1)+sqrt(D))/(2*A);
            printf("\nA raiz positiva e': %d\n", X1);

            X2=(((B*-1)-(sqrt(D)*-1))/2*A);
            printf("\nA raiz negativa e': %d\n", X2);
        }
}

//09
int Fatorial9(int num9)
{
int fatorial9;

    if (num9==0&&num9==1)
    {
        printf("O fatorial e': 1\n\n");

    } else
    {
        printf("\nCalculo: ");
        for(fatorial9=1;num9>1;num9--)
        {
            fatorial9=fatorial9*num9;
            if(num9>3)
            printf("%d, ", fatorial9);
            else if(num9>2)
                printf("%d e ", fatorial9);
            else
                printf("%d. \n", fatorial9);
        }
    }
printf("\nO fatorial obtido e': %d\n\n", fatorial9);

}

//10
int TipoTriangulo10(int aTri10, int bTri10, int cTri10)
{

if((bTri10-cTri10)>aTri10)
{
    printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
}else if((aTri10-cTri10)>bTri10)
    {
        printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
    } else if((aTri10-bTri10)>cTri10)
        {
              printf("\nNumeros incorretos. Nao ha' um triangulo.\n");
        } else if(aTri10==bTri10&&bTri10==cTri10&&cTri10==aTri10)
            {
                printf("\nSeu triangulo e' EQUILATERO.\n");
            } else if(aTri10==bTri10||bTri10==cTri10||cTri10==aTri10)
                {
                    printf("\nSeu triangulo e' ISOSCELES.\n");
                } else
                    {
                        printf("\nSeu triangulo e' ESCALENO.\n");
                    }
}

//11
int Categoria11(int idade11)
{

    if(idade11>=5&&idade11<=7)
        printf("\n\n>>Categoria Infantil A<<\n\n");
    else if(idade11>=8&&idade11<=10)
        printf("\n\n>>Categoria Infantil B<<\n\n");
    else if(idade11>=11&&idade11<=13)
        printf("\n\n>>Categoria Juvenil A<<\n\n");
    else if(idade11>=14&&idade11<=17)
        printf("\n\n>>Categoria Juvenil B<<\n\n");
    else if(idade11>=18)
        printf("\n\n>>Categoria Adulto<<\n\n");
    else
        printf("\n\nA idade inserida nao consta em nenhuma das categorias.\n\n");
}

//12
float Media12(char tipo12, float n1_12, float n2_12, float n3_12)
{
float mediaA12, mediaP12, mediaH12;

    if(tipo12=="A"||tipo12=="a")
    {
        mediaA12=(n1_12+n2_12+n3_12)/3;
        printf("\nA media aritmetica do aluno e' %.2f", mediaA12);
    } else if(tipo12=="P"||tipo12=="p")
        {
            mediaP12=((n1_12*5)+(n2_12*3)+(n3_12*2)/(5+3+2));
            printf("\nA media ponderada do aluno e' %.2f", mediaP12);
        } else if(tipo12=="H"||tipo12=="h")
            {

            }
}

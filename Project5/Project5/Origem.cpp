#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> //biblioteca para funcionar o pow e sqrt, necess�rios para realizar calculos matematicos

int main()
{
	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as fun��es da lingua portuguesa, assim ele aceita todas acentua��es

	printf("\n\nOl�! Meu nome � Arnaldo Rocha Filho, sou aluno da UNINTER, do curso de engenharia da computa��o.\n\n\n");

	system("pause");
	system("cls"); //limpa a janela para ficar mais bonito

	int opcoes = 0; //variavel com o valor zerado para ser preenchido

	float d_pontos = 0; //variavel com o valor zerado para ser preenchido

	struct ponto2d  //estrutura de dados para ver distancia dos pontos, de acordo com valor inserido pelo usu�rio

	{

		float x = 0, y = 0; //ponto x e ponto y

	};

	struct ponto_inicial  //estrutura de dados do ponto incial escolhido

	{

	}; struct ponto2d distancia_inicial;

	struct ponto_final //estrutura de dados do ponto final escolhido
	{

	}; struct ponto2d distancia_final;

	while (opcoes > 0 || opcoes < 5) /*condi��o de escolha dos casos abaixo do 1 at� o 4, com loop,
									 caso digite um numero incorreto, vai ser exibida uma mensagem para digitar novamente
										 */

	{

		printf("\n\n[1] - Digitar os valores do primeiro ponto.\n");

		printf("[2] - Digitar os valores do segundo ponto.\n");

		printf("[3] - Mostrar a distancia entre os dois pontos.\n");

		printf("[4] - Sair.\n\n");

		scanf_s("%d", &opcoes);

		system("pause");
		system("cls");

		switch (opcoes)

		{

		case 1:
			printf("\n\nFoi escolhido a op��o [1] da tabela, ent�o....");
			printf("\nDigite o primeiro n�mero do ponto 1: ");

			scanf_s("%f", &distancia_inicial.x);//reconhece o numero digitado pelo usuario

			printf("\n\nDigite o segundo n�mero do ponto 1: ");

			scanf_s("%f", &distancia_inicial.y); //reconhece o numero digitado pelo usuario

			system("pause");
			system("cls");
			break;

		case 2:
			printf("\n\nFoi escolhido a op��o [2] da tabela, ent�o....");
			printf("\n\nDigite o primeiro n�mero do ponto 2: ");

			scanf_s("%f", &distancia_final.x);

			printf("\nDigite o segundo n�mero do ponto 2: ");

			scanf_s("%f", &distancia_final.y);

			system("pause");
			system("cls");
			break;

		case 3:

			d_pontos = pow((distancia_inicial.x - distancia_final.x), 2) + pow((distancia_inicial.y - distancia_final.y), 2); //calcula a distancia dos pontos

			d_pontos = sqrt(d_pontos);

			printf("\n\nFoi escolhida a op��o [3] da tabela, que v� o resultado da dist�ncia entre os pontos escolhidos nas op��es anteriores.");
			printf("\nA dist�ncia entre os pontos � %.2f\n\n\n", d_pontos);

			system("pause");
			system("cls");
			break;

		case 4:

			system("pause");
			return 0; //se o usu�rio escolher a op��o 4 o programa para
			break;

		default: printf_s("\n\nDigite as entrada corretamente, de acordo como na tabela!\n\n");

			system("pause");
			system("cls");
		}

	}

	system("pause");
	system("cls");

}



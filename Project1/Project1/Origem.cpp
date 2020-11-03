
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

enum pecas { vazio, peao, cavalo, torre, bispo, rei, rainha }; // enum para usar como contador
int main()
{
	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as fun��es da lingua portuguesa, assim ele aceita todas acentua��es.

	printf("Ol�! Eu sou Arnaldo Rocha Filho, aluno da uninter. Ent�o vamos brincar com o tabulheiro?! \n\n");
	system("pause");
	system("cls"); // limpa a janela para que n�o acumule, ficando assim mais bonito

	int tabuleiro[8][8] = {  // vari�vel para formar a matriz.
	{1, 3, 0, 5, 4, 0, 2, 1},
	{1, 0, 1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 1, 0, 6, 0},
	{1, 0, 0, 1, 1, 0, 0, 1},
	{0, 1, 0, 4, 0, 0, 1, 0},
	{0, 0, 3, 1, 0, 0, 1, 1},
	{1, 0, 6, 6, 0, 0, 1, 0},
	{1, 0, 5, 0, 1, 1, 0, 6}
	};

	printf("O tabulheiro se inicia desta forma!\n\n"); // este printf serve para imprimir na tela instru��es para o usu�rio seguir

	int L, C; //variav�l para fazer la�o de repeti��o para ser possivel a impress�o da matriz na tela

	for (L = 0; L < 8; L++)
	{
		for (C = 0; C < 8; C++)
		{
			printf("%d ", tabuleiro[L][C]); //imprimir na tela o tabulheiro
		}
		printf("\n");
	}

	int cont[7] = { 0 }; // vari�vel com vetor contador com 7 e que pode inserir um valor
	int a, b; //variavel para forma a matriz

	for (a = 0; a < 8; a++)   //la�o de repeti��o para inserir valor em cada caso
	{
		for (b = 0; b < 8; b++) {
			switch (tabuleiro[a][b])
			{
			case vazio:
				cont[0]++;
				break;
			case peao:
				cont[1]++;
				break;
			case cavalo:
				cont[2]++;
				break;
			case torre:
				cont[3]++;
				break;
			case bispo:
				cont[4]++;
				break;
			case rei:
				cont[5]++;
				break;
			case rainha:
				cont[6]++;
				break;
			default:
				break;
			}
		}
	}
	printf("\n");

	printf("Cada n�mero abaixo representa uma pe�a.\n\n"); // este printf serve para imprimir na tela instru��es para o usu�rio seguir

		printf("1 = Pe�o\n2 = Cavalo\n3 = Torre\n4 = Bispo\n5 = Rei\n6 = Rainha   \n\n");
	printf("Aonde tem o ZERO, significa que ali � ausente de pe�a!\n\n"); // este printf serve para imprimir na tela instru��es para o usu�rio seguir

		system("pause");
	system("cls");

	printf("Quantidade de pe�as:\n\n");

	printf("Total de Peoes                = %d\n", cont[1]);
	printf("Total de Cavalos              = %d\n", cont[2]);
	printf("Total de Torres               = %d\n", cont[3]);
	printf("Total de Bispos               = %d\n", cont[4]);
	printf("Total de Reis                 = %d\n", cont[5]);
	printf("Total de Rainhas              = %d\n", cont[6]);
	//imprimi o total de pe�as na matriz individualmente
	printf("Total geral das pe�as �       = %d\n", cont[1] + cont[2] + cont[3] + cont[4] + cont[5] + cont[6]); //soma e imprimi o total de pe�as

	printf("\n");
	system("pause");

	cont[0] = 0; 	// zera todos os contadores
	cont[1] = 0;
	cont[2] = 0;
	cont[3] = 0;
	cont[4] = 0;
	cont[5] = 0;
	cont[6] = 0;

	int tabuleiroEscolhido[8][8] = {
	{1, 3, 0, 5, 4, 0, 2, 1},
	{1, 0, 1, 0, 0, 1, 0, 0},
	{0, 0, 0, 0, 1, 0, 6, 0},
	{1, 0, 0, 1, 1, 0, 0, 1},
	{0, 1, 0, 4, 0, 0, 1, 0},
	{0, 0, 3, 1, 0, 0, 1, 1},
	{1, 0, 6, 6, 0, 0, 1, 0},
	{1, 0, 5, 0, 1, 1, 0, 6}
	};
	int linhaEscolhida, colunaEscolhida; // variaveis para as escolhas serem preenchidas
	int escolha; // variavel para o usuario digitar a escolha
	int YesOrNo; // variavel para o usuario ter op��o de continuar

	system("cls");

	printf("Escolha a posi��o das pe�as do seu tabulheiro!\n\n"); // printf para orientar o usu�rio

	for (L = 0; L < 8; L++)
	{
		for (C = 0; C < 8; C++)
		{
			printf("%d ", tabuleiroEscolhido[L][C]);
		}
		printf("\n");
	}

	printf("\nDigite algum n�mero da linha do 1 at� o 8 que deseja alterar: \n\n");
	scanf_s("%d", &linhaEscolhida);

	while ((linhaEscolhida < 1) || (linhaEscolhida > 8))  // inserindo as escolhas do numero 1 ao 8
	{
		printf("\nO valor inserido est� incorreto, deu erro! Digite novamente algum n�mero do 1 ao 8 para a posi��o na linha!\n\n");
		scanf_s("%d", &linhaEscolhida);
	}
	printf("\nDigite algum n�mero da coluna do 1 at� o 8 que deseja alterar: \n\n");
	scanf_s("%d", &colunaEscolhida);

	while ((colunaEscolhida < 1) || (colunaEscolhida > 8))
	{
		printf("\nO valor inserido est� incorreto, deu erro! Digite novamente algum n�mero do 1 ao 8 para a posi��o na coluna!\n\n");
		scanf_s("%d", &colunaEscolhida);
	}
	printf("\nDigite o n�mero da pe�a que deseja inserir na posi��o\n");
	printf("\n1 = Pe�o   /   2 = Cavalo   /   3 = Torre   /   4 = Bispo   /   5 = Rei   /   6 = Rainha \n\n", linhaEscolhida, colunaEscolhida);

	printf("1  = Pe�o\n");
	printf("2  = Cavalo\n");
	printf("3  = Torre\n");
	printf("4  = Bispo\n");
	printf("5  = Rei\n");
	printf("6  = Rainha\n\n");
	scanf_s("%d", &escolha);

	while ((escolha < 0) || (escolha > 6)) //condi��o de escolha do usu�rio

	{
		printf("\nA pe�a escolhida n�o existe! O programa deu erro, escolha outro numero correto de acordo as pe�as\n\n");
		scanf_s("%d", &escolha); // caso a condi��o n�o � cumprida imprimir isso
	}


	tabuleiroEscolhido[linhaEscolhida - 1][colunaEscolhida - 1] = escolha;
	/*diminindo um numero  para que a escolha na matriz fa�a sentido,	                                                                
	por que a sequencia na matriz sempre come�a pelo zero.
	Ent�o atrav�s disso, se o usu�rio escolher 1 vai ser 1.
   */

	printf("\nDeseja fazer outra altera��o? Se (SIM) digite 1, caso contr�rio digite 2: \n\n");

	scanf_s("%d", &YesOrNo);
	while (YesOrNo == 1) // condi��o de escolha do usu�rio sim ou nao
	{
		printf("\nDigite a posi��o da linha do 1 at� o 8 que deseja alterar:\n\n");// se sim imprimir isso
		scanf_s("%d", &linhaEscolhida);
		while ((linhaEscolhida < 1) || (linhaEscolhida > 8)) //condi��o de escolha da linha
		{
			printf("\nEsta posi��o n�o existe, deu erro! Digite um n�mero de 1 at� o 8 para a posi��o na linha!\n\n");
			scanf_s("%d", &linhaEscolhida); // condi��o de escolha inexistente
		}
		printf("\nAgora, digite a posi��o da coluna do 1 at� o 8 que deseja alterar:\n\n");
		scanf_s("%d", &colunaEscolhida);
		while ((colunaEscolhida < 1) || (colunaEscolhida > 8)) // condi��o de escolha
		{
			printf("\nEsta posi��o n�o existe, deu erro! Digite um n�mero de 1 a 8 para a posi��o na coluna!\n\n");
			scanf_s("%d", &colunaEscolhida);
		}
		printf("\nDigite a pe�a que deseja inserir na posi��o escolhida da linha %d e da coluna %d:\n\n", linhaEscolhida, colunaEscolhida);

		printf("1 = Pe�o\n");
		printf("2 = Cavalo\n");
		printf("3 = Torre\n");
		printf("4 = Bispo\n");
		printf("5 = Rei\n");
		printf("6 = Rainha\n\n");
		scanf_s("%d", &escolha);


		printf("O tabulheiro escolhido ficou desta forma!\n\n");
		int linhaEscolhida1, colunaEscolhida1;

		for (linhaEscolhida1 = 0; linhaEscolhida1 < 8; linhaEscolhida1++)
		{
			for (colunaEscolhida1 = 0; colunaEscolhida1 < 8; colunaEscolhida1++)
			{
				printf("%d ", tabuleiroEscolhido[linhaEscolhida1][colunaEscolhida1]);
			}
			printf("\n");
		}
		int e1, e2;
		for (e1 = 0; e1 < 8; e1++) //Resultado das escolhas feitas
		{
			for (e2 = 0; e2 < 8; e2++)
			{
				switch (tabuleiroEscolhido[e1][e2]) //montando casos das escolhas
				{
				case vazio:
					cont[0]++;
					break;
				case peao:
					cont[1]++;
					break;
				case cavalo:
					cont[2]++;
					break;
				case torre:
					cont[3]++;
					break;
				case bispo:
					cont[4]++;
					break;
				case rei:
					cont[5]++;
					break;
				case rainha:
					cont[6]++;
					break;
				default:
					break;
				}
			}
		}

		printf("\n");
		printf("Cada n�mero abaixo representa uma pe�a.\n\n");

		printf("1 = Pe�o\n2 = Cavalo\n3 = Torre\n4 = Bispo\n5 = Rei\n6 = Rainha   \n\n");
		printf("Aonde tem o ZERO, significa que ali � ausente de pe�a!\n\n");

		printf("Quantidade de pe�as:\n\n");

		printf("Total de Peoes                = %d\n", cont[1]);
		printf("Total de Cavalos              = %d\n", cont[2]);
		printf("Total de Torres               = %d\n", cont[3]);
		printf("Total de Bispos               = %d\n", cont[4]);
		printf("Total de Reis                 = %d\n", cont[5]);
		printf("Total de Rainhas              = %d\n", cont[6]);
		printf("Total geral das pe�as �       = %d\n", cont[1] + cont[2] + cont[3] + cont[4] + cont[5] + cont[6]);


		while ((escolha < 0) || (escolha > 6)) // condi��o de escolha de pe�as
		{
			printf("\nA pe�a que escolheu n�o existe! Digite outro numero de acordo com a tabela!\n\n");
			printf("1  = Pe�o\n");
			printf("2  = Cavalo\n");
			printf("3  = Torre\n");
			printf("4  = Bispo\n");
			printf("5  = Rei\n");
			printf("6  = Rainha\n\n");
			scanf_s("%d", &escolha);
		}
		tabuleiroEscolhido[linhaEscolhida - 1][colunaEscolhida - 1] = escolha;
		printf("\nDeseja fazer outra altera��o? Digite 1 para SIM e 2 para N�O\n");
		scanf_s("%d", &YesOrNo);

	}

	printf("O tabulheiro escolhido ficou desta forma!\n\n");
	int linhaEscolhida1, colunaEscolhida1;

	for (linhaEscolhida1 = 0; linhaEscolhida1 < 8; linhaEscolhida1++)
	{
		for (colunaEscolhida1 = 0; colunaEscolhida1 < 8; colunaEscolhida1++)
		{
			printf("%d ", tabuleiroEscolhido[linhaEscolhida1][colunaEscolhida1]);
		}
		printf("\n");
	}
	int e1, e2;
	for (e1 = 0; e1 < 8; e1++) //Resultado das escolhas feitas
	{
		for (e2 = 0; e2 < 8; e2++)
		{
			switch (tabuleiroEscolhido[e1][e2]) // montando estrutura dos casos das escolhas feitas, para ent�o ser imprimida o resultado
			{
			case vazio:
				cont[0]++;
				break;
			case peao:
				cont[1]++;
				break;
			case cavalo:
				cont[2]++;
				break;
			case torre:
				cont[3]++;
				break;
			case bispo:
				cont[4]++;
				break;
			case rei:
				cont[5]++;
				break;
			case rainha:
				cont[6]++;
				break;
			default:
				break;
			}
		}
	}

	printf("\n");
	printf("Cada n�mero abaixo representa uma pe�a.\n\n");

	printf("1 = Pe�o\n2 = Cavalo\n3 = Torre\n4 = Bispo\n5 = Rei\n6 = Rainha   \n\n");
	printf("Aonde tem o ZERO, significa que ali � ausente de pe�a!\n\n");

	printf("Quantidade de pe�as:\n\n");

	printf("Total de Peoes                = %d\n", cont[1]);
	printf("Total de Cavalos              = %d\n", cont[2]);
	printf("Total de Torres               = %d\n", cont[3]);
	printf("Total de Bispos               = %d\n", cont[4]);
	printf("Total de Reis                 = %d\n", cont[5]);
	printf("Total de Rainhas              = %d\n", cont[6]);
	printf("Total geral das pe�as �       = %d\n", cont[1] + cont[2] + cont[3] + cont[4] + cont[5] + cont[6]);//resultado geral

	printf("\n");

	system("pause");
	return(0);
}


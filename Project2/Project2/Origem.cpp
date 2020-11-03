#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	float salario;
	char nome[100];
}funcionario;

funcionario Funcionario;

int main()

{
	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as fun��es da lingua portuguesa, assim ele aceita todas acentua��es

	printf("\n\nOl�! Meu nome � Arnaldo Rocha Filho, sou aluno da UNINTER, do curso de engenharia da computa��o.\n\n");

	system("pause");
	system("cls");

	printf("\n\nAtrav�s deste programa vamos ver o imposto de renda do seu sal�rio!\n\n");

	system("pause");
	system("cls");

	strcpy_s(Funcionario.nome, "NULL");
	Funcionario.salario = 0;

	printf("\n\nQual � o seu nome? Digite aqui:  ");
	gets_s(Funcionario.nome);

	system("pause");
	system("cls");

	printf("\n\nQual � seu sal�rio? Digite aqui:  ");
	scanf_s("%f", &Funcionario.salario);

	system("pause");
	system("cls");

	printf("\n\nO nome cadastrado ficou %s e seu sal�rio � de R$%.2f\n\n", Funcionario.nome, Funcionario.salario);

	system("pause");
	system("cls");

	float imposto1, imposto2, imposto3, imposto4;
	float imp1, imp2, imp3, imp4;

	if (Funcionario.salario <= 1637.11)
	{
		printf("\n\nO salario permanece com R$%.2f, pois ele � isento de imposto. \n\n ", Funcionario.salario);
	}

	else if (Funcionario.salario > 1637.11 || Funcionario.salario <= 2453.50)
	{
		imposto1 = Funcionario.salario * 0.075;
		imp1 = Funcionario.salario - imposto1;
		printf("\n\nSeu salario com desconto do imposto fica R$%.2f \n\n", imp1);
	}

	else if (Funcionario.salario > 2453.50 || Funcionario.salario <= 3271.38)
	{
		imposto2 = Funcionario.salario * 0.15;
		imp2 = Funcionario.salario - imposto2;
		printf("\n\nSeu salario com desconto do imposto fica R$%.2f \n\n", imp2);
	}

	else if (Funcionario.salario > 3271.38 || Funcionario.salario <= 4087.65)
	{
		imposto3 = Funcionario.salario * 0.22;
		imp3 = Funcionario.salario - imposto3;
		printf("\n\nSeu salario com desconto do imposto fica R$%.2f \n\n", imp3);
	}

	else if (Funcionario.salario > 4087.65)
	{
		imposto4 = Funcionario.salario * 0.27;
		imp4 = Funcionario.salario - imposto4;
		printf("\n\nSeu salario com desconto do imposto fica R$%.2f \n\n ", imp4);
	}

	system("pause");
	return(0);

}


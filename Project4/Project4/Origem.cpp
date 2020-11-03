#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float L, float* area, float* perimetro) { //prot�tipo da fun��o
	*area = 3 * pow(L, 2) * sqrt(3) / 2; //formula para ser possivel o calculo
	*perimetro = 6 * L;
}

int main()

{

	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as fun��es da lingua portuguesa, assim ele aceita todas acentua��es

	printf("\n\nOl�! Meu nome � Arnaldo Rocha Filho, sou aluno da UNINTER, do curso de engenharia da computa��o.\n\n\n");

	system("pause");
	system("cls"); //limpa a janela para ficar mais bonito
	
	printf("\n\nEnt�o bora calcular a �rea e o per�metro de um hex�gono\n\n\n");

	system("pause");
	system("cls");

	float L, perimetro, area; //variaveis para ser possivel o calculo

	printf_s("\n\nPara calcular a �rea e o per�mitro do hex�gono, digite o lado que voce quer aqui: ");
	scanf_s("%f", &L);

	system("pause");
	system("cls");

	if (L <= -1) //condi��o se digitar valor negativo o programa fecha.
	{
		printf_s("\n\nPara que funcione digite um valor positivo!\n\n");

	}

	else
	{
		calc_hexa(L, &area, &perimetro); //calculo do hexagono atraves do lado escolhido

		printf_s("\nA �rea do hex�gono � de %.2f e seu per�metro � de %.2f\n\n", area, perimetro); //imprimi o resultado
		
	}

	system("pause");
	return 0;

}
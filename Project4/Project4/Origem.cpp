#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

void calc_hexa(float L, float* area, float* perimetro) { //protótipo da função
	*area = 3 * pow(L, 2) * sqrt(3) / 2; //formula para ser possivel o calculo
	*perimetro = 6 * L;
}

int main()

{

	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as funções da lingua portuguesa, assim ele aceita todas acentuações

	printf("\n\nOlá! Meu nome é Arnaldo Rocha Filho, sou aluno da UNINTER, do curso de engenharia da computação.\n\n\n");

	system("pause");
	system("cls"); //limpa a janela para ficar mais bonito
	
	printf("\n\nEntão bora calcular a área e o perímetro de um hexágono\n\n\n");

	system("pause");
	system("cls");

	float L, perimetro, area; //variaveis para ser possivel o calculo

	printf_s("\n\nPara calcular a área e o perímitro do hexágono, digite o lado que voce quer aqui: ");
	scanf_s("%f", &L);

	system("pause");
	system("cls");

	if (L <= -1) //condição se digitar valor negativo o programa fecha.
	{
		printf_s("\n\nPara que funcione digite um valor positivo!\n\n");

	}

	else
	{
		calc_hexa(L, &area, &perimetro); //calculo do hexagono atraves do lado escolhido

		printf_s("\nA área do hexágono é de %.2f e seu perímetro é de %.2f\n\n", area, perimetro); //imprimi o resultado
		
	}

	system("pause");
	return 0;

}
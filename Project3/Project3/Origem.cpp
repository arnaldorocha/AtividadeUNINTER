#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> //biblioteca para acerrar o toupper


int main()

{
	setlocale(LC_ALL, "Portuguese"); // com isso, ele faz funcionar todas as fun��es da lingua portuguesa, assim ele aceita todas acentua��es

	printf("\n\n\nOl�! Meu nome � Arnaldo Rocha Filho, sou aluno da UNINTER, do curso de engenharia da computa��o.\n\n\n");

	system("pause");
	system("cls"); //limpa a janela para ficar mais bonito

	printf("\n\n\nNeste programa vamos converter 5 frases informadas pelo usu�rio em letra ma�uscula.\n\n\n ");

	system("pause");
	system("cls");

	char letras[50], frase1[50], frase2[50], frase3[50], frase4[50], frase5[50]; //variaveis string para ler e imprimir as frases
	int  tamanho; //variavel inteira para acessar a matriz


	printf("\n\n\nDigite a primeira frase para ser convertida em letra ma�scula:  ");
	gets_s(letras);

	for (tamanho = 0; tamanho < 50; tamanho++)
	{
		frase1[tamanho] = toupper(letras[tamanho]); //la�o de repeti��o para acessar todas as letras da string
	}
	printf("\n\n\nSua primeira frase em letra ma�scula fica:  %s\n\n\n", frase1);  //imprime o resultado

	system("pause");
	system("cls");

	printf("\n\n\nDigite a segunda frase para ser convertida em letra ma�scula:  ");
	gets_s(letras);

	for (tamanho = 0; tamanho < 50; tamanho++)
	{
		frase2[tamanho] = toupper(letras[tamanho]);
	}
	printf("\n\n\nSua segunda frase em letra ma�scula fica:  %s\n\n\n", frase2);

	system("pause");
	system("cls");

	printf("\n\n\nDigite a terceira frase para ser convertida em letra ma�scula:  ");
	gets_s(letras);

	for (tamanho = 0; tamanho < 50; tamanho++)
	{
		frase3[tamanho] = toupper(letras[tamanho]);
	}
	printf("\n\n\nSua terceira frase em letra ma�scula fica:  %s\n\n\n", frase3);

	system("pause");
	system("cls");

	printf("\n\n\nDigite a quarta frase para ser convertida em letra ma�scula:  ");
	gets_s(letras);

	for (tamanho = 0; tamanho < 50; tamanho++)
	{
		frase4[tamanho] = toupper(letras[tamanho]);
	}
	printf("\n\n\nSua quarta frase em letra ma�scula fica:  %s\n\n\n", frase4);

	system("pause");
	system("cls");

	printf("\n\n\nDigite a quinta frase para ser convertida em letra ma�scula:  ");
	gets_s(letras);

	for (tamanho = 0; tamanho < 50; tamanho++)
	{
		frase5[tamanho] = toupper(letras[tamanho]);
	}
	printf("\n\n\nSua quinta frase em letra ma�scula fica:  %s\n\n\n", frase5);

	system("pause");
	system("cls");



	printf("\n\n\nTodas as frases juntas em letra maiscula ficam assim:  %s %s %s %s %s\n\n\n", frase1, frase2, frase3, frase4, frase5); //imprime o resultado


	system("pause");
	return(0);
}


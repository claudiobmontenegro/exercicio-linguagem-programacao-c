// Tarefa Introdução.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <math.h>

void fatorial();
void primo1();
void primoRep();
void potencia();
void raiz();
void bissexto();
void media();
void ponderada();



int main()
{
	int codigo;
	printf("Menu: \n");
	printf("1- Digite um numero para que eu apresente seu fatorial. \n");
	printf("2- Digite um numero para que eu verifique se ele e primo. \n");
	printf("3- Digite quantos numeros desejar para que eu verifique se eles sao primos. \n");
	printf("4- Digite um numero com ponto flutuante e apos isso, um numero inteiro para que eu faca sua potencia. \n");
	printf("5- Digite um numero com ponto flutuante e apos isso, um numero inteiro para que eu faca sua raiz quadrada. \n");
	printf("6- Digite um ano para que eu verifique se ele e bissexto. \n");
	printf("7- Digite duas notas para que eu mostre sua media. \n");
	printf("8- Digite tres notas para que eu mostre sua media ponderada. \n");
	printf("9- Minha matricula em hexadecimal e: \n\n");
	printf("0- Sair.\n"); //Questao 1
	printf("\nDigite o numero correspondente para realizar a operacao. \n");
	scanf_s("%d", &codigo);

	switch (codigo) {
	case 1: {
		fatorial();
		break;


	}
	case 2: {
		primo1();
		break;
	}
	case 3: {
		primoRep();
		break;
	}
	case 4: {
		potencia();
		break;
	}
	case 5: {
		raiz();
		break;
	}
	case 6: {
		bissexto();

		break;
	}
	case 7: {
		media();
		break;
	}
	case 8: {
		ponderada();
		break;
	}
	case 9: { //Questao 10
		int matricula = 1810022607;
		
		printf("Sou o aluno Claudio Bessa Montenegro \n");
		printf("Minha matricula e: %d \n", matricula);
		printf("Minha matricula em Hexadecimal e: %X\n", matricula);
		break;
	}
	case 0: { //Questao 1
		printf("Aperte qualquer tecla para o programa ser encerrado.\n");
		break;
	}
	default: {
		printf("Opcao invalida.\n");
		break;

	}
	}

	


}

void fatorial() {   //Questao 2                                                 
	int fat, n;
	printf("Digite um numero para eu lhe mostrar seu fatorial: ");
	scanf_s("%d", &n);

	for (fat = 1; n > 1; n--)
		fat = fat * n;

	printf("O fatorial calculado e: %d", fat);
}  

void primo1() {		//Questao 3
	int num, i, resultado = 0;
	printf("Digite um numero: \n");
	scanf_s("%d", &num);
	for (i = 2; i <= num / 2; i++) {
		resultado = num % i;
		if (resultado != 0) {
			printf("O numero %d e primo \n", num);
			return;

		}
		else {
			printf("O numero %d nao e primo .\n", num);
			return;
			

		}
			
		
	}
} 

void primoRep() {	//Questao 4
							
	char decisao;

	decisao = 's';

	while (decisao == 's') {
		primo1();
		printf("Deseja inserir algum outro numero? (s/n) \n");
		scanf_s(" %c", &decisao);


	}
	

} 

void potencia() {	//Questao 5

	float numA, resultado;
	int numB, contar = 0;

	printf("Digite um numero com ponto flutuante: \n");
	scanf_s("%f", &numA);

	printf("Digite um numero inteiro? \n");
	scanf_s("%d", &numB);

	resultado = pow(numA, numB);

	while (resultado > 10.0) {
		resultado = resultado / 10.0;
		contar++;
	
	}
	printf("Resultado = %.2fe%d\n", resultado, contar);
	
		
		




}

void raiz() { //Questao 6

	float numA, resultado, expoente;
	int numB, contar = 0;

	printf("Digite um numero com ponto flutuante: \n");
	scanf_s("%f", &numA);

	printf("Digite um numero inteiro? \n");
	scanf_s("%d", &numB);

	expoente = 1.0 / (float)(numB);

	resultado = pow(numA, expoente);

	while (resultado > 10.0) {
		resultado = resultado / 10.0;
		contar++;

	}
	printf("Resultado = %.2fe%d\n", resultado, contar);
}

void bissexto() { //Questao 7
	int ano;
	
	printf("Digite um ano para que eu verifique se ele e bissexto: \n");
	scanf_s("%d", &ano);

	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
		printf("O ano e bissexto. \n");
	}
	else {
		printf("O ano nao e bissexto. \n");
	}


}

void media() {	//Questao 8
	float media, nota1, nota2;

	printf("Digite sua primeira nota para que eu possa tirar a media: \n");
	scanf_s("%f", &nota1);

	printf("Digite sua segunda nota para que eu possa tirar a media: \n");
	scanf_s("%f", &nota2);

	media = (nota1 + nota2) / 2;

		if (nota1 > 10 || nota1 < 0 || nota2 > 10 || nota2 < 0) {
			printf("Notas invalidas, tente novamente.\n");

		}
			
		else {
			printf("Sua media e de: %f.\n", media);
		}

}

void ponderada() {	//Questao 9
	float nota1, nota2, nota3, media;

	printf("Digite sua primeira nota com peso 1 para que eu tire a media: \n");
	scanf_s("%f", &nota1);
	printf("Digite sua segunda nota com peso 1 para que eu tire a media: \n");
	scanf_s("%f", &nota2);
	printf("Digite sua terceira nota com peso 2 para que eu tire a media: \n");
	scanf_s("%f", &nota3);

	media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / 3;

	printf("Sua media e de: %f \n ", media);

	if (media < 6.0) {
		printf("Voce foi reprovado. \n");
	}
	else{
		printf("Voce foi aprovado. \n");

	}
}



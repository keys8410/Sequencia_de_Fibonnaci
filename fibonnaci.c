#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

// Prot. Function
void header(); // cabe�alho
void lines(int n);	// linhas
int getVal(int n);	// recebe o m�xima d'e Fibonnaci
int fib(int n); // realiza a sequencia de Fibonnaci
void plus(); // retorna plus(); se for n recebe tipo float
void cls();	// clear screen

/* 
	02 de dezembro de 2019	

    Departamento de T.I., UniProje��o (Taguatinga, Campus I)
    
    Sistemas de Informa��o (2� semestre)
    Autor: Yan Almeida Garcia
    
    00) Leia um n�mero positivo do usu�rio, ent�o, calcule e imprima a sequencia Fibonnaci at� o primeiro n�mero superior ao n�mero lido.
		Ex.: 30: 0 1 1 2 3 5 8 13 21 34.

	Refer�ncia bibliogr�fica:
		[01]. "Sequ�ncia de Fibonacci", dispon�vel em: https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci
*/

int main(){
	setlocale(LC_ALL, "portuguese");

	for(;;) header();
	
	return 0;

}
// functions
	// cabe�alho
void header(){ 
	int num, res;
	
	puts("");
	lines(78);
	puts(" | Na matem�tica, a Sequ�ncia de Fibonacci, � uma sequ�ncia de n�meros inteiros |\n"
		 " | come�ando normalmente por 0 e 1, na qual, cada termo subsequente corresponde |\n"
		 " | � soma dos dois anteriores. A sequ�ncia recebeu o nome do matem�tico italia- |\n"
		 " | no Leonardo de Pisa, mais conhecido por Fibonacci.\t\t\t\t|\n"
		 " | Ex.: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...   |\n"
		 " |                                                                              |\n"
		 " | [ 0 ]. para sair\t\t\t\t\t\t\t\t|");
	lines(78);
	
	getVal(num); // recebe o valor e passa, por referencia, para num
}

	// linhas
void lines(int n){
	int i;
	
	printf(" +");
	for(i = 0; i < n; i++) printf("-");
	puts("+");
}

	// recebe o m�xima d'e Fibonnaci
int getVal(int n){
	do{	
		printf("\n | Grau: ");	
		scanf(" %i", &n);
		if(n == 0) exit(1); // encerra o programa
		
		if(n < 0) plus(); // verifica se � n � inteiro
		else fib(n); // se for inteiro >> fib(n);
	
	}while(n < 0); // continua ap�s encontrar n > 0

	return n;
}

	// realiza a sequencia de Fibonnaci
int fib(int n){ 
	int a = 0, b = 1, c;
	
	printf(" | 0 | 1");
	while(b < n){
		c = b + a;
		printf(" | %d", c);
		a = b;
		b = c;
	}

	cls(); // clear screen
}

	// retorna plus(); se for n recebe um numero negativo
void plus(){
	printf(" Valor inv�lido.");
	
	cls();	// clear screen
	header(); // retorna cabe�alho
}
	// clear screen
void cls(){ 
	getch();
	system("cls"); 	
}

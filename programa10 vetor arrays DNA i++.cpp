#include <iostream>
#include <string.h>/*necessario para a 'strlen'*/
using namespace std;

int main(void){/*void é uso vazio, informa ao compilador que a variavel nao tera um tipo definido*/
	char dna[] = "AGCTTTTCATTCTGACTGCA";/*'char' guarda um caractere*/
	char nuc;
	int i;
	int q_A=0, q_G=0, q_C=0, q_T=0;
	int tam;
	
	tam = strlen(dna);/*determinar o tamanho da string?*/
	
	for (i=0;i<=tam;i++){
		nuc = dna[i];
		switch(nuc){
			case 'A':/*em cada 'case' faz a contagem em '++'*/
				q_A++;
				break;
			case 'G':
				q_G++;
				break;
			case 'C':
				q_C++;
				break;
			case 'T':
				q_T++;
				break;		
		}
	}
	cout<<"Quantidade de Adenina(A):\t"<<q_A<<endl;
	cout<<"Quantidade de Timina(T):\t"<<q_T<<endl;
	cout<<"Quantidade de Citosina(C):\t"<<q_C<<endl;
	cout<<"Quantidade de Guanina(G):\t"<<q_G<<endl;
	return 0;
}

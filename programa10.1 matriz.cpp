#include <iostream>
#include <stdlib.h>
using namespace std;
/*funçoes modulariza um programa, aula 9 varios programas q juntos formam um programa maior*/
int main(){
	int matriz[3][3];/*matriz 3 3 tamanho de linhas e colunas*/
	int linha, coluna;
	
	
	system("cls");/*Como você percebeu, a finalidade dele é apagar a tela para que novas informações sejam impressas. como uma constante, procedimento*/
	for(linha = 0 ; linha < 3 ; linha++)
	    for(coluna = 0; coluna<3 ; coluna++){
	    	cout<<"Posicao ["<<linha+1<<"]["<<coluna+1<<"]:";
	    	cin>>matriz[linha][coluna];/*digitar linhas e colunas numeração*/
		}
		
	for(linha = 0 ; linha<3 ; linha++){
		for(coluna = 0 ; coluna < 3 ; coluna++)
		    cout<<matriz[linha][coluna]<<" ";
		    cout<<"\n";
	}	
	return 0;
}


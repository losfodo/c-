#include <iostream>
using namespace std;

int main(int argc, char** argv) {/*programa principal 'main'*/
	float nota1;
	float nota2;
	float nota3;/*float usa numeros inteiro e quebrados*/
	float nota4;
	float media;
	
	nota1 = 9;
	nota2 = 7,5;/*numeros de cada nota*/
	nota3 = 4;
	nota4 = 5;
	media = (nota1+nota2+nota3+nota4)/4;/*calculo da media da nota do aluno*/
	
	cout<<"A media do aluno e': "<<media;
	return 0;/*finalização*/
}

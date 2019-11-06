#include <iostream>
#include <string>
using namespace std;
/* system cls pausa o programa anterior a ele e mostra os de a frente */

int main(void) {
	string nome;
	
	cout<<"Digite o seu nome"<<endl;
	cin>>nome;
	
	system("cls");/*ou seja some a perte de cima do programa e mostra a sequencia de baixo apenas*/
	
	cout<<"Oi"<<nome<<" Como vai voce"<<endl;
	
	return 0;
}

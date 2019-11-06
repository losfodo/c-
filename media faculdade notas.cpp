#include <iostream>
using namespace std;
/* fazer a minha média das notas faculdade */

int main(int argc, char** argv) {
	float notaavp;
	float notaforum;
	float notaav1;
	float notaavs;
	float notafinal;
		
	cout<<"Digite a nota do av1"<<endl;
	cin>> notaav1;
	
	cout<<"Digite a nota do avp"<<endl;
	cin>> notaavp;
	
	cout<<"Digite a nota do forum"<<endl;
	cin>> notaforum;
	
	if(notaav1>=4){
		notafinal= notaavp+notaav1+notaforum;
	}
	else
	notafinal= notaav1+notaforum;
	
	
	cout<<"Nota final e: "<<notafinal<<endl;	
	
	
	if(notafinal>=6){
		cout<<"Passou direto"<<endl;	
	}
	else
	cout<<"Fico em recuperacao fazer a avs"<<endl;
	
	return 0;
}

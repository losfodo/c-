#include <iostream>
#include <cmath>/*para uso de operaçoes matematicas*/
using namespace std;

int main(void) {
	float peso, altura, imc;
	
	cout<<"Digite o peso: ";
	cin>>peso;
	cout<<"Digite a altura: ";
	cin>>altura;
	
	imc = peso/(pow(altura,2));/*calculo do imc*/
	
	if(imc<17){/*uso do 'if' se for um ou outro dependendo do numero do imc*/
		cout<<"\n\nIMC="<<imc<<". Situacao: Muito abaixo do peso"<<endl;
	}
	if(imc>17 && imc<=18.49){
		cout<<"\n\nIMC="<<imc<<".Situacao: Abaixo do peso"<<endl;
	}
	if(imc>=18.5 && imc<=24.99){
		cout<<"\n\nIMC="<<imc<<".Situacao: Peso normal"<<endl;
	}
	if(imc>=25 && imc<=29.99){
		cout<<"\n\nIMC="<<imc<<".Situacao: Acima do peso"<<endl;
	}
	if(imc>=30 && imc<=34.99){
		cout<<"\n\nIMC="<<imc<<".Situacao: Obesidade I"<<endl;
	}
	if(imc>=35 && imc<=39.99){
		cout<<"\n\nIMC="<<imc<<".Situacao: Obesidade II"<<endl;
	}
	if(imc>=40){
		cout<<"\n\nIMC="<<imc<<".Situacao: Obesidade III"<<endl;
	}
		return 0;
}

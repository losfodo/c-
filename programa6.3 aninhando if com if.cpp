#include <iostream>
using namespace std;
/* um if dentro do outro if*/

int main(void) {
	int idade;
	char sexo;
	
	cout<<"Qual a sua idade?"<<endl;
	cin>>idade;
	cout<<"Digite(m) para masculino, (f) para feminino"<<endl;
	cin>>sexo;
	
	if (idade>=18){
		cout<<"Voce pode dirigir"<<endl;
		
		if(sexo=='m'){
			cout<<"Voce precisa ir no Serviço Militar"<<endl;
		}
	}
	else{
		if(idade>=16){
			cout<<"Voce ja pode votar"<<endl;
		}
		else{
			cout<<"Voce não pode votar, nem dirigir"<<endl;
		}
	}
	
	return 0;
}

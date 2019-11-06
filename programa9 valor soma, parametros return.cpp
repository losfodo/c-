#include <iostream>
using namespace std;
/* aparentemente dois processos em um só programa 
tornando muito mais legivel o programa
é necessario o return para funcionar este programa */
float soma(int n1, float n2){
	float resultado;
	resultado=n1+n2;
	return resultado;
}

int main(void){
	int a=523;
	float b=34.8;
	float retorno;
	
	retorno=soma(a,b);
	cout<<"valor da soma="<<retorno<<endl;
	system("PAUSE");
	return 0;
}

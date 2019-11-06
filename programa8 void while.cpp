#include <iostream>
using namespace std;

int main(void){
	int num_funcionarios, i=1;
	float salario, valor_folha=0;
	
	cout<<"Digite o numero de funcionarios da empresa"<<endl;
	cin>>num_funcionarios;
	
	while (i<=num_funcionarios){/*'while' gera um lopping do limite de 'i' e num_funcionarios*/
		cout<<"Funcionario"<<i<<". Qual o salario deste funcionario"<<endl;
		cin>>salario;/*salario de cada funcionario*/
		valor_folha+=salario;/*total somando salario*/
		i++;/*'i++' é necessario para soma*/
	}
	cout<<"Valor da folha de pagamento: R$"<<valor_folha;/*folha de pagamento é o total*/
	return 0;
}


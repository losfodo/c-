#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num1, num2, resto;
	cout<<"Digite dois numeros, em ordem crescente"<<endl;
	cin>>num1;
	cin>>num2;
	
	do {
		resto = num2%num1;
		cout<<"Numero 2 = "<<num2<<" - Numero 1 -"<<num2<<" - Resto - "<<resto<<endl;
		num2 = num1;
		num1 = resto;
	} while(num1>0);
	cout<<"MDC ="<<num2;
	return 0;
}

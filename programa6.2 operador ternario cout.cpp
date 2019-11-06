#include <iostream>
using namespace std;
/* operador ternario direto em cout<< */

int main(void){
	int n;
	
	cout<<"Digite um numero. vou te dizer se ele e par ou IMPAR"<<endl;
	cin>>n;
	
	(n%2==0)?cout<<"Numero PAR."<<n<<endl:cout<<"Numero IMPAR"<<n<<endl;
	return 0;
}

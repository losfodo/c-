#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num_termos,contador=1;
	double pi=0,i=1.0;/*'double' guarda um numero real'quebrado' com precição maior que float*/
	cout<<"Quantos termos voce deseja?"<<endl;
	cin>>num_termos;
	
	while (contador<=num_termos){
		pi +=4/i;
		i+=2;
		pi -=4/i;
		contador++;
		i+=2;
	}
	cout<<"O valor de PI com"<<num_termos<<"Termos ="<<pi<<endl;
	return 0;
}

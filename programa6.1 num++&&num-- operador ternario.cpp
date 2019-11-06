#include <iostream>
using namespace std;
/* operador ternario: resume o uso do if e else sem necessidade de usalos 
o numero++ vai um numero a frente e numero-- um a menos */

int main(void) {
	int numero= -1;
	
	numero>= 0 ? numero++ :numero-- ;
	cout<<"O novo valor de numero e: "<<numero;
	
	return 0;
}

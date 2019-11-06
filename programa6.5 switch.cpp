#include <iostream>
using namespace std;
/* neste switch todos os switch maiores ou igual z são executados
 como se fosse 10 em 10 ou 5 em 5  */

int main(int argc, char** argv) {
	int z;
	
	cout << "Digite um valor : "; 
cin>>z; 
switch(z) { 
case 5 : cout << 3 * z << " "; 
case 10 : cout << 11 /2 * z << " "; 
case 20 : cout << z * z - 10 << endl; 
break; 
default : cout << "Entrada invalida. " << endl; 
} 
	return 0;
}

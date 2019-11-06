#include <iostream>
using namespace std;
/* manipularçoes com os indices e valores */

int main(void){
	int a=1;
	int b=2;
	float notas[15];
	
	notas[1]=8; notas[2]=9.5; notas[6]=6; notas[13]=5; 
	notas[7]=7.5; notas[8]=7.5; notas[9]=8 ;notas[12]=4.5; 
	notas[5]=4.5; notas[10]=9;

    notas[a+b]=4;
    notas[4] = 2*3.5;
    notas[2*7] = 6.5;
    
	return 0;
}

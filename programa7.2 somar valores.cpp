#include <iostream>
using namespace std;
/* somar valores usando n+=2  ==  n+2=
total +=n    ==   total+n=   */

int main(void){
	int total =0;
	
	for(int n=2; n<=20; n+=2){
		total +=n;
	}
	
	cout<<"Soma = "<<total;
	return 0;
}

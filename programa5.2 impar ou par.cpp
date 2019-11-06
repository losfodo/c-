#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int num;
	
	cout<<"\nDigite um numero:";
	cin>>num;
	
	if(num%2==0){
		cout<<"PAR";
	}
	else{
		cout<<"impar";
	}
	return 0;
}

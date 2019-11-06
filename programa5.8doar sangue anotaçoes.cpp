#include <iostream>
using namespace std;
/* cinco tipos nativos em C++: int, float, double, char e bool.  */

int main(int argc, char** argv) {
int idade;

cout<<"Quantos anos voce tem?"<<endl;
cin>>idade;

if(idade>=18&&idade<=64){
	cout<<"Voce pode doar sangue";
}
else{
	cout<<"Voce ainda nao pode doar sangue";
}
	return 0;
}

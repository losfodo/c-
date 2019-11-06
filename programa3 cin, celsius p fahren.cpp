#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float celsius;
	float fahrenheit;
	
	cout<<"digite a temperatura em celsius:"<<endl;/*cout para colocar na tela*/
	cin>>celsius;/*cin para escrever na tela*/
	fahrenheit = celsius*1,8 + 32;
	
	cout<<celsius<<" graus celsius equivale a "<<fahrenheit<<" graus fahrenheit."
	system("PAUSE");
	return 0;
}

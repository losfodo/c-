#include <iostream>
using namespace std;


int main(int argc, char** argv) {

    float celsius;
    float fahrenheit;
	
	celsius = 25;
	fahrenheit = celsius* 1.8 + 32;
	
	cout<<celsius<<" graus celsius equivale a "<<fahrenheit<<" graus fahrenheit";
	return 0;
}

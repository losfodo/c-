#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x, i;
x = 1;
cout << x;
i = 6;
x = x + i;
cout << x;
if ( x <= 7) { 
cout <<"boaa"<< x;
x = x + 10; 
} else {
cout<< "vacilo"<< x;
}
	return 0;
}

/* repare que o x = x + 10;  não foi ou não sera executado pq esta posicionado depois do cout
 e se tivesse antes seria executado como 17boaa17, ou seja a posição importa */

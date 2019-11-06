#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x = 10, y = 3, z, k; 
y = x + y - 1; 
z = x/y; 
k = y % x; 
if ( k != 0) 
cout << "x = " << x << " y = " << y << " z = " << z << " k = " << k << "\n"; 
	return 0;
}

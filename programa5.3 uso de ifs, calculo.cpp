#include <iostream>
using namespace std;
/*os dois ifs entram em uso neste programa*/
int main(void){
	int A, B;
cin>>B;
cin>>A;

if (A > B)
B = A + B;

if (A < B)
A = (B%2);
cout<<A;
	
	return 0;
}

#include <iostream>
using namespace std;
/* vira um contador a soma e o num tambem viram contadores 
num looping que acaba em =20 */

int main(int argc, char** argv) {
	int contador, num = 1, soma = 0;

for (contador = 1; contador <= 20; contador += 5) {

        soma = soma + num;

         num = num + 3;
cout<<"contador"<<contador<<endl;
cout<<"num"<<num<<endl;
cout<<"soma"<<soma<<endl;

   }
	return 0;
}

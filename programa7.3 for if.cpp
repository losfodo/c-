#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*programa da erro pq estava double mas mudei para int*/
int main ( ) {
    int i;
    int x, y = 0;
    for (i = 0; i < 10; i++){/*for é um looping aqui nesse pode ser feito o looping 10 vezes,começa i=0, i>10, i++ cada execução*/
        cout << "Digite um numero: ";
        cin >> x;
        if (x % 2 == 1){/*quando sobra 1*/
            y = y + x;   /*basicamente executavel com numeros impar, */
        }
    }
    cout << "Numero: " << y << "\n";
    system("PAUSE");
    return 0;
}

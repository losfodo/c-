#include <iostream>
using namespace std;
/* A média dos elementos digitados not undestand */

int main (void ) {
    int i = 0;
    double x, y = 0;
    cout << "Digite um numero: ";
    cin >> x;
    while (x != 0){
        i = i + 1;
        y = y + x;
        cout << "Digite um numero: ";
        cin >> x;
    }
    y = y / i;
    cout << "Numero: " << y << "\n";
    system("PAUSE");
    return 0;
}

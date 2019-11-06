#include <iostream>
using namespace std;
/* Soma todos os números pares de 0 a 48 */

int main(void) { 
  int CONT, SOMA; 
  CONT = 0; 
  SOMA = 0; 
  while (CONT < 50){ 
    SOMA = SOMA + CONT; 
    CONT = CONT + 2; 
    
    cout<<CONT<<endl;
  } 
  return 0;
} 
	


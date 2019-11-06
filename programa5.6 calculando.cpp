#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	 int num;

  cout << "Digite um numero: ";
  cin >> num;
	 if (num  > 0)
  {
      num++;
      cout << num << " ";
  }
  cout << num + 1 << " ";
  if (num < 0)
  {
      num--;
      cout << num << " ";
  }
  else
     cout << num * 10 ;


	 	return 0;
}

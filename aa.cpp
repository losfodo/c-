#include <iostream>
using namespace std;
/* cada numero que diminui com 5 4 3 2 1
 passa pela decição if e else e se modificam */

int main(int argc, char** argv) {
	int x;
   for (x = 5; x > 0; x--)
     if (x % 3 == 0)
        cout << x - 1 << " ";
     else
        cout << x +1 << " ";
	return 0;
}

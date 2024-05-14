#include <iostream>

using namespace std;
float mult(int x, int y) {
  return x * y;
}
int main() {
  int x, y;
   cout << "digite um numero: ";
   cin >> x;
   cout << "digite outro numero: ";
   cin >> y;
   cout << "a multiplicação é: " << mult(x , y) << endl;
}
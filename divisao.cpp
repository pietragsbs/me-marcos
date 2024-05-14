#include <iostream>

using namespace std;
float divisao(int x, int y) {
  return x / y;
}
int main() {
  int x, y;
   cout << "digite um numero: ";
   cin >> x;
   cout << "digite outro numero: ";
   cin >> y;
   cout << "a divisao é: " << divisao(int x, int y) << endl;
}
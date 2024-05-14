#include <iostream>
#include <iostream>

int soma(int x, int y) {
  return x + y;
}

int main() {
 int x, y;
  std::cout << "digite um numero: " << std::endl;
    std::cin >> x;
  std::cout << "digite outro numero: " << std::endl;
    std::cin >> y;
  std::cout << "a soma é: " << soma(x,y) << std::endl;
  return 0;
}
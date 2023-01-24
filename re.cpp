#include <iostream>
#include <vector>

void g() {
  std::cout << "Hello world!\n";
}

int main() {
    std::vector<int> v(10);
    v[100000] = 1;
    int x = 1;
    x /= v[0];
}

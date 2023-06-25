#include <iostream>

unsigned long factorial(int num) {
    return num <= 1 ? 1 : num * factorial(num-1);
}

int main() {
    int num;
    std::cin >> num;
    std::cout << factorial(num);
    return 0;
}

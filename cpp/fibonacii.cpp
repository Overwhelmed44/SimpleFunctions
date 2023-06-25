#include <iostream>

unsigned long fibonacci(unsigned int n, unsigned long first=0, unsigned long second=1) {
    return n > 0 ? fibonacci(n - 1, second, first + second) : first;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
    return 0;
}
#include <iostream>

unsigned long fibonacci(int n, int first=0, int second=1) {
    return n > 0 ? fibonacci(n - 1, second, first + second) : first;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci(n);
    return 0;
}
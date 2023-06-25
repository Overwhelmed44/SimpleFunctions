#include <stdio.h>

unsigned long fibonacci(int n) {
    unsigned long first = 0, second = 1;
    for (; n > 0; n--) {
        unsigned long swap = first;
        first = second;
        second += swap;
    }
    return first;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%ld", fibonacci(n));
    return 0;
}

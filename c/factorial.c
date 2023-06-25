#include <stdio.h>

unsigned long factorial(int num) {
    return num <= 1 ? 1 : num * factorial(num - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%ld", factorial(num));
    return 0;
}

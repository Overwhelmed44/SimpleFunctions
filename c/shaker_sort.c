#include <stdio.h>

void swap(int* arg1, int* arg2) {
    int temp = *arg1;
    *arg1 = *arg2;
    *arg2 = temp;
}

void shaker_sort(int arr[], int length) {
    length--;
    int changes = 1;
    while (changes) {
        changes = 0;
        for (int ind = 0; ind < length; ind++) {
            if (arr[ind] > arr[ind + 1]) {
                swap(&arr[ind], &arr[ind + 1]);
                changes = 1;
            }
        }
        if (changes == 0) break;
        changes = 0;
        for (int ind = length; ind > 0; ind--) {
            if (arr[ind] < arr[ind - 1]) {
                swap(&arr[ind], &arr[ind - 1]);
                changes = 1;
            }
        }
    } // no need to return the array
}

int main() {
    int example[] = {5, 1, 6, 3, 4};
    int length = sizeof(example) / 4;
    shaker_sort(example, length);
    for (int ind = 0; ind < length; ind++) {
        printf("%d ", example[ind]);
    }
    return 0;
}
#include <stdio.h>

void bubble_sort(int arr[], int length) {
    length--;
    int changes = 1;
    while (changes) {
        changes = 0;
        for (int ind = 0; ind < length; ind++) {
            if (arr[ind] > arr[ind + 1]) {
                int swap = arr[ind];
                arr[ind] = arr[ind + 1];
                arr[ind + 1] = swap;
                changes = 1;
            }
        }
    } // no need to return the array
}

int main() {
    int example[] = {5, 1, 6, 3, 4};
    int length = sizeof(example) / 4;
    bubble_sort(example, length);
    for (int ind = 0; ind < length; ind++) {
        printf("%d ", example[ind]);
    }
    return 0;
}
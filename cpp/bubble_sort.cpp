#include <iostream>

template<std::size_t Size>
void bubble_sort(int arr[]) {
    bool changes = true;
    while (changes) {
        changes = false;
        for (int ind = 0; ind < Size - 1; ind++) {
            if (arr[ind] > arr[ind + 1]) {
                std::swap(arr[ind], arr[ind + 1]);
                changes = true;
            }
        }
    } // no need to return the array
}

int main() {
    int example[] = {5, 1, 6, 3, 4};
    bubble_sort <5> (example);
    for (int ind = 0; ind < sizeof(example) / 4; ind++) {
        std::cout << example[ind] << ' ';
    }
    return 0;
}
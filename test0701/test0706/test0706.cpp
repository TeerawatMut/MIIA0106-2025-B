#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void swapValue(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortDescending(int* p, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (*(p + j) < *(p + j + 1)) {
                swapValue(p + j, p + j + 1);
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 3 };
    int size = 5;

    cout << "Before:";
    printArray(arr, size);

    bubbleSortDescending(arr, size);

    cout << "After:";
    printArray(arr, size);

    return 0;
}
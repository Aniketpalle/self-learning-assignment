#include <iostream>
using namespace std;

class SortArray {
    int arr[10];

public:
    // 1. Take input
    void input() {
        cout << "Enter 10 elements:\n";
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    // 2. Sort array (Ascending - Bubble Sort)
    void sortArray() {
        for (int i = 0; i < 10 - 1; i++) {
            for (int j = 0; j < 10 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // 3. Display array
    void display() {
        cout << "Sorted Array:\n";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    SortArray s;

    s.input();
    s.sortArray();
    s.display();

    return 0;
}
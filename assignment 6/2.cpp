#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    int arr[N];

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Largest: " << secondLargest;

    return 0;
}
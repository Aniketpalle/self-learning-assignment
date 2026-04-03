#include <iostream>
using namespace std;

class DecimalToBinary {
    int num;
    int binary[32], i;

public:
    // Accept number
    void input() {
        cout << "Enter a decimal number: ";
        cin >> num;
    }

    // 1. Convert decimal to binary
    void convert() {
        i = 0;
        while (num > 0) {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }
    }

    // 2. Display binary equivalent
    void display() {
        cout << "Binary equivalent: ";
        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }
};

int main() {
    DecimalToBinary d;

    d.input();
    d.convert();
    d.display();

    return 0;
}
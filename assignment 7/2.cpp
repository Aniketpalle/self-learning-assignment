#include <iostream>
using namespace std;

class FindFactorial {
    int num;
    long long fact;

public:
    // 1. Accept number
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // 2. Calculate factorial using loop
    void calculate() {
        fact = 1;
        for (int i = 1; i <= num; i++) {
            fact = fact * i;
        }
    }

    // 3. Display result
    void display() {
        cout << "Factorial = " << fact;
    }
};

int main() {
    FindFactorial f;

    f.input();
    f.calculate();
    f.display();

    return 0;
}
#include <iostream>
using namespace std;

class HollowSquare {
    int n;

public:
    // Input
    void input() {
        cout << "Enter value of n: ";
        cin >> n;
    }

    // Print hollow square
    void printPattern() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                
                // Print * for borders
                if (i == 1 || i == n || j == 1 || j == n) {
                    cout << "* ";
                } else {
                    cout << "  "; // space inside
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HollowSquare h;

    h.input();
    h.printPattern();

    return 0;
}
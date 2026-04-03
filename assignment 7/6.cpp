#include <iostream>
#include <vector>
using namespace std;

// Item class
class Item {
public:
    int itemId;
    string itemName;
    double price;

    // Function to input item
    void input() {
        cout << "Enter Item ID: ";
        cin >> itemId;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName);

        cout << "Enter Price: ";
        cin >> price;

        // Throw exception if price is invalid
        if (price < 0) {
            throw price;
        }
    }

    // Display item
    void display() {
        cout << "ID: " << itemId 
             << ", Name: " << itemName 
             << ", Price: " << price << endl;
    }
};

int main() {
    vector<Item> cart;
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Calculate Total Bill\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Item i;
                try {
                    i.input();
                    cart.push_back(i);
                    cout << "Item added successfully!\n";
                } 
                catch (double p) {
                    cout << "Invalid price! Cannot be negative.\n";
                }
                break;
            }

            case 2: {
                if (cart.empty()) {
                    cout << "Cart is empty!\n";
                } else {
                    cout << "Items in Cart:\n";
                    for (auto &i : cart) {
                        i.display();
                    }
                }
                break;
            }

            case 3: {
                double total = 0;
                for (auto &i : cart) {
                    total += i.price;
                }
                cout << "Total Bill: " << total << endl;
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
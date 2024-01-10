#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    int id;
    string name;
    double price;
};

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct(int id, const string& name, double price) {
        Product newProduct = { id, name, price };
        products.push_back(newProduct);
        cout << "Product added to inventory.\n";
    }

    void removeProduct(int id) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->id == id) {
                products.erase(it);
                cout << "Product with ID " << id << " removed from inventory.\n";
                return;
            }
        }
        cout << "Product with ID " << id << " not found in inventory.\n";
    }
};

int main() {
    Inventory inventory;

    inventory.addProduct(1, "Product A", 29.99);
    inventory.addProduct(2, "Product B", 39.99);

    inventory.removeProduct(1);

    inventory.removeProduct(3);

    return 0;
}

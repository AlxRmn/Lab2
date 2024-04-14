#include <iostream>
#include <String>

using namespace std;

class Product { // Класс товар
private:
    double price;
    int quantity;

public:

    Product(double price, int quantity) : price(price), quantity(quantity) {}

    // Получаем информацию о товаре

    string get_info() { 
        return "Price: " + to_string(price) + ", Quantity: " + to_string(quantity);
    }

    // Получем информацию об общей стоимости товара

    double get_total_cost() {
        return price * quantity;
    }
};

int main() {

    Product product1(10.0, 5);
    Product product2(15.0, 3);
    Product product3(20.0, 2);

    cout << product1.get_info() << endl;
    cout << product2.get_info() << endl;
    cout << product3.get_info() << endl;
}

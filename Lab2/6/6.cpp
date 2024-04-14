

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Product { // Структура товар
    string name;
    double price;
    string unit;
};

int main() {
    ofstream fout("products.dat", ios::binary); // Поток для записи

    Product product1 = { "Prod 1", 100.0, "mg." }; // Создание товаров
    Product product2 = { "Prod 2", 200.0, "kg" };
    Product product3 = { "Prod 3", 300.0, "ml" };

    fout.write((char*)&product1, sizeof(Product)); // Запись
    fout.write((char*)&product2, sizeof(Product));
    fout.write((char*)&product3, sizeof(Product));

    fout.close();


    ifstream fin("products.dat", ios::binary);

    Product mostExpensiveProduct;
    double maxPrice = 0.0;

    Product product; 
    while (fin.read((char*)&product, sizeof(Product))) { // Определяем самый дорогой товар
        if (product.price > maxPrice) {
            maxPrice = product.price;
            mostExpensiveProduct = product;
        }
    }

    fin.close();

    cout << "name: " << mostExpensiveProduct.name << endl;
    cout << "price: " << mostExpensiveProduct.price << endl;
    cout << "unit: " << mostExpensiveProduct.unit << endl;

}
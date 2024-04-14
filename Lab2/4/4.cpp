
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream input_file("int.txt"); // Создаем поток для чтения

    int max_element = INT_MIN;

    int num;
    int count = 0;

    while (input_file >> num) { // Определяем наибольший элемент кратный 3
        count++;
        if (count % 3 == 0 && num > max_element) {
            max_element = num;
        }
    }

    input_file.close();

    cout << max_element << endl;


    return 0;
}

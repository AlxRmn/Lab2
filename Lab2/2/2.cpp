#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file1("a1.txt"); // Создаем два поток для чтения данных из файла
    ifstream file2("a2.txt");

    int count1 = 0;
    int count2 = 0;

    double num;

    while (file1 >> num) { // Считаем количество нулевых элементов в файле
        if (num == 0) {
            count1++;
        }
    }

    while (file2 >> num) {
        if (num == 0) {
            count2++;
        }
    }

    cout << count1 << endl;
    cout << count2 << endl;

    return 0;
}

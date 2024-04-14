
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    char old_char, new_char;
    cout << "Old char:";
    cin >> old_char;
    cout << "New char:";
    cin >> new_char;

    ifstream input_file("1.txt"); // Cоздание потоков для чтения
    ofstream output_file("2.txt");

    char c;
    while (input_file.get(c)) { // Замена символов в файле
        if (c == old_char) {
            c = new_char;
        }
        output_file << c;
    }

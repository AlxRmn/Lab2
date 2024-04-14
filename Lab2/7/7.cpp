
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Ввод символов латинского алфавита 
    string input;
    cout << "enter the characters: ";
    getline(cin, input);

    // Запись символов в бинарный файл
    ofstream fout("symbols.dat", ios::binary);
    fout.write(input.c_str(), input.length());
    fout.close();

    // Перезапись бинарного файла с заглавными буквами
    ifstream fin("symbols.dat", ios::binary);
    ofstream fout2("symbols_upper.dat", ios::binary);

    char c;
    while (fin.get(c)) {
        fout2.put(toupper(c));
    }

    fin.close();
    fout2.close();

    // Распечатка символов до и после изменения данных в файле

    ifstream fin2("symbols.dat", ios::binary);
    while (fin2.get(c)) {
        cout << c;
    }
    fin2.close();

    cout << endl;

    ifstream fin3("symbols_upper.dat", ios::binary);
    while (fin3.get(c)) {
        cout << c;
    }
    fin3.close();

}

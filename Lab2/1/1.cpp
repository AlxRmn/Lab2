#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std;

void reader() { // Чтение данных из файла

	ifstream in; // Создаем поток для чтения
	in.open("a.txt"); 

	double countZero = 0;
	double sumNegative = 0;
	double num;

	if (in.is_open()) { // Считаем сумму отрицательных чисел
		while (in >> num)
			if (num == 0) {
				countZero++;
			}
			else if (num <= 0) {
				sumNegative += num;
			}
	}

	in.close();

	cout << "zero: " << countZero << endl;
	cout << "Sum negative numbers: " << sumNegative << endl;

}

int main() {
	reader();
}

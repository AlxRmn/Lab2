
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Student { // Создаем структуру студент
    string surname;
    string name;
    string patronymic;
    string gender;
    string nationality;
    int height;
    int weight;
    int year_of_birth;
    int month_of_birth;
    int day_of_birth;
    string phone_number;
    string address;
    string university;
    int course;
    int group;
    float average_score;
    string specialty;
}
;
int main() {

    ifstream input_file("students.txt");
    ofstream output_file("students2.txt");

    vector<Student> students;

    while (!input_file.eof()) {
        Student student;

        input_file >> student.surname;
        input_file >> student.name;
        input_file >> student.patronymic;
        input_file >> student.gender;
        input_file >> student.nationality;
        input_file >> student.height;
        input_file >> student.weight;
        input_file >> student.year_of_birth;
        input_file >> student.month_of_birth;
        input_file >> student.day_of_birth;
        input_file >> student.phone_number;
        input_file >> student.address;
        input_file >> student.university;
        input_file >> student.course;
        input_file >> student.group;
        input_file >> student.average_score;
        input_file >> student.specialty;

        students.push_back(student);
    }

    for (Student student : students) { // Цикл для определения студентов с баллом меньше 70
        if (student.average_score < 70) {
            output_file << student.surname << " " << student.name << " " << student.patronymic << endl;
        }
    } 

    cout << "The data was successfully transferred";

    input_file.close();
    output_file.close();

    return 0;
}

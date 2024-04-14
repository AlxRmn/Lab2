#include <iostream>

using namespace std;

class Date { // Создаем класс дата
public:
    Date(int day, int month, int year) : day(day), month(month), year(year) {}

    bool isDayAndMonthEqual() { // Совпадает ли номер месяца и числа?
        return day == month;
    }

    void increaseMonth() { // Увеличиваем на 1 месяц
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

public:
    int day;
    int month;
    int year;
};

int main() {
    Date date1(15, 03, 2024);
    cout << "Date 1: " << date1.day << "." << date1.month << "." << date1.year << endl;
    cout << "Do the day and month coincide?" << (date1.isDayAndMonthEqual() ? "Yes" : "No") << endl;

    date1.increaseMonth();
    cout << "The date has been increased: " << date1.day << "." << date1.month << "." << date1.year << endl;
}

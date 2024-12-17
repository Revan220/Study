#include <iostream>
using namespace std;

int main(){
    int day;
    string WeekDay;
    string vacation;

    cout<<"Введите число Мая, от 1 до 31: ";
    cin>>day;

// Определяем день недели для числа месяца
    int weekdayIndex = (day - 1) % 7;

    // Определяем день недели через условия
    if (weekdayIndex == 0) {
        WeekDay = "Понедельник";
    } else if (weekdayIndex == 1) {
        WeekDay = "Вторник";
    } else if (weekdayIndex == 2) {
        WeekDay = "Среда";
    } else if (weekdayIndex == 3) {
        WeekDay = "Четверг";
    } else if (weekdayIndex == 4) {
        WeekDay = "Пятница";
    } else if (weekdayIndex == 5) {
        WeekDay = "Суббота";
        vacation = "выходной";
    } else if (weekdayIndex == 6) {
        WeekDay = "Воскресенье";
        vacation = "выходной";
    }

    // Проверка для праздничных дней
    if (day <= 5 || day == 8 || day == 9 || day == 10)
    {
        vacation = "праздник";  
    }
    cout<<"День недели "<<WeekDay<<", сегодня "<<vacation;
}
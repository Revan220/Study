#include <iostream>
using namespace std;

int main(){
    int DayOfBirth, MonthOfBirth, YearOfBirth;
    int TodayDay, TodayMonth, TodayYear;
    
    cout<<"Введите год, месяц и день рождения: ";
    cin>>YearOfBirth>>MonthOfBirth>>DayOfBirth;
    cout<<"Введите текущий год, месяц и день: ";
    cin>>TodayYear>>TodayMonth>>TodayDay;

    // Проверка возраста
    int age = TodayYear - YearOfBirth;

    

    // Если текущий месяц меньше месяца рождения или месяц одинаков, но день меньше — не достиг 18 лет
    if (TodayMonth < MonthOfBirth || (TodayMonth == MonthOfBirth && TodayDay < DayOfBirth)) {
        age--;  // Не достиг 18 лет
    }

    if (age<18)
    {
        cout << "Нельзя продавать алкоголь!";
    }else if (age == 18 && (TodayMonth > MonthOfBirth || (TodayMonth == MonthOfBirth && TodayDay > DayOfBirth))) {
        cout << "Можно продавать алкоголь!";
    } else {
        cout << "Нельзя продавать алкоголь!";
    }
}
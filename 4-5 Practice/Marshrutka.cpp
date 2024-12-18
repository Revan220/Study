#include <iostream>

int main() {

    int total = 0;
    int currentPassengers = 0;
    std::string Street1 = "Улица программистов";
    std::string Street2 = "Дотерская Вторая";
    std::string Street3 = "Варкрафторская";
    std::string Street4 = "Врата Балдура";
    int a;
    int b;

    std::cout<<"Прибываем на остановку «"<<Street1<<"». Текущее количество пассажиров = "<< currentPassengers<<"\nВведите количество зашедших: ";
    std::cin>>a;
    std::cout<<"Сколько пассажирова вышло? ";
    std::cin>>b;


    currentPassengers+=a;
    total+=a*20;
    currentPassengers-=b;

    std::cout<<"Прибываем на остановку «"<<Street2<<"». Текущее количество пассажиров = "<< currentPassengers<<"\nВведите количество зашедших: ";
    std::cin>>a;
    std::cout<<"Сколько пассажирова вышло? ";
    std::cin>>b;


    currentPassengers+=a;
    total+=a*20;
    currentPassengers-=b;


    std::cout<<"Прибываем на остановку «"<<Street3<<"». Текущее количество пассажиров = "<< currentPassengers<<"\nВведите количество зашедших: ";
    std::cin>>a;
    std::cout<<"Сколько пассажирова вышло? ";
    std::cin>>b;


    currentPassengers+=a;
    total+=a*20;
    currentPassengers-=b;


    std::cout<<"Прибываем на остановку «"<<Street4<<"». Текущее количество пассажиров = "<< currentPassengers<<"\nВведите количество зашедших: ";
    std::cin>>a;
    std::cout<<"Сколько пассажирова вышло? ";
    std::cin>>b;


    currentPassengers+=a;
    total+=a*20;
    currentPassengers-=b;
    
    std::cout<<"Всего заработано: "<<total<<" рублей\nЗарплата водителя: "<<total/4<<"рублей \nРасходы на топливо: "<<total/5<<"рублей \nНалоги: "<<total/5<<"рублей \nИтого: "<< total-(total/4+(total/5)*3);
}   
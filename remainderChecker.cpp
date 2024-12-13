#include <iostream>

int main(){
    int number;
    int divider;

    std::cout<<"Введите первое число: ";
    std::cin>>number;
    std::cout<<"Введите второе число: ";
    std::cin>>divider;
    std::cout<<"===Проверяем===";

    if (number%divider==0)
    {
        std::cout<<"Да, "<<number<<" делится на "<<divider<<" без остатка";
    } else {
        std::cout<<"Нет,"<<number<<" не делится на "<<divider<<" без остатка";
    }
    
}
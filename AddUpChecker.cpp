#include <iostream>

int main(){
    int firstNumber;
    int secondNumber;
    int answer;

    std::cout<<"Введите первое число: ";
    std::cin>>firstNumber;
    std::cout<<"\nВведите второе число: ";
    std::cin>>secondNumber;
    std::cout<<"\nВведите их сумму: ";
    std::cin>>answer;
    std::cout<<"\n======Проверяем=======";

    if (answer!= firstNumber + secondNumber){
        std::cout<<"Ошибка! Правильный ответ: "<<firstNumber+secondNumber;
    }else 
        std::cout<<"Верно";
}
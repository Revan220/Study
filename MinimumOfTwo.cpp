#include <iostream>

int main(){
    int firstNumber;
    int secondNumber;

    std::cout<<"Введите первое число: ";
    std::cin>>firstNumber;
    std::cout<<"\nВведите второе число: ";
    std::cin>>secondNumber;
    std::cout<<"\n======Проверяем=======";

    if (firstNumber > secondNumber){
        std::cout<<"Наименьшее число: "<<secondNumber;
    }else if (firstNumber < secondNumber){
        std::cout<<"Наименьшее число: "<<firstNumber;
    }else 
        std::cout<<"Числа равны!";
}

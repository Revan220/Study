#include <iostream>

int main(){
    int exp;
    int lvl = 1;

    std::cout<<"Введите число очков опыта: ";
    std::cin>>exp;
    std::cout<<"---Считаем---\n";

    if (exp >= 5000)
    {
        lvl = 4;
    }else if (exp >= 2500){
        lvl = 3;
    }else if (exp >= 1000){
        lvl = 2;
    }

    std::cout<<"Ваш уровень: "<<lvl;
}
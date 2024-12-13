#include <iostream>

int main(){
    int a;
    
    std::cout<<"Введите число: ";
    std::cin>>a;
    std::cout<<"====Проверяем====";

    if (a%2==0)
    {
        std::cout<<"Четное";
    }else{
        std::cout<<"Нечетное";
    }
    
}
#include <iostream>
using namespace std;

int main(){
    int Number;

    cout<<"Введите номер числа Фибоначчи";
    cin>>Number;
    // Для хранения чисел Фибоначчи
    int fibNumberOne = 1, fibNumberTwo = 1, fibNumberN = 0;
// Для проверки переполнения
    bool overflow = false;  
// Начинаем с 3, потому что первые два всегда равны 1
    int i = 3;
    while (Number>=i)
    {
        // считаем числа
        fibNumberN = fibNumberOne+fibNumberTwo;
        fibNumberOne = fibNumberTwo;
        fibNumberTwo = fibNumberN;

        if (fibNumberN < fibNumberTwo) {  // Это указывает на переполнение
            overflow = true;
            break;
        }

        i++;  
    }
    if(Number == 2 || Number == 1){ //Тут можно было бы оптимизировать, но я это понял только когда дописал
        cout << "Число в последовательности: 1";
    }else if (overflow)
    {
        cout << "Число выходит за пределы 2 147 483 647.";
    }else{
        cout << "Число в последовательности: " <<fibNumberN;
    }
}
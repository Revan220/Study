#include <iostream>
using namespace std;

int main(){
    int height;

    cout << "Введите высоту елочки: ";
    cin >> height;
    
    for (int i = 1; i <= height; ++i) {
        //пробелы
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }

        //решётки
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "#";
        }

        // Переходим на новую строку
        cout << "\n";
    }
}
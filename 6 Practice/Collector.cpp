#include <iostream>
using namespace std;

int main(){
    string NameOfDebtor;
    int Debt;
    int Payed = 0;

    cout<<"Введите имя должника: ";
    cin>>NameOfDebtor;
    cout<<"Введите сумму долга: ";
    cin>>Debt;

    while (Debt > 0) {
        cout << "Сколько вернешь? ";
        cin >> Payed;
        Debt -= Payed;
    
    if (Debt <= 0) {
            cout << "Долг погашен!\n";
            break;
        }

        // Вывод оставшегося долга
        cout << "Осталось " << Debt << " рублей.\n";
    }
    if (Debt < 0) {
        cout << "Остаток " << -Debt << " рублей.\n";
    }
}
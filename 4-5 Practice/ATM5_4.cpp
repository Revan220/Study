#include <iostream>
using namespace std;

int main(){
    int Nrubles, banknote;
    int OneHRuble = 0, TwoHRuble = 0, FiveHRuble = 0, OneThRuble = 0, TwoThRuble = 0, FiveThRuble = 0; 
    
    cout<<"Сколько вы хотите снять? ";
    cin>>Nrubles;
    // Считаем купюры
    if (Nrubles%100==0 && Nrubles <= 150000)
    {
        if (Nrubles >= 5000) {
            FiveThRuble = Nrubles / 5000;
            Nrubles %= 5000;
        }
        if (Nrubles >= 2000) {
            TwoThRuble = Nrubles / 2000;
            Nrubles %= 2000;
        }
        if (Nrubles >= 1000) {
            OneThRuble = Nrubles / 1000;
            Nrubles %= 1000;
        }
        if (Nrubles >= 500) {
            FiveHRuble = Nrubles / 500;
            Nrubles %= 500;
        }
        if (Nrubles >= 200) {
            TwoHRuble = Nrubles / 200;
            Nrubles %= 200;
        }
        if (Nrubles >= 100) {
            OneHRuble = Nrubles / 100;
            Nrubles %= 100;
        }

        // Выводим результат
        cout << "Банкомат выдаст: \n";
        if (FiveThRuble > 0) cout << "По 5000: " << FiveThRuble << "\n";
        if (TwoThRuble > 0) cout << "По 2000: " << TwoThRuble << "\n";
        if (OneThRuble > 0) cout << "По 1000: " << OneThRuble << "\n";
        if (FiveHRuble > 0) cout << "По 500: " << FiveHRuble << "\n";
        if (TwoHRuble > 0) cout << "По 200: " << TwoHRuble << "\n";
        if (OneHRuble > 0) cout << "По 100: " << OneHRuble << "\n";
            
    }else{
        cout<<"Ошибка, банкомат не выдает все что ниже 100 или выше 150 000";
    }
    
}
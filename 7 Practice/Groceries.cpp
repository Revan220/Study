#include <iostream>
using namespace std;

int main(){
    int Grechka;

    cout<<"Всего гречки было на начало подсчёта: ";
    cin>>Grechka;

    int i=1;
    for (; Grechka>0; i++)
    {
        Grechka-=4;
        cout<<"После "<<i<<" месяца у вас в запасе останется "<<Grechka<<" кг гречки\n";
        
    }
    
    cout<<"После "<<i-1<<" месяца гречка закончится";
}   
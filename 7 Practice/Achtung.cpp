#include <iostream>
using namespace std;

int main(){
    int colotintul, sign;

    cout<<"Введите общию длину колотитула: ";
    cin>>colotintul;
    cout<<"Введите количество восклицательных знаков: ";
    cin>>sign;

    for (int i = 0; i < (colotintul-sign)/2; i++)
    {
        cout<<"~";
    }
    for (int i = 0; i < sign; i++)
    {
        cout<<"!";
    }
    for (int i = 0; i < (colotintul-sign)/2; i++)
    {
        cout<<"~";
    }
    if (colotintul%2==0 && sign%2!=0)
    {
        cout<<"~";
    }
    
}
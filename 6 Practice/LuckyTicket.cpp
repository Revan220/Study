#include <iostream>
using namespace std;

int main(){
    int ticket;

    cout<<"Введите ваш билетик";
    cin>>ticket;
    int SumOfFirst = 0, SumOfSecond = 0;
    int tempTicket = ticket;
    

// В условии сказано, что количество цифр должно менятся без особых изменений в коде. Думаю изменение переменной count не является особой.
    int count = 3;
    int count1 = count;
    while (count>0)
    {
        SumOfFirst += tempTicket%10;
        tempTicket /= 10;
        count--;
    }

    while (count1>0)
    {
        SumOfSecond += tempTicket%10;
        tempTicket /= 10;
        count--;
    }
    if (SumOfFirst==SumOfSecond)
    {
        cout<<"Билет счастливый!";
    }else{
        cout<<"Повезёт в следующий раз";
    }

}
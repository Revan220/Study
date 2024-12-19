#include <iostream>
using namespace std;

int main(){
    int x, y, p;

    cout<<"Введите размер вклада: ";
    cin>>x;
    cout<<"Введите процентную ставку: ";
    cin>>p;
    cout<<"Введите желаемую сумму: ";
    cin>>y;

    int year = 0;
    while (x<=y)
    {
        x+=((x*p)/100);
        year++;
    }
    cout<<"Придётся подождать: "<<year;
}
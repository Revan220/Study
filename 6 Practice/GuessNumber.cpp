#include <iostream>
using namespace std;

int main(){
    int a=0, b=63;
    bool finder = a==b;

    cout<<"Загадайте число от 0 до 63\n"<<"Загадали? Теперь давайте я попробую её отгадать.\n";

    string yesnt;
    int i = 0;
    do
    {
        int mid = (b+a)/2;
        cout<<"Ваше число "<<mid<<"?(y/n) ";
        cin>>yesnt;
        if (yesnt=="y")
        {
            break;
        }else if(yesnt=="n"){
            cout<<"Ваше число больше "<<mid<<"?(y/n)";
            cin>>yesnt;
            if (yesnt=="y")
            {
                a = mid+1;
            }else if(yesnt=="n"){
                b = mid;
            }else{
                cout<<"Пожалуйста, введите y или n";
            }
            
        }else{
            cout<<"Пожалуйста, введите y или n";
        }
        i++;

    } while (!finder);
    cout<<"Я хорош. За "<<i<<" попыток угадал";
}
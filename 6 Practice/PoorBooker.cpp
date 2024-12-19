#include<iostream>
using namespace std;

int main(){
    int Bills;

    cout<<"Введите число: ";
    cin>>Bills;

    if(Bills<0){
        Bills = Bills/-1;
    }

    int i = 0;

    if (Bills == 0)
    {
        cout<<"Цифр в числе 1 ";
    }else{
        while (Bills > 0)
        {
            Bills /=10;
            i+=1;
        }
        cout<<"Цифр в числе "<<i;
    }
    
}
#include <iostream>
using namespace std;

int main(){
    int speed, height;

    cout<<"Введите скорость самолета: ";
    cin>>speed;
    cout<<"Введите высоту полета: ";
    cin>>height;

    if (speed >=750 && speed <=850 && height >= 9000 && height <= 9500)
    {
        cout<<"Полет нормальный!";
    }else{
        cout<<"Немедленно исправьте ситуацию!";
    }
    

}
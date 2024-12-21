#include <iostream>
using namespace std;

int main(){
    int bactery, antibiotic;

    cout<<"Введите количество бактерий: ";
    cin>>bactery;
    cout<<"Введите количество антибиотиков: ";
    cin>>antibiotic;

    int currentBactery=bactery;
    int currentAntibiotic = antibiotic*10;
    for (int i = 1; 0 < currentAntibiotic; i++)
    {
        currentBactery = (currentBactery*2)-currentAntibiotic; 
        cout<<"После "<<i<<" часа бактерий осталось "<<currentBactery<<"\n";
        currentAntibiotic--;
    }
}
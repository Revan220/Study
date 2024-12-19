#include <iostream>
using namespace std;

int main(){
    int hour;

    cout<<"Введите, который час: ";
    cin>>hour;

    if (hour>0 && hour < 24)
    {
        int i=0;
        while (i<hour)
        {
            cout<<"Ку-ку!\n";
            i++;
        }   
    }else if(hour==0){
        cout<<"Ку-ку!";
    }else{
        cout<<"Введено неправильно время!";
    }
    
}
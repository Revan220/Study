#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int max, min, mid;

    cout<<"Введите зарплату первого сотрудника: ";
    cin>>a;
    cout<<"Введите зарплату второго сотрудника: ";
    cin>>b;
    cout<<"Введите зарплату третьего сотрудника: ";
    cin>>c;

    cout<<"====Считаем====";

    if (a<b)
    {
        if (b>c)
        {
            max = b;
            if (a<c)
            {
                min = a;
                mid = c;
            }else{
                min = c;
                mid = a;
            }
            
        }else{
            max = c;
            min = a;
            mid = b;
        }
        
    }else if (a>b)
    {
        if (a>c)
        {
            max = a;
            if (c>b)
            {
                min = b;
                mid = c;
            }else{
                min = c;
                mid = b;
            }
            
        }else{
            max = c;
            min = b;
            mid = a;
        }
        
    }
    cout<<"Самая высокая зарплата в отделе: "<<max<<" рублей\nРазница между самой высокой и низкой зарплатой в отделе: "<<max-min<<" рублей\nСредняя зарплата в отделе: "<<mid<<" рублей";

    
}
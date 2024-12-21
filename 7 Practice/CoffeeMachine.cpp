#include <iostream>
using namespace std;

int main(){
    int water, milk, chose;
    string latte = "Латте", americano = "Американо"; //Типо кофе

    cout<<"Введите количестов воды в мл: ";
    cin>>water;
    cout<<"Введите количество молока в мл: ";
    cin>>milk;


    int americanoCount = 0, latteCount = 0; //Счет кружек
    while (water>0 || milk>0)
    {
        cout<<"Выберите ваш напиток (1 - "<<americano<<", 2 - "<<latte<<"): ";
        cin>>chose;

        if (chose==1)//Если американо hochesh
        {
            if (water>=300)
            {
                water-=300;
                cout<<"Ваш напиток готов\n";
                americanoCount++;//+1 кружечка 
            }else{
                cout<<"Не хватает "<<300-water<<" мл воды\n";//Не hochesh американо
                break;
            }
            
        }else if (chose==2)//Если сладкие апельсины(латте) от Земфиры
        {
            if (water >= 270 && milk >= 30)
            {
                water-=270;
                milk-=30;
                cout<<"Ваш напиток готов\n";
                latteCount++;//+Апельсин(латте)
            }else if (water<270)
            {
                cout<<"Не хватает "<<270-water<<" мл воды\n";
                break;//Апельсин с латте тема, попробуйте
            }else if (milk<30)
            {
                cout<<"Не хватает "<<30-milk<<" мл молока\n";
                break;//Ток ещё кофе с лимоном
            }else if(water<270 && milk<30){
                cout<<"Не хватает "<<30-milk<<" мл молока "<<270-water<<" мл воды\n";
                break;//Цитрусы и кофе это ваще такое извращение, но вкусно 
            }
        }else{
            cout<<"Другого варианта нет\n";//Фоллаут 2 классная игра
        }
        
    }
    cout<<"***Отчёт***\nИнгредиентов осталось:\nВода: "<<water<<" мл\nМолоко: "<<milk<<" мл\nКружек "<< americano<<" приготовлено: "
        <<americanoCount<<"\nКружек "<<latte<<" приготовлено: "<<latteCount;

}
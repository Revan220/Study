#include <iostream>
using namespace std;

int main(){
    int A = 15, B = 20; //Параметры площади
    int Up = 0, Side = 0; //Координаты марсохода

    string NextPosition; 

    for(;;){
        cout<<"[Программа]: Марсоход находится на позиции "<<Up<<", "<<Side<<", введите команду: \n[Оператор]: ";
        cin>>NextPosition;
        if (NextPosition=="W"||NextPosition=="w")
        {
            if (Up<A)
            {
                Up++;
            }else{
                cout<<"Ты уперся в стену\n";
            }
            
        }else if (NextPosition=="A"||NextPosition=="a")
        {
            if (Side<=B && Side>0)
            {
                Side--;
            }else{
                cout<<"Ты уперся в стену\n";
            }
            
        }else if (NextPosition=="S"||NextPosition=="s")
        {
            if (Up<=A && Up>0)
            {
                Up--;
            }else{
                cout<<"Ты уперся в стену\n";
            }
            
        }else if (NextPosition=="D"||NextPosition=="d")
        {
            if (Side<B)
            {
                Side++;
            }else{
                cout<<"Ты уперся в стену\n";
            }
        }else if(NextPosition=="stop"||NextPosition=="Stop"){
            cout<<"Соединение прервано";
            break;
        }
        
        
        
        
    }    

}
#include <iostream>
using namespace std;

int main() {
    int people, barbers;

    cout<<"Введите количество людей: ";
    cin>>people;
    cout<<"Введите количество барберов: ";
    cin>>barbers;
    cout<<"========\n";

// Сколько клиентов один барбер может обслужить за месяц
    int clientsPerMonthPerBarber = 8 * 30; 

    // Общее количество клиентов, которых могут обслужить все барберы
    int totalServedClients = barbers * clientsPerMonthPerBarber;

    if (people == totalServedClients) {
        cout << "Барберов хватает." << "\n";
    } else if (people > totalServedClients) {
        // Если людей больше, чем обслуживаемых клиентов
        int unservedClients = people - totalServedClients;
        // Считаем сколько дополнительных барберов нужно для обслуживания оставшихся клиентов
        int additionalBarbers = unservedClients / clientsPerMonthPerBarber;
        
        // Если есть остаток, нужно ещё одного барбера
        if (unservedClients % clientsPerMonthPerBarber != 0) {
            additionalBarbers+=1;
        }

        cout << "Не хватает " << additionalBarbers << " барберов." << "\n";
    } else {
        // Если обслуживаемых клиентов больше, чем людей
        cout << "Барберов хватает." << "\n";
    }
    
// Снизу как я изначально решил


    // // Обслужанные клиенты
    // int ServedClients = barbers*ClientsPerMonth;

    // // Проверяем сходятся ли обслужанные клиенты и количество людей
    // if (people==ServedClients)
    // {
    //     cout<<"Барберов хватает";
    //     // Если людей больше чем обслужанных клиентов
    // } else if (people>ServedClients)
    // {
    //     int UnServedClients = people-ServedClients;
    //     // Проверка на наличие барберов в целом
    //     if(barbers==0){
    //         cout<<"Не хватает 1";
    //         // Если барберы есть, но не хватает
    //     }else if){
    //         cout<<"Не хватает "<<UnServedClients/ClientsPerMonth;
    //         }
    // // Проверяем на наличие лишних клиентов
    // } else if (people<ServedClients){
    //     // Считаем лишних клиентов
    //     int excessClients = ServedClients-people;
    //     // На случай если людей меньше 240, а барбер только один
    //     if (excessClients/ClientsPerMonth==0)
    //     {
    //         cout<<"Барберов хватает";
    //     // Считаем лишних барберов
    //     } else {
    //         cout<<"Превышвает на "<<excessClients/ClientsPerMonth;
    //     }   
        
    // }
}

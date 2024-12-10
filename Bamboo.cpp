#include <iostream>

int main(){
    int dailyGrowth;
    int nightFade;
    int beginHeight;

    std::cout<<"Сколько примерно растет бамбук в течении дня: ";
    std::cin>>dailyGrowth;
    std::cout<<"Сколько примерно гусеницы съедают за ночь: ";
    std::cin>>nightFade;
    std::cout<<"Задайте начальный размер саженца: ";
    std::cin>>beginHeight;

    int FirstDay = beginHeight + dailyGrowth / 2;
    int SecondDay = beginHeight + (dailyGrowth - nightFade) + dailyGrowth / 2;
    int ThirtDay = beginHeight + (dailyGrowth - nightFade) * 2 + dailyGrowth / 2;

    std::cout<<"К середине третьего дня будет "<<ThirtDay<<" сантиметров";
}
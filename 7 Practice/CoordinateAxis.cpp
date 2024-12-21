#include <iostream>
using namespace std;

int main(){
    int x=10, y=20;

    for (int i = 0; i < (x/2)+1; i++)
    {
        
        if (i<=x)
        {
            for (int i = 0; i < y/2; i++)
            {
                cout<<" ";
            }
        }
        if (i==0)
        {
            cout<<"^\n";
        }else{
            cout<<"|"<<i<<"\n";//i можно убрать, использовался чисто ради проверки
        }
        
        
    }
    for (int i = 0; i < y+1; i++)
    {
        if (i==y/2)
        {
            cout<<"+";
        }
        if (i>=y)
        {
            cout<<">\n";
        }else if (i<y)
        {
            cout<<"-";
        }
    }
    
    for (int i = 0; i < x/2; i++)
    {    
        if (i<=x)
        {
            for (int i = 0; i < y/2; i++)
            {
                cout<<" ";
            }
        }
        if (i>=0)
        {
            cout<<"|"<<i+1<<"\n";//i+1 можно убрать, использовался чисто ради проверки
        }
        
    }

}
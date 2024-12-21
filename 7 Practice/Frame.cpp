#include <iostream>
using namespace std;

int main(){
    int width, height;

    cout<<"Введите ширину и высоту рамки: ";
    cin>>width>>height;

    int space = 0;
    for (; space <= width+1; space++)
    {
        if (space==0)
        {
            cout<<"|";
        }else if (space<=width)
        {
            cout<<"-";
        }else
        {
            cout<<"|\n";
            break;
        }
        
    }
    for (int i = 0; i < height-2; i++)
    {
        if (i>=0)
        {
            cout<<"|";
            for (int i = 0; i < space-1; i++)
            {
                cout<<" ";
            }
            cout<<"|\n";
        }
        
    }
    for (int space = 0; space <= width+1; space++)
    {
        if (space==0)
        {
            cout<<"|";
        }else if (space<=width)
        {
            cout<<"-";
        }else
        {
            cout<<"|\n";
            break;
        }
        
    }
}
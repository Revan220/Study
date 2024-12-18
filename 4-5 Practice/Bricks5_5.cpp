#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int m, n, k;

    cout<<"Давайте проверим, влезет ли первая коробка в другую\nВведите размер первой коробки(a, b, c): ";
    cin>>a>>b>>c;
    cout<<"Введите размер второй коробки(m, n, k): ";
    cin>>m>>n>>k;

    int minBox1 = min(a, min(b, c));
    int midBox1 = max(min(a, b), min(max(a, b), c));
    int maxBox1 = max(a, max(b, c));
    
    
    int minBox2 = min(m, min(n, k));
    int midBox2 = max(min(m, n), min(max(m, n), k));
    int maxBox2 = max(m, max(n, k));
    
    
    if (minBox1 <= minBox2 && midBox1 <= midBox2 && maxBox1 <= maxBox2) {
        cout << "Первая коробка помещается во вторую!\n";
    } else if (minBox1 >= minBox2 && midBox1 >= midBox2 && maxBox1 >= maxBox2)
    {
        cout << "Первая коробка помещается во вторую, но вторая помещается в первую\n";
    }else{
        cout << "Коробки не помещаются друг в друга\n";
    }
    
}
#include <iostream>;
using namespace std;

int main() {
    int M, N;

    cout << "Введите числитель: ";
    cin >> M;
    cout << "Введите знаменатель: ";
    cin >> N;

    // Используем алгоритм Евклида для нахождения НОД
    int a = M;
    int b = N;

    while (b != 0) {
           int temp = b;
        b = a % b;
        a = temp;
    }

    int gcdValue = a;
    M /= gcdValue;
    N /= gcdValue;

    if (N < 0) {
        M = -M;
        N = -N;
    }
    cout << "Результат: " << M << " / " << N << endl;
}
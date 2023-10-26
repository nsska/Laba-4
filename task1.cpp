#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    const int max = 5;
    int massive[max];
    cout << "Введите последовательность из 5 целых чисел: ";
    for (int i = 0; i < max; ++i)
        cin >> massive[i];
    int little = massive[0];
    for (int i = 1; i < max; ++i) {
        if (massive[i] < little)
            little = massive[i];
    }
    int count = 0;
    for (int i = 0; i < max; ++i) {
        if (massive[i] == little)
            count++;
    }
    cout << "Наименьшее введённое число: " << little << "\nКоличество повторений: "<< count << endl;
    
    return 0;
}
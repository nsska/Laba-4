#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Количество чисел в массиве: " << size << endl;
    cout << "Содержимое массива: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
        }
    }
    cout << "Сумма элементов массива, кратных 3: " << sum << endl;
    
    return 0;
}
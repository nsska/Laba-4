#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    
    int X[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }
    
    int maxElement = X[0];
    int minElement = X[0];
    int maxIndex = 0;
    int minIndex = 0;
    
    for (int i = 1; i < n; i++) {
        if (X[i] > maxElement) {
            maxElement = X[i];
            maxIndex = i;
        }
        if (X[i] < minElement) {
            minElement = X[i];
            minIndex = i;
        }
    }

    cout << "Максимальный элемент: " << maxElement << ", его индекс: " << maxIndex << endl;
    cout << "Минимальный элемент: " << minElement << ", его индекс: " << minIndex << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int number, remainder;
    string binary = "";
 
    cout << "Введите десятичное число: ";
    cin >> number;
 
    while (number > 0) {
    remainder = number % 2;
    binary = to_string(remainder) + binary;
    number /= 2;
    }
 
    cout << "Двоичная система: " << binary << endl;
    
    return 0;
}

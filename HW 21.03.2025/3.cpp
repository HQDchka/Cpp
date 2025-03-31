#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Деление на ноль");
    }
    return a / b;
}

int getArrayElement(int* arr, int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Индекс вне диапазона");
    }
    return arr[index];
}

int main() {
    setlocale(LC_ALL, "RU");
    int arr[5] = { 1, 2, 3, 4, 5 };

    try {
        double a, b;
        cout << "Введите два числа для деления: ";
        cin >> a >> b;
        cout << "Результат деления: " << divide(a, b) << endl;

        int index;
        cout << "Введите индекс массива (0-4): ";
        cin >> index;
        cout << "Элемент: " << getArrayElement(arr, 5, index) << endl;
    }
    catch (const runtime_error& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    catch (...) {
        cout << "Неизвестная ошибка" << endl;
    }

    return 0;
}
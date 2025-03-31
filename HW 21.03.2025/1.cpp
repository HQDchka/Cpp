#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw "Деление на ноль!";
    }
    return a / b;
}

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;

    try {
        double result = divide(a, b);
        cout << "Результат: " << result << endl;
    }
    catch (const char* error) {
        cout << "Ошибка: " << error << endl;
    }

    return 0;
}
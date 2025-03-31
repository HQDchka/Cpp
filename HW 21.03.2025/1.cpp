#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw "������� �� ����!";
    }
    return a / b;
}

int main() {
    setlocale(LC_ALL, "RU");
    double a, b;
    cout << "������� ��� �����: ";
    cin >> a >> b;

    try {
        double result = divide(a, b);
        cout << "���������: " << result << endl;
    }
    catch (const char* error) {
        cout << "������: " << error << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("������� �� ����");
    }
    return a / b;
}

int getArrayElement(int* arr, int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("������ ��� ���������");
    }
    return arr[index];
}

int main() {
    setlocale(LC_ALL, "RU");
    int arr[5] = { 1, 2, 3, 4, 5 };

    try {
        double a, b;
        cout << "������� ��� ����� ��� �������: ";
        cin >> a >> b;
        cout << "��������� �������: " << divide(a, b) << endl;

        int index;
        cout << "������� ������ ������� (0-4): ";
        cin >> index;
        cout << "�������: " << getArrayElement(arr, 5, index) << endl;
    }
    catch (const runtime_error& e) {
        cout << "������: " << e.what() << endl;
    }
    catch (const out_of_range& e) {
        cout << "������: " << e.what() << endl;
    }
    catch (...) {
        cout << "����������� ������" << endl;
    }

    return 0;
}
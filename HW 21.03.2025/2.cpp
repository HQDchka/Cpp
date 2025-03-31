#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class MyException {
private:
    string message;
public:
    MyException(string msg) : message(msg) {}
    string getMessage() { return message; }
};

void openFile(string filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        throw MyException("�� ������� ������� ����: " + filename);
    }
    file.close();
}

int main() {
    setlocale(LC_ALL, "RU");
    string filename;
    cout << "������� ��� �����: ";
    cin >> filename;

    try {
        openFile(filename);
        cout << "���� ������� ������" << endl;
    }
    catch (MyException& e) {
        cout << "������: " << e.getMessage() << endl;
    }

    return 0;
}
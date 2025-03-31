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
        throw MyException("Не удалось открыть файл: " + filename);
    }
    file.close();
}

int main() {
    setlocale(LC_ALL, "RU");
    string filename;
    cout << "Введите имя файла: ";
    cin >> filename;

    try {
        openFile(filename);
        cout << "Файл успешно открыт" << endl;
    }
    catch (MyException& e) {
        cout << "Ошибка: " << e.getMessage() << endl;
    }

    return 0;
}
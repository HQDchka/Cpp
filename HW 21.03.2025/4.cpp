#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileHandler {
private:
    ifstream file;
public:
    FileHandler(string filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw runtime_error("Не удалось открыть файл");
        }
    }

    string readLine() {
        string line;
        if (!getline(file, line)) {
            throw runtime_error("Ошибка чтения файла");
        }
        return line;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "Файл закрыт" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    try {
        FileHandler fh("students.txt");
        string line = fh.readLine();
        cout << "Прочитанная строка: " << line << endl;
    }
    catch (const runtime_error& e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
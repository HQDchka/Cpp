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
            throw runtime_error("�� ������� ������� ����");
        }
    }

    string readLine() {
        string line;
        if (!getline(file, line)) {
            throw runtime_error("������ ������ �����");
        }
        return line;
    }

    ~FileHandler() {
        if (file.is_open()) {
            file.close();
            cout << "���� ������" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    try {
        FileHandler fh("students.txt");
        string line = fh.readLine();
        cout << "����������� ������: " << line << endl;
    }
    catch (const runtime_error& e) {
        cout << "������: " << e.what() << endl;
    }

    return 0;
}
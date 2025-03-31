#include <iostream>
#include "person.h"
#include "student.h"

int main() {
    setlocale(LC_ALL, "Russian");

    Person person("Иван Иванов", 30, Gender::Male);
    Student student("Анна Смирнова", 20, Gender::Female, "ИКБО-01-22");

    std::cout << "Информация о человеке:\n";
    person.printInfo();

    std::cout << "\nИнформация о студенте:\n";
    student.printInfo();

    return 0;
}

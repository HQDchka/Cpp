#include "student.h"

Student::Student(const std::string& name, int age, Gender gender, const std::string& group)
    : Person(name, age, gender), groupNumber(group) {
}

void Student::printInfo() const {
    Person::printInfo();
    std::cout << "Номер группы: " << groupNumber << "\n";
}

#include "person.h"

Person::Person(const std::string& name, int age, Gender gender)
    : fullName(name), age(age), gender(gender) {
}

void Person::printInfo() const {
    std::cout << "���: " << fullName << "\n�������: " << age
        << "\n���: " << (gender == Gender::Male ? "�������" : "�������") << "\n";
}

#include "person.h"

Person::Person(const std::string& name, int age, Gender gender)
    : fullName(name), age(age), gender(gender) {
}

void Person::printInfo() const {
    std::cout << "ФИО: " << fullName << "\nВозраст: " << age
        << "\nПол: " << (gender == Gender::Male ? "Мужской" : "Женский") << "\n";
}

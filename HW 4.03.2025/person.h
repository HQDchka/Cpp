#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

enum class Gender { Male, Female };

class Person {
protected:
    std::string fullName;
    int age;
    Gender gender;

public:
    Person(const std::string& name, int age, Gender gender);
    void printInfo() const;
};

#endif

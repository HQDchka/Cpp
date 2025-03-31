#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

class Student : public Person {
private:
    std::string groupNumber;

public:
    Student(const std::string& name, int age, Gender gender, const std::string& group);
    void printInfo() const;
};

#endif

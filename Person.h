//
// Created by feng on 2022/2/10.
//

#ifndef CPP_PERSON_H
#define CPP_PERSON_H

#include "string"
#include <iostream>
#include "Dog.h"

using namespace std;

class Person {
public:
    int _age;
    string _name;
    Dog *_dog;
public:
    void run();

    void say();
};


#endif //CPP_PERSON_H

//
// Created by feng on 2022/2/10.
//

#ifndef CPP_DOG_H
#define CPP_DOG_H

#include "string"
#include "Animal.h"

using namespace std;

class Dog : public Animal {
public:
    int _age;
    string _name;
public:
    void say();

    void run();
};


#endif //CPP_DOG_H

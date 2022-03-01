//
// Created by feng on 2022/3/1.
//

#ifndef CPP_ANIMAL_H
#define CPP_ANIMAL_H

#include "string"
#include "iostream"

using namespace std;

class Animal {
public:
    string _name;

    virtual ~Animal();//虚析构可以解决父类指针释放子类对象不干净的问题。

//    virtual ~Animal() = default;纯析构不需要实现

    virtual void say();

    virtual void run();

};


#endif //CPP_ANIMAL_H

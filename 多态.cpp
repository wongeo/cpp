//
// Created by feng on 2022/3/1.
//
#include "model/Dog.h"
#include "iostream"
#include "model/Person.h"
#include "model/Animal.h"

using namespace std;

//地址早绑定，在编译阶段就已经确定了地址，打印的是动物在说话
//如果想使用子类的说话函数，那么这个函数的地址就不能提前绑定，需要在运行阶段进行绑定。在say函数前面加virtual ！！！

//动态多态
//1、有集成关系
//2、子类重写父类的虚函数
//3、
void say(Animal &animal) {
    animal.say();
}


int main() {
    Dog dog;
    dog._name = "大黄";
    say(dog);


    return 0;
}
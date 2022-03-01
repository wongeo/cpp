#include "iostream"
#include "model/Person.h"

using namespace std;

int *func() {
    //利用new关键字可以将数据开辟到堆区
    int *p = new int(10);
    return p;
}

int main() {

    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    Dog *dog = new Dog();
    dog->_name = "旺财";

    auto person = new Person();
    person->_name = "小明";
    person->_dog = dog;

    cout << "Person name is " << person->_name << endl;
    cout << "Dog name is " << person->_dog->_name << endl;

    return 0;
}
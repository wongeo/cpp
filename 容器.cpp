//
// Created by feng on 2022/3/2.
//
#include "model/Person.h"
#include "iostream"
#include "vector"

using namespace std;

void test1() {
    vector<Person> v;
    Person p1("1");
    Person p2("2");
    Person p3("3");

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    vector<Person>::iterator begin = v.begin();
    vector<Person>::iterator end = v.end();

    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
        cout << (*it)._name << endl;
    }
}

void test2() {
    vector<Person *> v;
    Person p1("1");
    Person p2("2");
    Person p3("3");

    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);

    vector<Person *>::iterator begin = v.begin();
    vector<Person *>::iterator end = v.end();

    for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++) {
        cout << (**it)._name << endl;
    }
}

int main() {

    test1();
    test2();
    return 0;
}
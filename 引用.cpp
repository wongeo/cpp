//
// Created by feng on 2022/2/23.
//
#include "iostream"

using namespace std;

//1.值传递
void func1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//2.地址传递
void func2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3.引用传递
void func3(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//4.常量引用修饰形参，防止误操作
void show(const int &a){
    cout << "value=" << a << endl;
}

int main() {

    int a = 10;
    int b = 20;

    func1(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    func2(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    func3(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
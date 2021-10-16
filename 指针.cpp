#include <iostream>

using namespace std;

int main() {

    int a = 10;
    cout << "a的值为：" << a << endl;
    cout << "a的地址为:" << &a << endl;

    //指针定义的语法：数据类型 * 指针变量名
    int *p;
    //让指针p记录a的地址，&取址运算符
    p = &a;
    cout << "指针p的值为：" << p << endl;//存储的是int a的地址，打印出来的也是个地址

    //使用指针
    //可以通过解引用的方式找到指针指向的内存
    //指针前加*代表解引用，找到指针指向的内存中的数据
    *p = 1000;
    cout << "a=" << a << endl;
    cout << "*p=" << *p << endl;
    return 0;
}
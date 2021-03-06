#include "iostream"
#include "model/Person.h"

using namespace std;


//栈区注意事项----不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int *func(int b) {
    b = 10;
    int a = 10;//局部变量放在栈区，栈区的数据在函数执行完后自动释放
    return &a;
}

Person func() {
    Person person;
    person._name = "栈区的P";
    cout << "person=" << person._name << " 地址为：" << &person << endl;
    return person;
}

int main() {

    int *p = func(10);
    cout << *p << endl;//第一次可以正常打印数字是因为编译器做了保留
    cout << *p << endl;//第二次打印就是错误的

    Person p0;
    p0._name = "局部P";
    Person p1 = func();
    Person p2 = p1;
    p2._name = "aaaa";
    Person *p3 = new Person();
    p3->_name = "堆区的P";
    cout << "p1=" << p1._name << " 地址为：" << &p1 << endl;
    cout << "p2=" << p2._name << " 地址为：" << &p2 << endl;
    cout << "p3=" << p3->_name << " 地址为：" << p3 << endl;
    return 0;
}
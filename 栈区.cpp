#include "iostream"

using namespace std;


//栈区注意事项----不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

int *func(int b) {
    b = 10;
    int a = 10;//局部变量放在栈区，栈区的数据在函数执行完后自动释放
    return &a;
}

int main() {

    int *p = func(10);
    cout << *p << endl;//第一次可以正常打印数字是因为编译器做了保留
    cout << *p << endl;//第二次打印就是错误的

    return 0;
}
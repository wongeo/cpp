#include <iostream>

using namespace std;

//全局变量
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;

int main() {

    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为：" << (uintptr_t) &a << endl;
    cout << "局部变量b的地址为：" << (uintptr_t) &b << endl;

    cout << "全局变量g_a的地址为：" << (uintptr_t) &g_a << endl;
    cout << "全局变量g_b的地址为：" << (uintptr_t) &g_b << endl;

    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为：" << (uintptr_t) &s_a << endl;
    cout << "静态变量s_b的地址为：" << (uintptr_t) &s_b << endl;

    cout << "字符串常量的地址为：" << (uintptr_t) &"Hello World" << endl;


    const int c_a = 10;

    cout << "const修饰的全局变量的地址为：" << (uintptr_t) &c_g_a << endl;
    cout << "const修饰的变量地址为：" << (uintptr_t) &c_a << endl;
    return 0;
}

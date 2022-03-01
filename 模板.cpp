//
// Created by feng on 2022/3/1.
//

#include "iostream"
#include "string"

using namespace std;


template<class T>
T func(T t1, T t2) {
    return t1 + t2;
}

int main() {

    int i1 = 2;
    int i2 = 3;
    string s1 = "abc";
    string s2 = "123";

    int i3 = func<int>(i1, i2);
    string s3 = func<string>(s1, s2);
    cout << "i3=" << i3 << endl;
    cout << "s3=" << s3 << endl;
    return 0;
}
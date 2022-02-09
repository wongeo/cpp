//
// Created by feng on 2022/2/9.
//
#include <map>
#include "iostream"

std::map<int, std::string> maps{
        {1, "aaa"},
        {2, "bbb"},
        {3, "ccc"},
        {4, "ddd"},
};

std::string GetValueByKey(int key) {
    for (auto it = maps.begin(); it != maps.end(); it++) {
        if (it->first == key) {
            return it->second;
        }
    }
    return NULL;
}

std::string *GetValueByKey2(int key) {
    for (auto it = maps.begin(); it != maps.end(); it++) {
        if (it->first == key) {
            return &(it->second);
        }
    }
    return NULL;
}


int main() {

    std::string value = GetValueByKey(1);
    std::cout << "通过引用拿到value=" << value << std::endl;

    std::string *p = GetValueByKey2(1);
    std::cout << "通过指针拿到value=" << *p << std::endl;

    std::cout << "执行结束!!!" << std::endl;
    return 0;
}
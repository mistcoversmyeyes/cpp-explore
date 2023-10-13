#include <iostream>

int main() {
    int num = 10; // 声明一个整数变量
    int* ptr = nullptr; // 声明一个指向整数的指针变量

    ptr = &num; // 将指针指向变量num的内存地址

    std::cout << "num的值为：" << num << std::endl;
    std::cout << "ptr指向的值为：" << *ptr << std::endl;

    return 0;
}
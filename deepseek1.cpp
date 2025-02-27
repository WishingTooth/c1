#include <iostream>
#include <string>
#include <math.h>

void deepseek(void) {
    std::string s;
    std::cout << "请输入你的问题: " << std::endl;
    std::cin >> s;
    std::cout << "Thinking";
    for (int i = 0; i < 3; i++) {
        std::cout << '.';
        for (int i = 0; i < 2000000000; i++) {
            i += 1;
            i -= 1;
        }
    }
    std::cout << std::endl;
    std::cout << "服务器繁忙，请稍后再试。" << std::endl;
}

int main() {
    do {
        deepseek(void);
        char c{};
        std::cout << "按0退出程序，按1继续程序。" << std::endl;
        std::cin >> c;
        if (c == '0') {
            break;
        }
        else {
            continue;
        }
    } while (1);
    return 0;
}

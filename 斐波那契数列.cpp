#include <iostream>
#include <string>
#include <windows.h>

double fib (int n) {
    double s = 1;       //F(1) = F(2) = 1
    if (n == 0) {
        s = 0;          //F(0) = 0
    }                   //如果F(2)不等于F(1), 则还需要if else (n == 1)
    else {
        double x = 0, y = 1;
        while (n > 2) {
            y = s;      //将F(n)赋值给F(n - 1)
            x = y - x;  //F(n - 1) = F(n) - F(n - 2)
            s = y + x;  //F(n + 1) = F(n) - F(n - 1)
            n--;        //n > 2的原因是s的初始值为F(2), 在循环m次之后, 最初的n变为了n - m, s的值变为了F(m + 2)
        }               //所以当F(m + 2) = F(n)时, m + 2 = n, 即m = n - 2. 所以n > 2.
    }
    return s;
}

int main(void) {
    int n{};
    std::cin >> n;
    std::cout << fib(n) << std::endl;
    return 0;
}

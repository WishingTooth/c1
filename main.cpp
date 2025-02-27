#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <stdio.h>

#if 1
int main(void) {
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << a[i][j] << ' ';
			//数组的最低维的地址等价于一级指针
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << *(*(a + i) + j) << ' ';
			//对二级指针解引用得到的是一级指针
		}
		std::cout << std::endl;
	}
	return 0;
}
#endif
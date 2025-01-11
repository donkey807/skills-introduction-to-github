#include <stdio.h>
#include <windows.h> // 用于 sleep 函数
#include <stdlib.h>
#include <time.h>
int main() {
    printf("Hello, World!\n");
    Sleep(5); // 暂停1秒

    // 移动光标到第二行第一列
    printf("\033[2;1H");
    Sleep(500);
    // 输出新的内容
    printf("This is a new line!");

    // 再次暂停
    Sleep(500); // 暂停2秒

    // 清屏
    //printf("\033[2J"); // 清除屏幕1
    //printf("\033[H"); // 移动光标到左上角

    return 0;
}

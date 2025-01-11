
//#include <stdio.h>
//#include <windows.h>
//#include <conio.h> // 包含 _getch() 函数的头文件
//
//int main() {
//    int x, y;
//    printf("请输入光标的初始位置 (x y): ");
//    scanf("%d %d", &x, &y); // 获取用户输入的坐标
//
//    COORD coord;
//    coord.X = x;
//    coord.Y = y;
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台输出的句柄
//    SetConsoleCursorPosition(hConsole, coord); // 设置光标位置
//    printf("a"); // 在指定位置输出字符 'a'
//
//    // 控制字符的移动
//    for (int i = 0; i < 100; i++) {
//        char space = _getch(); // 获取用户输入的字符，不需要按回车
//
//        // 清除原先字符
//        SetConsoleCursorPosition(hConsole, coord);
//        printf(" "); // 用空格清除原先的字符
//
//        switch (space) {
//        case 'l': // 向左移动
//            coord.X -= 1;
//            break;
//        case 'r': // 向右移动
//            coord.X += 1;
//            break;
//        case 'u': // 向上移动
//            coord.Y -= 1;
//            break;
//        case 'd': // 向下移动
//            coord.Y += 1;
//            break;
//        default:
//            continue; // 如果输入无效，跳过本次循环
//        }
//
//        // 确保坐标不越界
//        if (coord.X < 0) coord.X = 0;
//        if (coord.Y < 0) coord.Y = 0;
//
//        // 设置新的光标位置并输出字符
//        SetConsoleCursorPosition(hConsole, coord);
//        printf("a");
//    }
//    return 0;
//}
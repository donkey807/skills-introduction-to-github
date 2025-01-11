//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>//得到随机函数
//#include<stdlib.h>//提供rand,srand函数
//#include<windows.h>
//#include<conio.h>
//#include <thread>
//DWORD WINAPI ThreadFunction(LPVOID lpParam)
//{
//    int threadId = *(int*)lpParam; // 将参数转换为整数
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台输出的句柄
//    srand(static_cast <unsigned int>(time(0)));
//    int num[10];
//    for (int i = 0; i < 10; i++)//x坐标
//    {
//        num[i] = rand() % 50 + 1;
//        COORD coord1;//声明
//        coord1.X = num[i];//获取srand函数随机得到的数字作为坐标x
//        coord1.Y = 0;
//        //coord1.Y = y;//y=0
//
//        for (int k = 0; k < 20; k++)
//        {
//            coord1.Y += 1;
//            SetConsoleCursorPosition(hConsole, coord1);//获取坐标
//            printf("a");//打印的字符
//            Sleep(50);
//            SetConsoleCursorPosition(hConsole, coord1);//获取坐标
//            printf(" ");//打印空格来覆盖先前的a
//        }
//
//    }
//
//
//    return 0;
//
//}
//int main()
//{
//    HANDLE hThread;
//    DWORD threadId = 1;
//    hThread = CreateThread(
//        NULL,           // 默认安全属性
//        0,              // 默认栈大小
//        ThreadFunction, // 线程函数
//        &threadId,      // 传递给线程函数的参数
//        0,              // 默认创建标志
//        NULL            // 不需要线程 ID
//    );
//
//
//
//    COORD coord2;
//    coord2.X = 10;
//    coord2.Y = 10;
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台输出的句柄
//    SetConsoleCursorPosition(hConsole, coord2); // 设置光标位置
//    printf("b"); // 在指定位置输出字符 'b'
//
//    // 控制字符的移动
//    for (int i = 0; i < 100; i++) {
//        char space = _getch(); // 获取用户输入的字符，不需要按回车
//
//        // 清除原先字符
//        SetConsoleCursorPosition(hConsole, coord2);
//        printf(" "); // 用空格清除原先的字符
//
//        switch (space) {
//        case 'a': // 向左移动
//            coord2.X -= 1;
//            break;
//        case 'd': // 向右移动
//            coord2.X += 1;
//            break;
//        case 'w': // 向上移动
//            coord2.Y -= 1;
//            break;
//        case 's': // 向下移动
//            coord2.Y += 1;
//            break;
//        default:
//            continue; // 如果输入无效，跳过本次循环
//        }
//
//        // 确保坐标不越界
//        if (coord2.X < 0) coord2.X = 0;
//        if (coord2.Y < 0) coord2.Y = 0;
//
//        // 设置新的光标位置并输出字符
//        SetConsoleCursorPosition(hConsole, coord2);
//        printf("b");
//    }
//   
//}

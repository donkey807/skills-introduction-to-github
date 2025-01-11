//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//自动的把字符缓慢下移
//#include<Windows.h>
//#include <conio.h>
//int main()
//{   
//	int x;
//	int y;
//	printf("输入控制人的坐标");
//	scanf("%d %d", &x, &y);
//	COORD coord1;
//	COORD coord2;
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台输出的句柄
//	coord2.X=x;
//	coord2.Y=y;
//	SetConsoleCursorPosition(hConsole, coord2);
//	printf("b");
//	coord1.X = 0;
//	coord1.Y = 0;
//	for (int k = 0; k < 20; k++)
//	{
//		
//		
//			SetConsoleCursorPosition(hConsole, coord1);//获取坐标
//			printf(" ");//打印空格来覆盖先前的a
//			coord1.Y += 1;//循环30次，Y坐标增1
//			SetConsoleCursorPosition(hConsole, coord1);//获取坐标
//			printf("a");//打印的字符
//			Sleep(500);
//			if (coord1.Y == coord2.Y&&coord1.X==coord2.X)
//				break;//触碰到敌人啦，所以游戏停止了
//
//
//	}
//
//}





//#include<stdio.h>//自动的把字符缓慢下移
//#include<windows.h>
//#include <conio.h>
//int main()
//{   
//	COORD coord;
//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // 获取控制台输出的句柄
//	coord.X=0;
//	coord.Y=0;
//	for (int k = 0; k < 20; k++)
//	{
//		
//		coord.Y += 1;//循环30次，Y坐标增1
//		SetConsoleCursorPosition(hConsole, coord);//获取坐标
//		printf("a");//打印的字符
//		Sleep(500);
//		SetConsoleCursorPosition(hConsole, coord);
//		//获取坐标,在次申请坐标，否则不能获取，当下不能覆盖“a"
//        printf(" ");//打印空格来覆盖先前的a
//	
//	}
//}
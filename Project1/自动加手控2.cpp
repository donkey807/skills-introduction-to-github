//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>//�õ��������
//#include<stdlib.h>//�ṩrand,srand����
//#include<windows.h>
//#include<conio.h>
//#include <thread>
//DWORD WINAPI ThreadFunction(LPVOID lpParam)
//{
//    int threadId = *(int*)lpParam; // ������ת��Ϊ����
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // ��ȡ����̨����ľ��
//    srand(static_cast <unsigned int>(time(0)));
//    int num[10];
//    for (int i = 0; i < 10; i++)//x����
//    {
//        num[i] = rand() % 50 + 1;
//        COORD coord1;//����
//        coord1.X = num[i];//��ȡsrand��������õ���������Ϊ����x
//        coord1.Y = 0;
//        //coord1.Y = y;//y=0
//
//        for (int k = 0; k < 20; k++)
//        {
//            coord1.Y += 1;
//            SetConsoleCursorPosition(hConsole, coord1);//��ȡ����
//            printf("a");//��ӡ���ַ�
//            Sleep(50);
//            SetConsoleCursorPosition(hConsole, coord1);//��ȡ����
//            printf(" ");//��ӡ�ո���������ǰ��a
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
//        NULL,           // Ĭ�ϰ�ȫ����
//        0,              // Ĭ��ջ��С
//        ThreadFunction, // �̺߳���
//        &threadId,      // ���ݸ��̺߳����Ĳ���
//        0,              // Ĭ�ϴ�����־
//        NULL            // ����Ҫ�߳� ID
//    );
//
//
//
//    COORD coord2;
//    coord2.X = 10;
//    coord2.Y = 10;
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // ��ȡ����̨����ľ��
//    SetConsoleCursorPosition(hConsole, coord2); // ���ù��λ��
//    printf("b"); // ��ָ��λ������ַ� 'b'
//
//    // �����ַ����ƶ�
//    for (int i = 0; i < 100; i++) {
//        char space = _getch(); // ��ȡ�û�������ַ�������Ҫ���س�
//
//        // ���ԭ���ַ�
//        SetConsoleCursorPosition(hConsole, coord2);
//        printf(" "); // �ÿո����ԭ�ȵ��ַ�
//
//        switch (space) {
//        case 'a': // �����ƶ�
//            coord2.X -= 1;
//            break;
//        case 'd': // �����ƶ�
//            coord2.X += 1;
//            break;
//        case 'w': // �����ƶ�
//            coord2.Y -= 1;
//            break;
//        case 's': // �����ƶ�
//            coord2.Y += 1;
//            break;
//        default:
//            continue; // ���������Ч����������ѭ��
//        }
//
//        // ȷ�����겻Խ��
//        if (coord2.X < 0) coord2.X = 0;
//        if (coord2.Y < 0) coord2.Y = 0;
//
//        // �����µĹ��λ�ò�����ַ�
//        SetConsoleCursorPosition(hConsole, coord2);
//        printf("b");
//    }
//   
//}


//#include <stdio.h>
//#include <windows.h>
//#include <conio.h> // ���� _getch() ������ͷ�ļ�
//
//int main() {
//    int x, y;
//    printf("��������ĳ�ʼλ�� (x y): ");
//    scanf("%d %d", &x, &y); // ��ȡ�û����������
//
//    COORD coord;
//    coord.X = x;
//    coord.Y = y;
//
//    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // ��ȡ����̨����ľ��
//    SetConsoleCursorPosition(hConsole, coord); // ���ù��λ��
//    printf("a"); // ��ָ��λ������ַ� 'a'
//
//    // �����ַ����ƶ�
//    for (int i = 0; i < 100; i++) {
//        char space = _getch(); // ��ȡ�û�������ַ�������Ҫ���س�
//
//        // ���ԭ���ַ�
//        SetConsoleCursorPosition(hConsole, coord);
//        printf(" "); // �ÿո����ԭ�ȵ��ַ�
//
//        switch (space) {
//        case 'l': // �����ƶ�
//            coord.X -= 1;
//            break;
//        case 'r': // �����ƶ�
//            coord.X += 1;
//            break;
//        case 'u': // �����ƶ�
//            coord.Y -= 1;
//            break;
//        case 'd': // �����ƶ�
//            coord.Y += 1;
//            break;
//        default:
//            continue; // ���������Ч����������ѭ��
//        }
//
//        // ȷ�����겻Խ��
//        if (coord.X < 0) coord.X = 0;
//        if (coord.Y < 0) coord.Y = 0;
//
//        // �����µĹ��λ�ò�����ַ�
//        SetConsoleCursorPosition(hConsole, coord);
//        printf("a");
//    }
//    return 0;
//}
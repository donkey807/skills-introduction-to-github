#include <stdio.h>
#include <windows.h> // ���� sleep ����
#include <stdlib.h>
#include <time.h>
int main() {
    printf("Hello, World!\n");
    Sleep(5); // ��ͣ1��

    // �ƶ���굽�ڶ��е�һ��
    printf("\033[2;1H");
    Sleep(500);
    // ����µ�����
    printf("This is a new line!");

    // �ٴ���ͣ
    Sleep(500); // ��ͣ2��

    // ����
    //printf("\033[2J"); // �����Ļ1
    //printf("\033[H"); // �ƶ���굽���Ͻ�

    return 0;
}

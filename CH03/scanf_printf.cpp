#include <iostream>
#include <cstdio>  // ���P�� <stdio.h> �A�ݩ� C Standard Library �A�sĶ���䴩���p�U�i�H���δ��e�ŧi
using namespace std;
int main() {
    int i, n, t;
    printf("��J�T��10�i���� : ");
    scanf("%d %d %d", &i, &n, &t);  // scanf("�榡", &�Ѽ�);
    printf("%d %d %d\n", i, n, t);  // printf("�榡", �Ѽ�);

    printf("��J�@�Ӥ��]�t�Ů檺�r�� : ");
    char str[128];  // string s; �L�k���`��J�A�ݭn�ϥ� char c[size]�A�]�� scanf �ݩ� C ���y�k�A���䴩 C++ �� string;
    scanf("%s", &str);  // �r�ꤤ������]�t�Ů�
    printf("%s\n", str);

    system("PAUSE");
    return 0;
}

/*
��J�T��10�i���� : 1 2 3
1 2 3
��J�@�Ӥ��]�t�Ů檺�r�� : ABC123 
ABC123
�Ы����N���~�� . . . 
*/
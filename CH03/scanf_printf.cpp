#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int i, n, t;
    printf("��J�T��10�i���� : ");
    scanf("%d %d %d", &i, &n, &t);  // scanf("�榡", &�Ѽ�);
    printf("%d %d %d\n", i, n, t);  // printf("�榡", �Ѽ�);

    printf("��J�@�Ӥ��]�t�Ů檺�r�� : ");
    char str[128];  // string s; �L�k���`��J�A�ݭn�ϥ� char c[size];
    scanf("%s", &str);  // �r�ꤤ������]�t�Ů�
    printf("%s\n", str);

    system("PAUSE");
    return 0;
}
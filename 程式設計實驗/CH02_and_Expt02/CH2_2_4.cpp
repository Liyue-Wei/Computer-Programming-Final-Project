/*
2.4 �ڭ̤w�g���Dchar�O�HASCII�X��ܡA����i�H�g�{�����ͤ@�i�����ҥ�����B����Ӫ�ܡH
*/

#include <iostream>
using namespace std;
int main() {
    for(int i=0; i<=256; i++) {
        printf("ASCII %d = %c, ", i, static_cast<char>(i));
        if(i%5==0) {printf("\n");}
    }
    printf("\b\b");

    system("Pause");
    return 0;
}
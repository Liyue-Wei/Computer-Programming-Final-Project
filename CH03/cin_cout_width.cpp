/*
cin.width() �M cout.width() ����
*/

#include <iostream>
using namespace std;
int main() {
    char c[128];
    cin.width(8);  // ��ڿ�J�C�Ӧr�� --> [][][][][][][]['\0']
    cin >> c;
    cout << c << '\n';

    cout.width(16);  // ��X�p��16�r���ɡA�۰ʸɪŮ�
    cout << c << '\n' << c << '\n';  // cout.width() �@�νd��u���@���A�ĤG���N��_���`��X

    system("Pause");
    return 0;
}
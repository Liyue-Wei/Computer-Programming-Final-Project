/*
cin.getline(variable, length, '\n')
*/

#include <iostream>
using namespace std;
int main() {
    char h[128];
    cout << "��J : abcdefg123456789" << '\n';
    cin.getline(h, 8);  // ��ڨ��ȤC�Ӧr�� --> [][][][][][][]['\0']
    cout << h << '\n';

    system("Pause");
    return 0;
}
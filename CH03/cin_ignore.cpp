#include <iostream>
using namespace std;
int main() {
    char num[128];
    cout << "��J : abcdefg123456789" << '\n';
    cin >> num;
    cout << num << '\n';

    cout << "��J : abcdefg123456789" << '\n';
    cin.ignore(8); // �����U�@��get���Ȫ��e�C�Ӧr�� (�[�@��'\0'�A�ҥH�O�K�Ӧr��)
    cin.get(num, 8);
    cout << num << '\n';

    system("Pause");
    return 0;
}
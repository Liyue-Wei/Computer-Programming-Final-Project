#include <iostream>
using namespace std;
int main() {
    char c;
    cin.get(c);  // �Ĥ@����J�����G�|�b�Ĥ@��get���Ȥ���d���ĤG��get���ȥ�
    cout << c << '\n';

    char h[128];
    cin.get(h, 8);  // ��ڨ��ȤC�Ӧr�� --> [][][][][][][]['\0']
    cout << h << '\n';

    /*
    int i;
    cin << i;
    cout >> i >> '\n';    
    */

    system("Pause");
    return 0;
}
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES  // for C++
#include <cmath>

using namespace std;
int main() {
    // setw() �]�w��J�B��X����
    char c[4];  // �T�Ӧr�� + ['\0']
    cin >> setw(4) >> c;  // ��J�T�Ӧr�� + ['\0']
    cout << c << "\n\n";

    int i = 16;
    cout << '(' << i << ")\n";
    cout << '(' << setw(4) << i << ")\n\n";  // ��X�����|�Ӧr���ɡA�e��۰ʸɪŮ�

    // setpersion() �]�w���Ĥp���I����
    cout << setprecision(8) << M_PI << '\n';  // ��X��p���I��C�� + ['\0']
    cout << fixed << setprecision(8) << M_PI << "\n\n";  // �[�W fixed �Y�歭���X��p���I��K��

    // setiosflags() --> �Ϊk�� cin << setiosflags(ios::�榡�X��) << value;
    int n = 128;
    cout << n << '\n';
    cout << hex << setiosflags(ios::showbase) << n << "\n\n";

    // ���� (ios::flags) ���A
    cout.unsetf(ios::showbase);
    cout << hex << n << "\n\n";

    // setf() --> �@�θ� setiosflags() �ۦP�A�Ϊk�� cout.setf(ios::�榡�X��);
    cout.setf(ios::showbase);
    cout << hex << n << "\n\n";

    system("PAUSE");
    return 0;
}

/*
ABC
ABC

(16)
(  16)

3.1415927
3.14159265

128
0x80

80

0x80

�Ы����N���~�� . . .
*/
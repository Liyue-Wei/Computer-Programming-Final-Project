/*
�{���]�p����2.2�G��J�@�Ӧr���A��X�������8�i��B10�i��B��16�i��ASCII�X�C
*/

#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;

    cout.setf(ios::showbase);
    cout << "Oct ASCII = " << oct << static_cast<int>(c) << '\n';
    cout << "Dec ASCII = " << dec << static_cast<int>(c) << '\n';
    cout << "Hex ASCII = " << hex << static_cast<int>(c) << '\n';

    system("PAUSE");
    return 0;
}
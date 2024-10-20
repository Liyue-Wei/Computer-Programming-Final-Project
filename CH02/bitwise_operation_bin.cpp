/*
bitwise operation �줸�B��

AND:�줸 AND �B��l�G&
OR�F�줸�D���� OR �B��l�G|
XOR�F�줸���� OR �B��l�G^
*/

#include <iostream>
#include <bitset>
using namespace std;
int main() {
    char a=65, b=97;
    printf("a = \"%c\", b = \"%c\"\n\n", a, b);
    printf("ASCII code : a = \"%d\", b = \"%d\"\n", static_cast<int>(a), static_cast<int>(b));

    bitset<8> bin_a(a); 
    bitset<8> bin_b(b);
    cout << "bin a = " << bin_a << '\n' << "bin b = " << bin_b << "\n\n";  // printf()���䴩�H�G�i���X

    cout << "Dec a&b = " << static_cast<int>(a&b) << '\n';
    cout << "Dec a|b = " << static_cast<int>(a|b) << '\n';
    cout << "Dec a^b = " << static_cast<int>(a^b) << "\n\n";

    bitset<8> bin_a_and_b(a&b);
    bitset<8> bin_a_or_b(a|b);
    bitset<8> bin_a_xor_b(a^b);

    cout << "Bin a&b = " << bin_a_and_b << '\n';
    cout << "Bin a|b = " << bin_a_or_b << '\n';
    cout << "Bin a^b = " << bin_a_xor_b << '\n';

    system("PAUSE");
    return 0;
}

/*
a = "A", b = "a"

ASCII code : a = "65", b = "97"
bin a = 01000001
bin b = 01100001

Dec a&b = 65
Dec a|b = 97
Dec a^b = 32

Bin a&b = 01000001
Bin a|b = 01100001
Bin a^b = 00100000
�Ы����N���~�� . . . 
*/
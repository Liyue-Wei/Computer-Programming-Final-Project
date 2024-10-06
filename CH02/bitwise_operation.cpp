/*
bitwise operation �줸�B��

AND:�줸 AND �B��l�G&
OR�F�줸�D���� OR �B��l�G|
XOR�F�줸���� OR �B��l�G^
*/

#include <iostream>
using namespace std;
int main() {
    char a=0x41, b=0x61;  // a="A", b="a"

    cout << "a = " << static_cast<int>(a) << "\n";
    cout << "b = " << static_cast<int>(b) << "\n";
    cout << "a&b = " << static_cast<int>(a&b) << "\n";
    cout << "a|b = " << static_cast<int>(a|b) << "\n";
    cout << "a^b = " << static_cast<int>(a^b) << "\n\n";

    cout << hex << "hex a = " << static_cast<int>(a) << "\n";
    cout << hex << "hex b = " << static_cast<int>(b) << "\n";
    cout << hex << "hex a&b = " << static_cast<int>(a&b) << "\n";  
    cout << hex << "hex a|b = " << static_cast<int>(a|b) << "\n";  
    cout << hex << "hex a^b = " << static_cast<int>(a^b) << "\n";  

    system("PAUSE");
    return 0;
}
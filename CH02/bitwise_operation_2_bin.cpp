/*
bitwise operation �줸�B��_2

~ : �줸����B��l�Fbitwise NOT operator
<< : �����B��l�Fleft shift operator
>> : �k���B��l�Fright shift operator
*/

#include <iostream>
#include <bitset>
using namespace std;
int main() {
    char a=65;
    printf("a = \"%c\"\n\n", a);
    printf("ASCII code : a = \"%d\"\n", static_cast<int>(a));

    bitset<8> bin_a(a); 
    cout << "bin a = " << bin_a << "\n\n";  // printf()���䴩�H�G�i���X

    cout << "Dec ~a = " << static_cast<int>(~a) << '\n';
    cout << "Dec a << 1 = " << static_cast<int>(a << 1) << '\n';
    cout << "Dec a >> 1 = " << static_cast<int>(a >> 1) << "\n\n";

    bitset<8> bin_a_NOT(~a);
    bitset<8> bin_a_LEFT(a << 1);
    bitset<8> bin_a_RIGHT(a >> 1);

    cout << "Bin ~a = " << bin_a_NOT << '\n';
    cout << "Bin a << 1 = " << bin_a_LEFT << '\n';
    cout << "Bin a >> 1 = " << bin_a_RIGHT << '\n';

    system("PAUSE");
    return 0;
}
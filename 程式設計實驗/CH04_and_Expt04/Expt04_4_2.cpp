/*
�{���]�p����4.2�G��J�@�ӥ����N�A�DN!=�H
*/

#include <iostream>
using namespace std;
int main() {
    long double f=1.0;
    int i;
    cin >> i;

    for(int n=1; n<=i; n++) {
        f*=n;
        cout << n << "! = " << fixed << f << '\n';
    }
}
#include <iostream>
using namespace std;
int main () {
    int i;
    cout << "��J�@�Ӥ���ƾ��" << endl;
    cin >> i;
    int n=10000;
    do {
        cout << i/n << endl;
        i%=n;
        n/=10;
    } while(n>=1);

    system("PAUSE");
    return 0;
}
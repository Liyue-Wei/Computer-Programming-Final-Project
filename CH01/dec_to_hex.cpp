#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long dec_num;
    cout << "輸入一個10進位整數 : ";
    cin >> dec_num;
    cout << hex << dec_num << '\n';

    system("PAUSE");
    return 0;
}
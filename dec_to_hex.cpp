#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long dec_num;
    cout << "��J�@��10�i���� : ";
    cin >> dec_num;
    cout.setf(ios::uppercase);
    cout << hex << dec_num << '\n';

    system("Pause");
    return 0;
}
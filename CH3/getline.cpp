/*
getline(cin, variable)�A�i�H�ѨM "cin << " ��J�r��ɡA�����L�k�]�t�Ů檺���D

Using getline with string, instead of char[size]
*/

#include <iostream>
using namespace std;
int main() {
    string s;
    cout << "getline���� --> ��J : ABCDE abcde" << '\n';
    getline(cin, s);
    cout << s << '\n';

    s.clear();
    cout << "cin���� --> ��J : ABCDE abcde" << '\n';
    cin >> s;
    cout << s << '\n';

    system("Pause");
    return 0;
}
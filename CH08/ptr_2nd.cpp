#include <iostream>
using namespace std;

int main() {
    int i = 16, n = 32;
    int *ptr = &i;

    // 輸出變量的值和地址
    cout << "變量 i 的值: " << i << endl;
    cout << "變量 i 的地址: " << &i << endl;
    cout << "變量 n 的值: " << n << endl;
    cout << "變量 n 的地址: " << &n << endl << endl;
    
    // 輸出指針的信息
    cout << "ptr 指向的地址: " << ptr << endl;
    cout << "ptr 指向地址中的值: " << *ptr << endl << endl;
    
    // 改變指針指向
    ptr = &n;
    cout << "執行 ptr = &n; 後:" << endl;
    cout << "ptr 現在指向的地址: " << ptr << endl;
    cout << "ptr 現在指向地址中的值: " << *ptr << endl;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// 簡單的指針可視化函數
void visualizePointers(int var1, int var2, int* ptr, string var1Name, string var2Name) {
    cout << "┌─────────────────────────────────┐" << endl;
    cout << "│        記憶體佈局示意圖         │" << endl;
    cout << "├─────────────────────────────────┤" << endl;
    cout << "│ 變數 " << var1Name << "  值: " << var1;
    if(ptr == &var1) cout << " ← ptr 指向這裡";
    cout << endl;
    cout << "│ 地址: " << &var1 << "        │" << endl;
    cout << "├─────────────────────────────────┤" << endl;
    cout << "│ 變數 " << var2Name << "  值: " << var2;
    if(ptr == &var2) cout << " ← ptr 指向這裡";
    cout << endl;
    cout << "│ 地址: " << &var2 << "        │" << endl;
    cout << "└─────────────────────────────────┘" << endl;
    
    cout << endl;
    cout << "ptr 的值(存儲的地址): " << ptr << endl;
    if(ptr) {
        cout << "ptr 指向的值: " << *ptr << endl;
    }
    cout << "ptr 自己的地址: " << &ptr << endl;
    cout << endl;
}

int main() {
    int i = 16, n = 32;
    int *ptr = &i;
    
    cout << "初始化後:" << endl;
    visualizePointers(i, n, ptr, "i", "n");
    
    cout << "執行 ptr = &n; 後:" << endl;
    ptr = &n;
    visualizePointers(i, n, ptr, "i", "n");
    
    cout << "修改 *ptr = 100; 後:" << endl;
    *ptr = 100;
    visualizePointers(i, n, ptr, "i", "n");
    
    return 0;
}
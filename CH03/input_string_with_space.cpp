#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    // �ϥ� fgets()
    char str_2[128];
    fgets(str_2, sizeof(str_2), stdin);  // fgets(variable, sizeof(variable), stdin);
    printf("%s", str_2);  // fgets() �|�۰ʴ���
      
    // �ϥ� getline()
    string str_3;
    getline(cin, str_3);
    // printf("%s\n", str_3);  // printf() �L�k�s��string�A�|�X�{�ýX
    cout << str_3 << '\n';     
    
    // �ϥ� scanf()
    char str[128];
    scanf("%[^\n]", &str);  // %[^\n] --> Ū�����촫��A�Ω�Ū���]�t�Ů檺�r��A����ĳ�ϥ�
    printf("%s\n", str); 
    
    system("PAUSE");
    return 0;
}

/*
ABCDE abcde
ABCDE abcde
ABCDE abcde
ABCDE abcde
ABCDE abcde
ABCDE abcde
�Ы����N���~�� . . .
*/
/*
�{���]�p����4.4�G�ϥ�*�r���b�ù��W�ƦC�@�Ӱ��M���U���E��*�r���������T����
*/

#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=9; i++) {
        for(int n=1; n<=i; n++) {
            // printf("%d*%d=%d\t", i, n, i*n);
            printf("*");
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
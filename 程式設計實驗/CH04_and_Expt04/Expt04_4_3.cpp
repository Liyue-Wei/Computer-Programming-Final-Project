/*
�{���]�p����4.3�G�C�L�E�E���k��
*/

#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<=9; i++) {
        for(int n=1; n<=9; n++) {
            printf("%d*%d=%d\t", i, n, i*n);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
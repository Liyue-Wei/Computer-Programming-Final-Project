#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char c;
    while ((c=_getche()) != 27) {  // ��ESC���X�j��AESC��ASCII Code == 27
        switch (c) {
            case '1': printf(" --> ��\n"); break;
            case '2': printf(" --> �L\n"); break;
            case '3': printf(" --> ��\n"); break;
            case '4': printf(" --> �v\n"); break;
            case '5': printf(" --> ��\n"); break;
            case '6': printf(" --> ��\n"); break;
            case '7': printf(" --> �m\n"); break;
            case '8': printf(" --> ��\n"); break;
            case '9': printf(" --> �h\n"); break;
            case '0': printf(" --> �s\n"); break;
            default: printf(" �Э��s��J\n");
        }
    }

    system("PAUSE");
    return 0;
}
#include <iostream>
#include "rand_func.h"
#define 開始 "Input the starting number: "
#define 結束 "Input the ending number: "
using namespace std;
int main() {
    system("color 02");
    int start, end;
    cout << 開始;
    cin >> start;
    cout << 結束;
    cin >> end;
    cout << "Press \'y\' key to draw a number between " << start << " and " << end << ", or press \'Esc\' to exit. " << endl;
    rand_func(start, end);

    system("PAUSE");
    return 0;
}
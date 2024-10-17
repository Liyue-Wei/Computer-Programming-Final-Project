#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;
int main() {
    float i;
    double i_2;
    long double n;

    cout << "sizeof(float) = " << sizeof(i) << "\n";
    cout << "sizeof(double) = " << sizeof(i_2) << "\n";
    cout << "sizeof(long double) = " << sizeof(n) << "\n";

    cout << "max float = " << numeric_limits<float>::max() << "\n";
    cout << "min float = " << numeric_limits<float>::min() << "\n\n";
    cout << "max double = " << numeric_limits<double>::max() << "\n";
    cout << "min double = " << numeric_limits<double>::min() << "\n\n";
    cout << "max long double = " << numeric_limits<long double>::max() << "\n";
    cout << "min long double = " << numeric_limits<long double>::min() << "\n";

    system("PAUSE");
    return 0;
}

/*
sizeof(float) = 4
sizeof(double) = 8
sizeof(long double) = 16
max float = 3.40282e+38
min float = 1.17549e-38

max double = 1.79769e+308
min double = 2.22507e-308

max long double = 1.18973e+4932
min long double = 3.3621e-4932
�Ы����N���~�� . . . 
*/
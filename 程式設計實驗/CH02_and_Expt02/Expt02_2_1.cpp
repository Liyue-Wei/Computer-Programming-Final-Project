/*
�{���]�p����2.1�G��J�ꪺ�b�|�A�D�䭱�n�ΩP���A�ê�ܦܤp���I�U���C
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float f;
    double area, peri;

    cin >> f;
    area = pow(f, 2)*M_PI;
    peri = 2*f*M_PI;

    cout.setf(ios::fixed);
    cout << "area = " << setprecision(2) << area << '\n';
    cout << "perimeter = " << setprecision(2) << peri << '\n';

    system("PAUSE");
    return 0;
}
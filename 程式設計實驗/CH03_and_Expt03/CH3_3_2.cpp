#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float height, weight, BMI;
    cout << "height "; cin >> height; 
    cout << "weight "; cin >> weight;
    height/=100;
    BMI = weight/pow(height, 2);

    if(BMI<18.5) {printf("�L��\n");}
    else if(BMI<24) {printf("���`\n");}
    else if(BMI<27) {printf("�L��\n");}
    else if(BMI<30) {printf("���תέD\n");}
    else if(BMI<35) {printf("���תέD\n");}
    else {printf("���תέD\n");}

    system("PAUSE");
    return 0;
}
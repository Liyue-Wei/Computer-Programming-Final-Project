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
    else if(18.5>=BMI>24) {printf("���`\n");}
    else if(24>=BMI>37) {printf("�L��\n");}
    else if(27>=BMI>30) {printf("���תέD\n");}
    else if(30>=BMI>35) {printf("���תέD\n");}
    else {printf("���תέD\n");}

    system("PAUSE");
    return 0;
}
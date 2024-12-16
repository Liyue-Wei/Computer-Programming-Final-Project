/*
auto �Ϊk  -->  auto variable_name = value;    // �|�۰ʧP�_�ܼƫ��A�A �@�νd�򭭩��@��ơA�ܼƭȥi�H�ק�A���A���i����

static �Ϊk  -->  static int variable_name = value;    // ���|�۰ʧP�_�ܼƫ��A�A�����ܼơA�@�Ω��ӵ{���A�ܼƭȥi�H�ק�A���A���i����
static auto �Ϊk  -->  static auto variable_name = value;    // �|�۰ʧP�_�ܼƫ��A�A�����ܼơA�@�Ω��ӵ{���A�ܼƭȥi�H�ק�A���A���i����

const �Ϊk  -->  const int variable_name = value;    // ���|�۰ʧP�_�ܼƫ��A�A�����ܼơA�@�Ω��ӵ{���A�ܼƭȤ��i�ק�A���A���i���� 
const auto �Ϊk  -->  const auto variable_name = value;    // �|�۰ʧP�_�ܼƫ��A�A�����ܼơA�@�Ω��ӵ{���A�ܼƭȤ��i�ק�A���A���i����

define �Ϊk  -->  #define variable_name value    // ���|�۰ʧP�_�ܼƫ��A�A�����ܼơA�@�Ω��ӵ{���A�ܼƭȤ��i�ק�A���A���i����

const �P define ���t��  -->  const �|�ˬd���A�Adefine ���|�ˬd���A
*/

#include <iostream>
#include <typeinfo>
using namespace std;
int main() {
    auto i = 16;    
    static auto n = 32;    
    const auto t = 64;   
    #define l 128    

    cout << "Type of i is " << typeid(i).name() << ", i = " << i << endl;
    cout << "Type of n is " << typeid(n).name() << ", n = " << n << endl;
    cout << "Type of t is " << typeid(t).name() << ", t = " << t << endl;
    cout << "Type of l is " << typeid(l).name() << ", l = " << l << endl;

    return 0;
}
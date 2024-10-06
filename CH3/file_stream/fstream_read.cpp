/*
fstream read_file

ifstream inFile("file_name", ios::in); --> Ū���ɮ�
    "inFile", "file_name" --> "�i�ۭq����W��", "�QŪ�����ɮצW��"

inFile >> object; --> �V "object" �g�J�ƾ�

if(!inFile) or if(inFile.is_open()==false) --> �˴��ɮ׬O�_����Q�}��

inFile.close(); --> �����ɮ�
*/

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile("fstream_outfile.txt", ios::in);
    if(!inFile) {cout << "file open error" << '\n';}

    else {
        string str;
        while (getline(inFile, str)) {  // �v��Ū��"file_name"�ɮפ������e
            cout << str << '\n';
            str.clear();
        }
    }

    inFile.close();

    system("PAUSE");
    return 0;
}
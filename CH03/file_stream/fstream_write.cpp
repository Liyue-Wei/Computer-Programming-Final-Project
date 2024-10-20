/*
fstream new_file_write || overwrite_existing_file

ofstream outFile("file_name", ios::out); --> �ЫةνƼg�ɮ�
    "outFile", "file_name" --> "�i�ۭq����W��", "�Q�ЫةγQ�Ƽg���ɮצW��"

outFile << object; --> �V "outFile" �g�J�ƾ�

if(!outFile) or if(outFile.is_open()==false) --> �˴��ɮ׬O�_����Q�}��

outFile << flush; --> �^�g�w�İϡA�T�O�ƾڥߧY�Q�g�J�A�קK�y���ᥢ�Ω���
outFile.close(); --> �����ɮ�
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile("fstream_outfile.txt", ios::out); 
    if(!outFile) {cout << "file open error" << '\n';} 

    else {
        string str;
        getline(cin, str);
        outFile << str << '\n' << flush;
    }

    outFile.close();

    system("PAUSE");
    return 0;
}
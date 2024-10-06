/*
fstream existing_file_append

ofstream outFile("file_name", ios::app); --> �b�{���ɮפW�K�[���e
    "outFile", "file_name" --> "�i�ۭq����W��", "�Q�K�[���ɮצW��"
*/

#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile("fstream_outfile.txt", ios::app); 
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
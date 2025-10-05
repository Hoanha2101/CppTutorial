#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char kytuhoa = toupper('a');
    cout << kytuhoa << endl;
    
    //97 là số nguyên trong bản mã ascii của a
    kytuhoa = toupper(97);
    cout << kytuhoa << endl;

    char kytuthuong = tolower('A');
    cout << kytuthuong << endl;
    
    //97 là số nguyên trong bản mã ascii của a
    kytuthuong = tolower(89);
    cout << kytuthuong << endl;

    const int max = 100;
    char chuoi[max];
    cout << "Moi nhap chuoi: ";
    cin.getline(chuoi, max);
    cout << chuoi << endl;

    for (int i = 0 ; i < strlen(chuoi); i++)
    {
        chuoi[i] = toupper(chuoi[i]);
    }
    cout << chuoi << endl;
}
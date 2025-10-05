#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";
    strcat(str1, str2);
    cout << str1 << endl;

    char str3[100], str4[100];
    cout << "Moi nhap str3: ";
    cin.getline(str3, 100);

    cout << endl;
    
    cout << "Moi nhap str4: ";
    cin.getline(str4, 100);

    strcat(str3, str4);
    cout << str3;

    cout << endl;
    
    //copy n kí tự
    strncat(str1, str2, 3);
    cout << str1;
}
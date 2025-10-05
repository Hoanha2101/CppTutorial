#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char* thutu, kytu;
    char str[100] = "hakhaihoan";

    kytu = 'n';

    thutu = strchr(str, kytu);
    cout << thutu << endl;

    if (thutu == NULL) 
    {
        cout << "Khong tim thay";
    }
    else{
        cout << "index: " << (thutu - str) << endl;
    }

    thutu = strstr(str, "hoan");
    cout << thutu << endl;

    if (thutu == NULL) 
    {
        cout << "Khong tim thay";
    }
    else{
        cout << "index: " << (thutu - str) << endl;
    }
}
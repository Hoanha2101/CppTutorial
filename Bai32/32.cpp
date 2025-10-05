#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[] = "Hell0";
    char str2[] = "Hello";

    int kq = strcmp(str1, str2);
    cout << kq << endl;

    if (kq == 0) {
        cout << "Bang nhau";
    }
    else if (kq > 0)
    {
        cout << "str1 lon hon str2";
    }
    else
    {
        cout << "str1 be hon str2";
    }
    
}
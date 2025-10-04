#include <iostream>

using namespace std;

int main() {
    int n = 1;
    int tong = 0 ;

    do {
        tong = tong + n;
        n ++ ;
    } while (n <= 5);

    cout << "Tong tu 1 - 5 la: " << tong << endl;

    int m = 0;
    while (true)
    {
        cout << "m = " << m << endl;
        m++;
        if (m == 10)
        {
            break;
        };
    } ;
}
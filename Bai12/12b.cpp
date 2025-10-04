#include <iostream>

using namespace std;

int main() {
    int n ;
    cout << "Moi nhap thang n = ";

    cin >> n;

    switch (n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "thang " << n << " la thang co 31 ngay";
            break;
        
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "thang " << n << " la thang co 30 ngay";
            break;

        case 2:
            cout << "thang " << n << " la thang co 28 hoac 29 ngay (nam nhuan)";
            break;

    default:
        cout << "ban nhap sai rui";
        break;
    }
}
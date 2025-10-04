#include <iostream>

using namespace std;

int Tong(int x, int y = 2){
    return x + y;
}

int main() {
    int tong = Tong(1 , 5);
    int tong2 = Tong(1);
    cout << "tong = " << tong << endl;
    cout << "tong2 = " << tong2 << endl;
}
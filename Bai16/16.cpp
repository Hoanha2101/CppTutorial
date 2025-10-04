#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 10; i ++) 
    {
        if (i == 3){
            continue;
        }
        else if (i == 8)
        {
            break;
        }
        else
        {
            cout << "i = " << i << endl;
        }
    }
}
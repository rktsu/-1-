#include <iostream>
using namespace std;

int fib(int n) {
    int temp;
    int x = 0;
    int y = 1;
    for (int i = 3; i <= n; i++) {
        temp = y;
        y = x + y;
        x = temp;
        cout << y << endl;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    cout << "0" << endl << "1" << endl; 
    cout << fib(n);
}
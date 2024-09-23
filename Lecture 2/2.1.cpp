#include <iostream>

using namespace std;
int n = 0;
int sum = 0;

int main() {

    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;
}     
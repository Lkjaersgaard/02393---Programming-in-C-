#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int i = 0;
    float data = 0.0;
    float sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> data;
        sum += data;
    }
    cout << sum << endl;
}
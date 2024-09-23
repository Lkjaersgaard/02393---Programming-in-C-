#include <iostream>
#include <math.h>

using namespace std;
int n = 0;
double sum = 0;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        sum = sum + ((pow(-1,i))/(2*i+1));
    }
    cout << sum*4 << endl;
}       
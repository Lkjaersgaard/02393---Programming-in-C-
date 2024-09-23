#include <iostream>

using namespace std;

int n = 0;
int sum = 1;
int i = 2;
int first = 0;

int main() {
    cin >> n;

    while (n != 1){
        if (n%i == 0){
            if (first == 0){
                cout << i;
                first = 1;
            }
            else{
                cout << " * " << i;
            }
            n = n/i;
        }
        else{
            i++;
        }
    }

}     
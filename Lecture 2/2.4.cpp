#include <iostream>

using namespace std;

int storage[1000] = {0};
int input = 0;

int main() {

    cin >> input;
    while (input != 0){
        if (storage[input-1] > 0 ){
            cout << storage[input-1] << endl;
            storage[input-1] += 1;
        }
        else{
            cout << storage[input-1] << endl;
            storage[input-1] += 1;
        }
        cin >> input;
    }
}     
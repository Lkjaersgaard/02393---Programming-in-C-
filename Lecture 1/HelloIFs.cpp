#include <iostream>

using namespace std;

int main() {
    int x = 0;
    int y = 0;
    //cout << "Enter numbers for x and y (divided by a space): ";
    cin >> x >> y;
    
    if (x == y){
        cout << x << " is equal to " << y << endl;
    } else if (x > y)
    {
        cout << x << " is bigger than " << y << endl;
    } else
    {
        cout << x << " is smaller than " << y << endl;
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

bool run = true;
string input = "";
int bag[1001] = {0};
int value = 0;

int main() {

    while(run){

        cin >> input >> value;

        if(input.compare("qry") == 0){ //input.compare tests the value and makes it easier to compare to a string
            if(bag[value] > 0){
                cout << "T";
            }else{
                cout << "F";
            }
        }
        else if(input.compare("add")==0){
            if(bag[value] >= 0){
                bag[value]++;
            }
        }
        else if(input.compare("del")==0){
            if(bag[value] > 0){
                bag[value]--;
            }
        }
        else if(input.compare("quit")==0){ //end program
            run = false;    
        }
    }
}     
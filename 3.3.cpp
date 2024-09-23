#include <iostream>
#include <string>
using namespace std;

bool run = true;
string input = "";
int counter = 0;

struct PersonData {
    string first;
    string middle;
    string last;
    int number;
    string address;
    int nr;
    int zip;
    string region;
};

PersonData book[50];

string data1 = "";
string data2 = "";
string data3 = "";
int data4 = 0;
string data5 = "";
int data6 = 0;
int data7 = 0;
string data8 = "";

int page = 0;

void clearPersonData(PersonData &person) {
    person.first = "";
    person.middle = "";
    person.last = "";
    person.number = 0;
    person.address = "";
    person.nr = 0;
    person.zip = 0;
    person.region = "";
}


int main() {
    while(run){

        cin >> input >> page;

        if(input.compare("qry") == 0){ //input.compare tests the value and makes it easier to compare to a string
            if(book[page].first.compare("") == 0){
            }else{
                cout << book[page].first << "," << book[page].middle << "," << book[page].last << "," << book[page].number << "," << book[page].address << "," << book[page].nr << "," << book[page].zip << "," << book[page].region << endl;
            }
        }
        else if(input.compare("add")==0){
            cin >> data1 >> data2 >> data3 >> data4 >> data5 >> data6 >> data7 >> data8;
            if(book[page].number == 0){
                book[page] = {data1, data2, data3, data4, data5, data6, data7, data8};
            }
        }
        else if(input.compare("clr")==0){
            clearPersonData(book[page]);
        }
        else if(input.compare("quit")==0){ //end program
            run = false;    
        }
    }
}     